#include <iostream>
using namespace std;
class Person {

public:
    string name;
    int age;

    Person(string x, int y){
        name = x;
        age = y;
    }

    void setName(string n) {
        name = n;
    }

    string getName(){
        return name;
    }

    void setAge(int s) {
        age = s;
    }

    int getAge() {
        return age;
    }
};
int main() {

    Person obj1("",0);
    obj1.setName("Fletcher");
    obj1.setAge(20);



    Person obj2("Fletcher", 20);

    cout<< obj1.getName();
    cout<<" ";
    cout<< obj1.getAge();

    cout<<"\n";

    cout<< obj2.getName();
    cout<<" ";
    cout<< obj2.getAge();
    return 0;
}
