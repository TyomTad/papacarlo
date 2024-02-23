#include <iostream>
#include <fstream>
enum sortingstrategy {
    BUBBLE_SORT = 0,
    SELECTION_SORT
};

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void bubble(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

void selection(int arr[], int size) {
    int min_idx;
    for (int i = 0; i < size - 1; ++i) {
        min_idx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(arr[min_idx], arr[i]);
        }
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

struct Sorting {
    sortingstrategy sorting_a;
    void(*fptr)(int*, int);
};

Sorting arr1[] = {
    { BUBBLE_SORT, bubble },
    { SELECTION_SORT, selection }
};

int main() {
    int size = 10;
    std::cout << "Enter size: ";
    int arr[size];
    std::ifstream ifile("Array.txt");

    if(!ifile.is_open()){
        throw "File is close ";
    }
    for (int i = 0; i < size; ++i){
        ifile >> arr[i];
    }
    ifile.close();
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Select the sort type:" << std::endl
        << "For Selection enter 0" << std::endl
        << "For Bubble enter 1 " << std::endl;

    int sort;
    std::cin >> sort;

    switch (sort) {
    case BUBBLE_SORT:
        arr1[0].fptr(arr, size);
        break;
    case SELECTION_SORT:
        arr1[1].fptr(arr, size);
        break;
    default:
        throw "Invalid sorting strategy";
    }
    std::ofstream ofile("Array1.txt");
    
    if(!ofile.is_open()){
        throw "File is close" ;
    }
    
    for (int i = 0; i < size; ++i){
        ofile << arr[i] << " "; 
    }

    ofile.close();
    
    std::cout << std::endl;

    return 0;
}

