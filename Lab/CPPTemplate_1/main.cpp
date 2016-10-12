/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 21st, 2016, 12:00 PM
   Purpose: Calculate the total amount with tax and tip
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
    float meal=88.67; //Cost of the meal
    float tax=1.0675; //Tax percentage
    float tip=1.2;    //Tip percentage 
    float totCst;     //Total cost of meal with tip and tax
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    totCst=(meal*tax)*tip;          //equation to figure out the total cost
    
    //Display Output
    cout<<"The total cost of the meal = $"<<totCst;
    
    //Exit Program
    return 0;
}