#include <iostream>
#include <vector>
#include <stdexcept>
#include <string.h>

using namespace std;

void error(string s){
    throw runtime_error("Error: "+s);
}
int main(int argc, char** argv) {

    if(argc == 1){
        error("Did not get values");
    }
    else {
        for (int i = 1; i < argc; i++) {
            int x = atoi(argv[i]) * 2;
            cout << x << "\n";
        }
    }

    return 0;
}

