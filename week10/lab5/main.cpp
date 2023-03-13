#include <iostream>
#include <vector>
using namespace std;
#include <stdexcept>

//error function
void error(string s){
    throw runtime_error("Error: " + s);
}

//builds vector of words based on the argument
void vectorBuilder(int x){
    vector<string> number1 = {"NOT_HERE", "one", "two", "three", "four",
                              "five", "six", "seven", "eight", "nine","ten", "eleven", "twelve", "thirteen", "fourteen",
                              "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty"
                              ,"sixty", "seventy", "eighty", "ninety"};

    vector<string>build;

    cout<<"Number ";
    cout<<x;
    cout<<" can be written as ";

    //greater than or equal to 1000
    if (x >= 1000){
        int leftDigit = x /1000;
        //cout <<number1[leftDigit]+" thousand ";
        build.push_back(number1[leftDigit]+" thousand ");
        x -= leftDigit *1000;
    }
    //greater than or equal to 100
    if (x >= 100){
        int leftDigit = x/100;
        //cout << number1[leftDigit] +" hundred ";
        build.push_back(number1[leftDigit] +" hundred ");
        x-= leftDigit *100; // removing the most left digit from our number argument
    }
    //Number greater than 20 and less than 100
    if(x >= 20 && x < 100){
        int leftDigit = x/10;
        //cout<< number1[leftDigit + 18]<<+" ";
        build.push_back(number1[leftDigit + 18] +" ");
        x -= leftDigit * 10;
    }

    //numbers less than 20
    //cout<<number1[x];
    build.push_back(number1[x]);

    for(int i = 0; i < build.size(); i++){
        cout<<build[i];
    }
}



int main(int argc, char** argv) {
    int x;
    vector<int> temps;
    int emptyArguments = 0;

    for(int i = 0; i < argc; i++){
        x = atoi(argv[i]);
        temps.push_back(x);
    }
    for(int i = 0; i < argc; i++){
        emptyArguments += temps[i];
    }

    int testTens = x;

    testTens = testTens/10;
    testTens = testTens%10;
//throws error if tens place is a 1
    if(testTens == 1){
        error("Wrong tens places");
    }
//throws error if there is no argument given
    if(emptyArguments == 0){
        error("Empty argument");
    }
    vectorBuilder(x);

    temps.erase(temps.begin());



    return 0;
}

