#include <iostream>
#include <vector>
using namespace std;

enum class Gender{
    man,
    woman,
    non_binary
};

class Person {

public:
    Person() {

    }

    Gender gen;
    string name;
    int age;
    Person(string x, int y, Gender mfn){
        gen = mfn;
        name = x;
        age = y;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setAge(int s) {
        age = s;
    }

    int getAge() {
        return age;
    }

    string getGender() const {
        vector<string> types{"man", "woman", "non-binary"};
        return types[(int)gen];
    }

    friend istream& operator>>(istream& input,  Person &person){
        int gender;
        input >> person.name >> person.age >> gender;
        person.gen = (Gender)gender;
        return input;
    }

};

bool compare(Person p1, Person p2){
    return (p1.getName() < p2.getName());
}

int main() {
    vector<Person> people;
    Gender e;
    e = Gender::man;
    Person obj1("Sam", 34, e);

    obj1.setName("Sam");








    people.push_back(obj1);

    sort(people.begin(), people.end(), compare);


    for(int i = 0; i < people.size(); i++){
        string x = reinterpret_cast<const string &>(people.at(i));
        cout << people.at(i).getName();
        cout << x << " "<<people.at(i).getAge()<< " ";
        cout << people.at(i).getGender();
    }
    return 0;
}

