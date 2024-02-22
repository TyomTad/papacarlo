#include <iostream>

void swap(int& a,int& b){
        int tmp = 0;
        tmp = a;
        a = b;
        b = tmp;

}
void bublle(int arr[],int size){
    for(int i = 0; i < size ; ++i){
        for(int j = 0 ; j < size-i-1; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0; i < size; ++i){
        std::cout << arr[i] <<" ";
    }
}
void selection(int arr[],int size){
    int min_idx;
    for(int i = 0; i < size - 1; ++i){
        min_idx = i;
        for(int j = i + 1; j < size; ++j){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(arr[min_idx],arr[i]);
        }
    }
    for(int i = 0; i < size; ++i){
        std::cout << arr[i] << " ";
    }

}
int main(){
        int k = 0;
        int size = 0;
        std::cout << "enter size : ";
        std::cin >> size ;
        int arr[size];
        for(int k = 0; k < size ; ++k){
                arr[k] = rand()%10;
        }
        for(int i = 0; i < size ; ++i){
                std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "select the sort type " << std::endl
        << "for Selection enter - 0" << std::endl 
        << "for Bublle enter - 1 " << std::endl;
        int sort ;
        std::cin >> sort ;
        if(sort < 0 || sort > 1){
            throw "sorry ... ";
        }
        if(sort == 0){
            void(*bub)(int*,int) = &bublle;
            bub(arr,size);    
        }
        if(sort == 1){
            void(*sel)(int*,int) = &selection;
            sel(arr,size);
        } 
        std::cout << std::endl;

}
