#include <iostream>
#include <cmath>
class Shape {
    public:
        virtual int calculet() = 0;
};
class Cricle:public Shape{
        double pi = 3.14;
        int radius = 4;
   public:
    int calculet() override{
        return pi * radius * radius;
    }
};
class Retangle:public Shape{
        int a = 4;
        int b = 3;
  public:
    int calculet() override{
        return a * b;
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
