//
// Created by Fletcher Phillips on 5/5/22.
//

#include <iostream>
#include <utility>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <algorithm>
using namespace std;
#include "Student.h"
#include "Person.h"



    string curCredits; // amount of credits students currently has


    int Student::getCurrentCredits() const{
        return stoi(curCredits);
    }

    //overload << operator
    ostream& operator<<(ostream &output, const Student &s){
        output << "Student name: "<< s.firstName << " " << s.lastName << " ID: " << s.id << " Current Credits: " << s.curCredits<< endl;
        return output;
}

Student::Student(const vector<string> &students) {
    lastName = students[0];
    firstName = students[1];
    id = students[2];
    curCredits = students[3];
}
