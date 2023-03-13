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
#include "Employee.h"


    string employeeType; // part-time or full time
    string dept; // department name


    string Employee::getType(){
        return employeeType;
    }

    string Employee::getDept(){
        return dept;
    }

    //overload << operator
    ostream& operator<<(ostream &output, const Employee &e){
        output << "Employee name: " << e.firstName << " " << e.lastName << " ID: " << e.id << " Type: " << e.employeeType << " Works in: " << e.dept << endl;
        return output;
    }

Employee::Employee(const vector<string> &employees) {
    firstName = employees[1];
    lastName = employees[0];
    id = employees[2];
    employeeType = employees[3];
    dept = employees[4];
}


