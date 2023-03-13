#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;



class Address{
public:
    string add;
    string network;
    string host;
    Address(string z) {
        add = std::move(z);
    }
    //friend method and override
    friend istream& operator>>(istream& input,  Address &address){

        return input;
    }

    void setAdd(string a){
        add = std::move(a);
    }

    string getAdd() const{
        return add;
    }
};


//compares the first octets for B,C
bool myCmp(const string& s1, const string& s2){
    if (s1 < s2){
        return s1 < s2;
    }
    return false;
}
//compares first octets for A
bool myCmp2(const Address& s1, const Address& s2){
    int s12 = stoi(s1.getAdd());
    int s22 = stoi(s2.getAdd());
    if (s12 < s22){
        return s12 < s22;
    }
    return false;
}
//function to find the Nth occurrence of a delim
int findNthOccur(string str,
                 char ch, int N)
{
    int occur = 0;

    //loop to find the Nth occurrence of the "."
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ch) {
            occur += 1;
        }
        if (occur == N)
            return i;
    }
    return -1;
}


int main() {
    string S, T;
    stringstream s(S);

    int cA = 0;
    int cB = 0;
    int cC = 0;

    Address address("");

    vector<string>withRemoved;
    //vectors for each class
    vector<Address>classA;
    vector<Address>classB;
    vector<Address>classC;

    vector<int>test;

    vector<string>inFile;

    string i;

    string filename("/Users/fletcherphillips/Desktop/ids.txt");

    ifstream inputFile(filename);

    if (!inputFile.is_open()){
        cerr << "Could not open";
        return EXIT_FAILURE;
    }
    //make vector from the read in file
    while (getline(inputFile, i)){
        inFile.push_back(i);
    }

//sort vector of all the addresses
    sort(inFile.begin(), inFile.end(), myCmp);

    //gets rid of the terms that are class D and E
    for (auto & j : inFile) {
        int x = stoi(j);
        if (x < 224){
            withRemoved.push_back(j);
        }
    }
    // make vectors of type Address for A, B, and C
    for (auto & j : withRemoved) {
        int x = stoi(j);
        test.push_back(x);
        if(x <= 127){
            address.setAdd(j);
            classA.emplace_back(address.getAdd());
        }
        else if (x >= 128 && x <= 191){
            address.setAdd(j);
            classB.emplace_back(address.getAdd());
        }
        else if (x >= 192 && x <= 223){
            address.setAdd(j);
            classC.emplace_back(address.getAdd());
        }
    }

    sort(classA.begin(), classA.end(), myCmp2);

    //finds the amount of ips in each class

    for (const auto &i : test) {
        if(i <= 127){
            cA++;
        }
        else if (i >= 128 && i <= 191){
            cB++;
        }
        else if (i >= 192 && i <= 223){
            cC++;
        }
    }

    //printing the class A networks and hosts
    cout << "Class A has " << cA <<" network addresses\n";
    for(auto & j : classA){
        int pos = j.getAdd().find(".");
        string sub = j.getAdd().substr(pos+1);
        stringstream X(j.getAdd());
        getline(X,T,'.');
        cout << "Network: " << T << " Host: " << sub << "\n";
    }
    //printing the B class networks and hosts
    cout << "Class B has " << cB << " network addresses\n";
    for(auto & k : classB){
        int pos = k.getAdd().find(".");
        int pos2 = findNthOccur(k.getAdd(), '.', 2);
        string sub = k.getAdd().substr(pos2+1,k.getAdd().size());
        string sub2 = k.getAdd().substr(0, pos2);
        cout << "Network: " << sub2 << " Host: " << sub << "\n";
    }

    cout << "Class C has "<< cC << " network addresses\n";
    //printing the class C networks and hosts
    for(auto & l : classC) {
        int pos = l.getAdd().find(".");
        int pos2 = l.getAdd().find_last_of(".");
        string sub = l.getAdd().substr(0,pos2);
        string sub2 = l.getAdd().substr(pos2+1,l.getAdd().size());
        cout << "Network: " << sub << " Host: " << sub2 << "\n";
    }

    inputFile.close();

    return 0;
}


