//// Admission 147683
// CAT 1- Question 3
//9th November

#include <iostream>

using namespace std; 

//A C++ program that calculates the tax payable to the government.
//and net salary(amount after tax deductions) of an employee based on the new tax rate and displays it to the screen.

int main()
{
    //Declare and initialize the variables
    int netSalary; 
    int grossSalary = 10000; 
    int taxPayable; 

    //calculate and output the net salary
    netSalary = grossSalary - (0.25 * grossSalary); 
    cout << "The net salary of an employee at PowerPro is: "<<netSalary<<endl; 

    //calculate and output the tax payable to the government
    taxPayable = (0.25 * grossSalary); 
    cout << "The tax payable to the government by every employee is: " << taxPayable << endl; 

    return 0; 
}

