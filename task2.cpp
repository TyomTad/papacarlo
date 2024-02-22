#include<iostream>
#include<cstring>
enum week {
    Monday = 0,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
}ob;
struct Date{
    int month;
    int day;
    int year;
};
int main(){
    int b = 0;
    std::cin >> b;
    Date a;
    a.month = 12;
    a.day = 21;
    a.year = 2002;
    switch(b){
        case(Monday):
            std::cout << "Monday" << std::endl;
            break;
        case(Tuesday):
            std::cout << "Tuesday" << std::endl;
            break;
        case(Wednesday):
            std::cout << "Wednesday" << std::endl;
            break;
        case(Thursday):
            std::cout << "Thursday" << std::endl;
            break;
        case(Friday):
            std::cout << "Friday" << std::endl;
            break;
        case(Saturday):
            std::cout << "Suterday" << std::endl;
            break;
        case(Sunday):
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "ytenc shabatva or chka: " << std::endl;
    }
    std::cout << a.day <<" "<< a.month <<" "<< a.year <<std::endl;
    
    return 0;
}
