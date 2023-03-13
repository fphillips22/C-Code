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
#include "Person.h"


string Person::getName(){
    return firstName + " " + lastName;
    }

    string Person::getID() const{
        return id;
    }

    int Person::getCreditsAvailable() const{
        return creditsAvailable;
    }
