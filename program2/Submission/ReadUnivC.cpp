//
// Created by Fletcher Phillips on 5/5/22.
//

#include <iostream>
#include <utility>
#include <vector>
#include <fstream>
using namespace std;
#include "ReadUnivC.h"
#include "University.h"
#include "splitOneLine.h"

void ReadUnivC(vector<University>& university){
    //reads in the class details and builds vector
    string line;
    ifstream ifs;
    ifs.open("/Users/fletcherphillips/Desktop/csci112/program2/classes.txt");
    while(getline(ifs, line)){
        University uni(splitOneLine(line));
        university.push_back(uni);
    }
    ifs.close();
}
