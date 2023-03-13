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
#include "ReadStu.h"
#include "splitOneLine.h"

void ReadStu(vector<Student>& students){
    // reads in the data for a student and builds vector
    string line;
    ifstream ifs;
    ifs.open("/Users/fletcherphillips/Desktop/csci112/program2/students.txt");
    while(getline(ifs, line)) {
        Student oneStudent(splitOneLine(line));
        students.push_back(oneStudent);
    }
    ifs.close();
}