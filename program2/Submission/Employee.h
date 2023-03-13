//
// Created by Fletcher Phillips on 5/5/22.
//
#include "Person.h"
#ifndef PROGRAM2_EMPLOYEE_H
#define PROGRAM2_EMPLOYEE_H
class Employee: public Person{
private:
    string employeeType; // part-time or full time
    string dept; // department nam

public:
    explicit Employee(const vector<string>&employees);
    string getType();
    string getDept();
    friend ostream& operator<<(ostream &output, const Employee &e);
};
#endif //PROGRAM2_EMPLOYEE_H
