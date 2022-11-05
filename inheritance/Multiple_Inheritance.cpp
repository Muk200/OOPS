#include<iostream>
using namespace std;
// one class serves as "PARENT CLASS" for more than "ONE OTHER CLASS"
class Animal{
    
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<" Barking "<<endl;
    };
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<" Speaking "<<endl;
    }
};

//multiple inheritence
class Hybrid: public Animal, public Human{

};

int main(){
    
    cout<<endl;


    Hybrid obj1;
    obj1.speak();
    obj1.bark();



    cout<<endl;
}