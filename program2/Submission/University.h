//
// Created by Fletcher Phillips on 5/5/22.
//

#ifndef PROGRAM2_UNIVERSITY_H
#define PROGRAM2_UNIVERSITY_H

#include <iostream>
#include <utility>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <algorithm>
using namespace std;

class University {
private:

    string cNumber;
    string title;
    string total_seats;
    string professor;
    string dateTime;
    string location;
    int credits;

public:
    explicit University(const vector<string> &university);
    friend ostream& operator<<(ostream &output, const University &u);
    string getCNumber() const;
    int getCredits() const;
    string getTitle() const;
    int getTotalSeats() const;
    string getProf() const;
    string getDateTime() const;
    string getLoc() const;

    };


#endif //PROGRAM2_UNIVERSITY_H
