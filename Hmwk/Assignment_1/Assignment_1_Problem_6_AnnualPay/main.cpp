/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 21st, 2016, 12:00 PM
   Purpose: Define payAmount, payPeriods, annualPay 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    double payAmount=2200.0;
    double payPeriods=26;
    double annualPay;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    annualPay=payPeriods*payAmount;
    
    //Display Output
    cout<<"The worker's annual pay = $"<<annualPay;
    //Exit Program
    return 0;
}