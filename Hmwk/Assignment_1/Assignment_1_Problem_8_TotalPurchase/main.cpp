/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 21st, 2016, 12:00 PM
   Purpose: Total Cost of all 5 items 
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
    double item1=15.95;  //Price of item 1
    double item2=24.95;  //Price of item 2
    double item3=6.95;   //Price of item 3
    double item4=12.95;  //Price of item 4
    double item5=3.95;   //Price of item 5
    double subtot;       //Subtotal of all items
    double tax=1.07;     //Amount of sales tax
    double totCst;       //Total cost of all items including tax
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    subtot=item1+item2+item3+item4+item5;
    totCst=subtot*tax;
    
    //Display Output
    cout<<"The total cost of all items = $"<<totCst;
    
    //Exit Program
    return 0;
}