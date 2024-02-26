#include <iostream>
#include <stdexcept>
#include <cmath>

template<typename T>
class Shape {
    public:
        virtual T calculet() = 0;
};
template<typename T>
class Cricle:public Shape<T> {
    T radius;
  public:
    Cricle(T rad) :radius {rad}
    {
        if(rad <= 0){
            throw std::invalid_argument("Radius is nagative!");
        }
    }
    T calculet() override{
        return M_PI * radius * radius;
    }
};
template<typename T>
class Rectangle:public Shape<T> {
    T lenght;
    T width;
  public:
    Rectangle(T a,T b) :lenght{a},width {b}
    {
        if(a <= 0 || b <= 0){
            throw std::invalid_argument("Sides is negative!");
        }
    }
    T calculet() override{
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
