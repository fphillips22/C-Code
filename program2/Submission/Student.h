//
// Created by Fletcher Phillips on 5/5/22.
//

#ifndef PROGRAM2_STUDENT_H
#define PROGRAM2_STUDENT_H
#include "Person.h"
class Student: public Person{
private:
    string curCredits;

public:
    explicit Student(const vector<string>&students);
    int getCurrentCredits() const;
    friend ostream& operator<<(ostream &output, const Student &s);
};
#endif //PROGRAM2_STUDENT_H
