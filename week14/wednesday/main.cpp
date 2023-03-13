#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

class University{

private:
    string cNumber;
    string title;
    int total_seats;
    string professor;
    string dateTime;
    string location;
    int credits;
public:


    string getCNumber(){

        //will return the class number

        return cNumber;
    }

    string getTitle(){

        //will return the title of the class

        return title;
    }

    int getTotalSeats() const{

        //will return the amount of seats in a class

        return total_seats;
    }

    string getProf(){

        //will return the prof of the class

        return professor;
    }

    string getDateTime(){

        //will return the times of the class

        return dateTime;
    }

    string getLoc(){

        //will return the building name

        return location;
    }

    int getCredits() const{

        //will return the amount of credits

        return credits;
    }

//    friend operator <<()
//    will override <<

};

class Person{
protected:
    string firstName;
    string lastName;
    string id;
    int creditsAvailable;
public:
    Person(string fName, string lName, string ID, int credits){
        firstName = std::move(fName);
        lastName = std::move(lName);
        id = std::move(ID);
        creditsAvailable = credits;
    }

    Person() {

    }

    string getName(){
        return firstName + " " + lastName;
    }

    string getID(){
        return id;
    }

    int getCreditsAvailable() const{
        return creditsAvailable;
    }

    bool isName(){
        //will see if person is an actual name
        return false;
    }
};

class Employee: public Person{
private:
    string employeeType; // part-time or full time
    string dept; // department name

public:
    Employee(const vector<string>&employees){
        firstName = employees[1];
        lastName = employees[0];
    }

    string getType(){
        return employeeType;
    }

    string gtDept(){
        return dept;
    }

    friend ostream& operator<<(ostream &output, const Employee &e){
        return output;
    }

};


class Student: public Person{
private:
    int curCredits; // amount of credits students taking
public:
    Student(const vector<string>&students){
        //makes a vector of students
    }

    int getCurrentCredits() const{
        return curCredits;
    }
    //overload << operator here // friend operator <<(){
//
//    }

};


vector<string>splitOneLine(const string& line){
    vector<string>words;
    string temp;
    stringstream str(line);
    while(getline(str, temp, ',')){
        words.push_back(temp);
    }
    return words;
}

int findPrintName(const vector<Student>&students, const vector<Employee>&emp, const string& x, const string& y){
    //finds the name of the student or employee at spot y of the
    return 0;
}

void ReadUnivC(vector<University>& university){
    //reads in the class in the university
    string line;
    ifstream ifs;
    ifs.open("/Users/fletcherphillips/Desktop/csci112/program2/classes.txt");


}

void ReadStu(vector<Student>& students){
    // reads in the data for a student
    string line;
    ifstream ifs;
    ifs.open("/Users/fletcherphillips/Desktop/csci112/program2/students.txt");
    Student oneStudent(splitOneLine(line));
    students.push_back(oneStudent);
    ifs.close();
}

//gets data for one employee line
void ReadEmp(vector<Employee>& emps){
    string line;
    ifstream ifs;
    ifs.open("/Users/fletcherphillips/Desktop/csci112/program2/employees.txt");
    while(getline(ifs, line)) {
        Employee oneEmployee(splitOneLine(line));
        emps.push_back(oneEmployee);
    }
    ifs.close();
}

void PrintSchedule(const vector<University>&univ, const vector<string>&x, int y){
    // prints the university, the string of the student or employee, and the int is the index
}


int main(int argc, char** argv) {
    vector<Employee>employee;
    string line;
    ifstream ifs;
    ifs.open("/Users/fletcherphillips/Desktop/csci112/program2/employees.txt");

    while(getline(ifs, line)){
        splitOneLine(line);
    }

    ReadEmp(employee);

    cout << "First Employees name is " << employee[0].getName() << endl;
    return 0;
}
