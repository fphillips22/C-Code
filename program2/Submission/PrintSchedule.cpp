//
// Created by Fletcher Phillips on 5/5/22.
//
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
#include "University.h"
#include "ReadEmp.h"


void PrintSchedule(const vector<University>&univ, const vector<string>&classes, int credits) {
    // prints the university, the string of the student or employee, and the int is the index
    for (int i = 0; i < classes.size(); ++i) {
        for (int j = 0; j < univ.size(); j++) {
            if (classes[i] == univ[j].getCNumber()) {
                credits = credits - univ[j].getCredits();
                if (credits >= 0){
                    cout << "Registered for " << univ[j] << endl;
                }
                break;
            }
        }
        if (credits < 0){
            cout << "Could not register for " << classes[i] << endl;
        }

    }
}
