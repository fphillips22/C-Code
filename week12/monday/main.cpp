#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <fstream>

bool myCmp(string s1, string s2){
    if (s1 < s2){
        return s1 < s2;
    }
    return 0;
}



int main() {
    vector<string>inFile;
    string i;
    string filename("/Users/fletcherphillips/Desktop/ids.txt");
    ifstream inputFile(filename);
    if (!inputFile.is_open()){
            cerr << "Could not open";
            return EXIT_FAILURE;
    }

    while (getline(inputFile, i)){
        inFile.push_back(i);
    }

    sort(inFile.begin(), inFile.end(), myCmp);

    for (const auto &i : inFile) {
        cout << i <<"\n";
    }
    inputFile.close();

    return 0;
}
