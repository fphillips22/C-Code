#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

//class Term makes a singular term
class Term{

    public:

        int power;
        int coefficient;
//constructor for term
        Term(int y, int coeff){
            coefficient = coeff;
            power = y;
        }

//sets power
        void setPower(int powerSize){
            power = powerSize;
        }
//gets power
        int getPower(){
            return power;
        }
//sets coefficient
        void setCoeff(int coef){
            coefficient = coef;
        }
//gets coefficient
        int getCoeff(){
            return coefficient;
        }
};

//class Polynomial is where the polynomial is built

class Polynomial{

    public:

    Polynomial() = default;

        //function to read in the terms one by one and pushing them back into the vector.
        static void read(){
            vector<Term>setOfTerms;
            bool isDone = true;
            int count = 0;
            int co;
            int ex;
            string t = "";
            char done;
            Term term = Term(co,ex);
            while (isDone){

                cout <<"Enter term: ";
                cin >> t;



                if(t.size() == 1){
                    if (t[0] == 'x'){
                        term.setCoeff(1);
                        term.setPower(1);
                    }
                    else{
                        co = stoi(t);
                        term.setCoeff(co);
                        term.setPower(0);
                    }
                }

                else if (t.size() == 2){
                    if (t[0] == 'x'){
                        term.setCoeff(1);
                        ex = t[1] - 48;
                        term.setPower(ex);
                    }
                    else if (t[1] == 'x'){
                        co = t[0] - 48;
                        term.setCoeff(co);
                        term.setPower(1);
                    }
                }
                else{
                    co = t[0]-48;
                    term.setCoeff(co);
                    ex = t[2] - 48;
                    term.setPower(ex);
                }

                setOfTerms.push_back(term);
                count++;

                cout<<"Are you done? y for yes, n for no: ";
                cin >> done;

                if(done == 'y'){
                    isDone = false;
                }
            }
            //sort is called using myCmp function
            sort(setOfTerms.begin(), setOfTerms.end(), myCmp);
            simplify(setOfTerms);

        }


        //function in order to use in the sort algorithm
    static bool myCmp(Term s1, Term s2)
    {

        if (s1.getPower() == s2.getPower()) {
            return s1.getPower() > s2.getPower();
        }


        else {
            return s1.getPower() > s2.getPower();
        }
    }


    //simplify has one parameter of a vector which will then be traversed to add the polynomial, where it then will print the added polynomial with each term in the correct way.
        static void simplify(vector<Term>termsIn){

            for(int i = 0; i < termsIn.size(); i++) {

                if (termsIn[i].getPower() == 3 && termsIn[i+1].getPower() == 3){
                    termsIn[i+1].setCoeff(termsIn[i].getCoeff() + termsIn[i + 1].getCoeff());
                    termsIn.erase(termsIn.begin()+i);
                }

                if (termsIn[i].getPower() == termsIn[i + 1].getPower()) {
                    termsIn[i+1].setCoeff(termsIn[i].getCoeff() + termsIn[i + 1].getCoeff());
                    termsIn.erase(termsIn.begin()+i);
                }

                if (termsIn[i].getCoeff() ==1 ){
                    cout << "x" << termsIn[i].getPower() << " + ";
                }
                else if (termsIn[i].getPower() == 0) {
                    cout << termsIn[i].getCoeff()<< "";
                }
                else if (termsIn[i].getPower() == 1) {
                    cout << termsIn[i].getCoeff()<< "x"<<" + ";
                }
                else {
                    cout << termsIn[i].getCoeff() << "x" << termsIn[i].getPower() << " + ";
                }
            }
        }
};


//main function where an instance of the Polynomial class is created and read is called
int main() {
    Polynomial polynomial;
    polynomial.read();
    return 0;
}
