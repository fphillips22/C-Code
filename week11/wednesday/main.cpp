#include <iostream>
#include <vector>
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

bool compare(Person p1, Person p2){
    return (p1.getName() < p2.getName());
}

int main() {

    vector<Person> people;

    Person obj1("",0);
    obj1.setName("Sam");
    obj1.setAge(34);



    Person obj2("Fletcher", 20);

    Person obj3("Michael", 21);
    Person obj4("Ben", 19);



    people.push_back(obj1);
    people.push_back(obj2);
    people.push_back(obj3);
    people.push_back(obj4);
    sort(people.begin(), people.end(), compare);


    for(int i = 0; i < people.size(); i++){
        string x = reinterpret_cast<const string &>(people.at(i));
        cout << x << " "<<people.at(i).getAge()<< "\n";
    }
    return 0;
}
