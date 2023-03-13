#include <iostream>
#include <vector>
using namespace std;
int main() {
    int input = 0;
    vector<int> temps;
    std::cout << "Enter integers" << std::endl;
    while((cin >> input)){
        if (input == 0){
            break;
        }
        temps.push_back(input);

    }
    int sum = 0;
    for(unsigned int i = 0; i < temps.size(); i ++){
        sum+=temps[i];
    }
    int ave = sum/2;
    std::cout<< "Average is " << ave << std::endl;
    return 0;
}
