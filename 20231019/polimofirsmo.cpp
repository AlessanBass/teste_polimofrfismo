#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void som(){
       cout << "Som de um animal generico" << endl;
    }
};


class Cachorro : public Animal{
    public: void som () override{
        cout << "Aainnz Zé da Manga" << endl;
    }
};

class Gato : public Animal{
    public:
    public: void som () override{
        cout << "Miau" << endl;
    }
};




int main(){

    Animal *animal;

    Cachorro dog;
    Gato cat;

    animal = &dog;
    animal->som();

    animal = &cat;
    animal->som();

    return 0;
}