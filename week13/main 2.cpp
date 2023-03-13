#include <iostream>
#include <vector>
#include <algorithm>
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

    int getTotalSeats(){

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

        //will return the building

        return location;
    }

    int getCredits() const{

        //will return the amount

        return credits;
    }

//    friend operator <<()
//    will override <<

};

//makes a student

class Student{
private:
    int curCredits; // amount of credits students taking
public:
    Student(vector<string>students){
        //makes a vector of students
    }

    //get methods for the credits

    //overload << operator here // friend operator <<(){
//
//    }

};

class Employee{
private:
    string employeeType; // part-time or full time
    string dept; // department name

public:
    Employee(const vector<string>&employees){
        // makes a vector of employees and their departments
    }

    //    friend operator <<() will override <<

    //getter methods to return the variables

};

class Person {
protected:
    string fName;
    string lName;
    string id;
    int creditsAvailable;
public:
    //getMethods here
    //bool isName(){
        //will see if person is an actual name
//}
};


int findPrintName(vector<Student>students, vector<Employee>emp, string x, string y){
    //finds the name of the student or employee at spot y of the
}

void ReadUnivC(){
    //reads in the class in the university
}

void ReadStu(){
    // reads in teh data for a student
}
void ReadEmp(){
    //reads the data for an employee
}

void PrintSchedule(vector<University>univ, vector<string>x, int y){
    // prints the university, the string of the student or employee, and the int is the index
}


int main(void) {
        // makes objects of each class
    return 0;
}
