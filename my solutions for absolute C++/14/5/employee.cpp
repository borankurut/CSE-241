//This is the file employee.cpp.
//This is the implementation for the class Employee.
//The interface for the class Employee is in the header file employee.h

#include <string>
#include <cstdlib>
#include <iostream>
#include "employee.h"

using std::string;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

namespace SavitchEmployees{
    Employee::Employee(): 
    name("No name yet"), ssn("No number yet"), netPay(0.0){/*empty*/}

    Employee::Employee(const string& theName, const string& theNumber): 
    name(theName), ssn(theNumber), netPay(0.0){/*empty*/}

    string Employee::getName() const{
        return name;
    }

    string Employee::getSsn() const{
        return ssn;
    }

    double Employee::getNetPay() const{
        return netPay;
    }

    void Employee::setName(const string& newName){
        name = newName;
    }

    void Employee::setSsn(const string& newSsn){
        ssn = newSsn;
    }

    void Employee::setNetPay(double newNetPay){
        netPay = newNetPay;
    }

    void Employee::printCheck() const{
        cout << "\nError: printCheck FUNCTION CALLED FOR AN \n"
            <<  "UNDIFFERENTIATED EMPLOYEE. Aborting the program.\n"
            <<  "Check with the author of the program about this bug.\n";
            
        exit(1);
    }

}