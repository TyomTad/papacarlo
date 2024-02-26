#include <iostream>
#include <stdexcept>
#include <cmath>
class Shape {
    public:
        virtual double calculet() = 0;
};
class Cricle:public Shape{
    double radius;
  public:
    Cricle(double rad) :radius {rad}
    {
        if(rad <= 0){
            throw std::invalid_argument("Radius is nagative!");
        }
    }
    double calculet() override{
        return M_PI * radius * radius;
    }
};
class Rectangle:public Shape{
    double lenght;
    double width;
  public:
    Rectangle(double a,double b) :lenght{a},width {b}
    {
        if(a <= 0 || b <= 0){
            throw std::invalid_argument("Sides is negative!");
        }
    }
    double calculet() override{
        return  lenght * width;
    }
};
int main(){
    try{
        Cricle ob(-5);
        std::cout << "Cricle: " << ob.calculet() << std::endl;
    }catch(...){
        std::cout << "Error Cricle! " << std::endl;
    }

    try{
        Rectangle obj(4, 5);
        std::cout << "Rectangle: " << obj.calculet() << std::endl;
    }catch(...) {
        std::cout << "Error Rectangle! " << std::endl;
    } 
    return 0;
}
