#include<iostream>

int main(){
    
    int a = 10;
    int* ptr = &a;
    *ptr = 15;
    std::cout << a << std::endl;
    int &ref = a;
    ref = 20;
    std::cout << ref << std::endl;
    
}
