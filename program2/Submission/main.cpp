#include <iostream>
#include <utility>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <algorithm>
using namespace std;
#include "Employee.h"
#include "Student.h"
#include "University.h"
#include "ReadEmp.h"
#include "ReadStu.h"
#include "ReadUnivC.h"
#include "Person.h"
#include "splitOneLine.h"
#include "PrintSchedule.h"



int main() {
    //vectors of all the classes
    vector<Employee>employee;
    vector<Student>student;
    vector<University>university;
    string name;
    string classTake;
    int creditsAvailable = 0;

    //calls to make vectors
    ReadEmp(employee);
    ReadStu(student);
    ReadUnivC(university);

    cout << "Enter first and last name: " << endl;
    getline(cin, name);

    cout << "Enter classes to take - one line with spaces in between: " << endl;
    getline(cin, classTake);


    //sets the amount of credits that's available to be taken
    for (auto & i : student) {
        if (i.getName() == name){
            creditsAvailable = 21;
        }
    }

    for (auto & i : employee) {
        if (i.getName() == name && i.getType() == "FT"){
            creditsAvailable = 7;
        }
        else if (i.getName() == name && i.getType() == "PT"){
            creditsAvailable = 3;
        }
    }

    for(auto & k : student){
        if (k.getName() == name){
            cout << k << "\n";
        }
    }

    for (auto & n : employee) {
        if (n.getName() == name){
            cout << n << "\n";
        }
    }

    char space = ' ';
    vector<string> brokenClasses{};

    stringstream str(classTake);
    string classes;
    while (std::getline(str, classes, space)){
        classes.erase(std::remove_if(classes.begin(), classes.end(), ::ispunct), classes.end());
        brokenClasses.push_back(classes);
    }

    //prints the schedule for the person
    PrintSchedule(university, brokenClasses, creditsAvailable);

    return 0;
}