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

class Sort{
 protected:
    int* arr;
    int size;
 public:
    Sort(int* array,int s) : arr(array),size(s) {}
    virtual ~Sort() {}

    virtual void sort() = 0 ;
};
class Bubble: public Sort{
    public:
    Bubble(int* array,int s) : Sort(array,s) {}
        void sort() override{
                for (int i = 0; i < size; ++i) {
                    for (int j = 0; j < size - i - 1; ++j) {
                        if (arr[j] > arr[j + 1])
                        {
                            swap(arr[j], arr[j + 1]);
                        }
                    }
                }
                for (int i = 0; i < size; ++i)
                {
                    std::cout << arr[i] << " ";
                }
        }
};
class Selection: public Sort{
    public:
    Selection(int* array,int s) : Sort(array,s) {}
        void sort() override{
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
};
int main() {
    int size = 10;
    //std::cout << "Enter size: ";
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

    int tar;
    std::cin >> tar;
    Sort* sortAlgorithm;
    switch (tar) {
    case BUBBLE_SORT:
        sortAlgorithm = new Bubble(arr, size);
        break;
    case SELECTION_SORT:
        sortAlgorithm = new Selection(arr, size);
        break;
    default:
        throw "Invalid sorting strategy";
    }

    sortAlgorithm -> sort();
   
   std::ofstream ofile("Array1.txt");

    if(!ofile.is_open()){
        throw "File is close" ;
    }

    for (int i = 0; i < size; ++i){
        ofile << arr[i] << " ";
    }

    ofile.close();

    std::cout << std::endl;
    
    delete sortAlgorithm;
    
    return 0;
}

