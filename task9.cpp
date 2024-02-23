#include <iostream>
#include <cmath>
class Shape {
    public:
        virtual int calculet() = 0;
};
class Cricle:public Shape{
        int radius = 3.0;
        int pi = 3.14;
   public:
    int calculet() override{
        return pi * radius * radius;
    }
};
class Retangle:public Shape{
    int a = 3;
    int b = 4;
  public:
    int calculet() override{
        return a * b;
    }
};
void print (Shape* shape){
    std::cout << " ----> " << shape -> calculet()<< std::endl;
};
int main(){
    Cricle cricle;
    Retangle retangle;

    print(&cricle);
    print(&retangle);

    return 0;
}
