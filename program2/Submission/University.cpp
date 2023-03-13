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
#include "University.h"

University::University(const vector<string>&university){
    cNumber = university[0];
    title = university[1];
    total_seats = university[3];
    professor = university[6];
    dateTime = university[7];
    location = university[8];
    credits = stoi(university[9]);
}

string University::getCNumber() const{

    //will return the class number

    return cNumber;
}

string University::getTitle() const{

    //will return the title of the class

    return title;
}

int University::getTotalSeats() const{

    //will return the amount of seats in a class

    return stoi(total_seats);
}

string University::getProf() const{

    //will return the prof of the class

    return professor;
}

string University::getDateTime() const{

    //will return the times of the class

    return dateTime;
}

string University::getLoc() const{

    //will return the building name

    return location;
}

int University::getCredits() const{

    //will return the amount of credits

    return credits;
}

ostream& operator<<(ostream &output, const University &u){
    output << u.cNumber << " taught by " << u.professor << " at " << u.location << " in " << u.dateTime << endl;
    return output;
}





