//
// Created by Fletcher Phillips on 5/5/22.
//

#ifndef PROGRAM2_PERSON_H
#define PROGRAM2_PERSON_H
class Person{
protected:
    string firstName;
    string lastName;
    string id;
    int creditsAvailable;

public:

    string getName();

    string getID() const;

    int getCreditsAvailable() const;

};
#endif //PROGRAM2_PERSON_H
