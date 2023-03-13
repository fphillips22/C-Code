#include <iostream>
using namespace std;

class Animal{
public:
    int getSpeed() const{
        return speed;
    }

    Animal(){
        cout << "I am an animal\n";
    }

protected:
    int speed;
};

class Cat: public Animal{
public:
    Cat(){
        cout << "I am a cat ";
        speed = 30;
    }
};

class Dog: public Animal{
public:
    Dog(){
        cout << "I am a dog ";
        speed = 20;
    }
};

class Giraffe: public Animal{
public:
    Giraffe(){
        cout << "I am a giraffe ";
        speed = 37;
    }
};
int main() {
    Cat kitty = *new Cat();
    cout << kitty.getSpeed() << " mph\n";

    Dog dog = *new Dog();
    cout << dog.getSpeed() << " mph\n";

    Giraffe giraffe = *new Giraffe();
    cout << giraffe.getSpeed() << " mph";

    return 0;
}
