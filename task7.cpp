#include<iostream>

class Book {
    private:
        std::string name_book;
        std::string autor;
        int ISBN;
    public:
        void set_name(std::string name){
            name_book = name;
        }
        void set_autor(std::string aut){
            autor = aut;
        }
        void set_isb(int isb){
            ISBN = isb;
        }
        std::string get_name(){
            return name_book;
        }
        std::string get_autor(){
            return autor;
        }
        int get_isb(){
            return ISBN;
        }
};

int main(){
    Book obj;
    obj.set_name("Best Book");
    obj.set_autor("Sensey");
    obj.set_isb(15);
    std::cout << obj.get_name() << std::endl;
    std::cout << obj.get_autor() << std::endl;
    std::cout << obj.get_isb() << std::endl;
    return 0;
}
