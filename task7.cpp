#include<iostream>

class Book {
    private:
        std::string name_book;
        std::string autor;
        int ISBN;
    public:
        void set(std::string name,std::string aut,int isbn){
            name_book = name;
            autor = aut;
            ISBN = isbn;
        }
        void get(){
            std::cout <<"Book name is: "<< name_book << std::endl;
            std::cout << "Autor name: " << autor << std::endl;
            std::cout << "ISBN : " << ISBN << std::endl;
        }
};

int main(){
    Book obj;
    obj.set("Best Book","Sensey",15);
    obj.get();
    
    return 0;
}
