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
#include "ReadEmp.h"
#include "Employee.h"
#include "splitOneLine.h"

void ReadEmp(vector<Employee>& staff){
    string line;
    ifstream ifs;
    ifs.open("/Users/fletcherphillips/Desktop/csci112/program2/employees.txt");
    while(getline(ifs, line)) {
        Employee oneEmployee(splitOneLine(line));
        staff.push_back(oneEmployee);
    }
    ifs.close();
}