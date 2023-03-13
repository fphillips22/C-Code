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
#include "splitOneLine.h"

vector<string>splitOneLine(const string& line){
    vector<string>words;
    string temp;
    stringstream str(line);
    while(getline(str, temp, ',')){
        words.push_back(temp);
    }
    return words;
}
