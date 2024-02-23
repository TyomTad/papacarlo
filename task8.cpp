#include <iostream>
#include <cmath>
class Shape {
    public:
        int a = 3;
        int b = 4;
        int c = 5;
        int pi = 3.14;
        int r = 5;
        virtual int calculet() = 0;
};
class Cricle:public Shape{
   public: 
    int calculet() override{
        int P = (pow(3,2) + pow(4,2))/2;
        return P;
    }
};
class Retangle:public Shape{
  public:
    int calculet() override{
        int Pi = pow((pi * r),2);
        return Pi;
    }
};
int main(){
    int j = 0;
    std::cout   << "1 - is Cricle:" << std::endl
                << "2 - is Retangle:" << std::endl;
    std::cin >> j;
    if(j < 1 || j > 2 ){
        throw "....." ;
    }
    if(j == 2){
        Retangle obj;
        std::cout << obj.calculet() << std::endl;
    }
    if(j == 1){
        Cricle obj1;
        std::cout << obj1.calculet() << std::endl;
    }
    
    return 0;
}
