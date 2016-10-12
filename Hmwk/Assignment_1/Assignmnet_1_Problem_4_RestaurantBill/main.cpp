/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on September 29th, 2016, 12:00 PM
   Purpose:  
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
    double meal=88.67;      //Total cost of meal
    double tax=1.0675;      //Tax
    double tip=1.2;         //The tip 
    float totCst;           //Total cost of the meal including tax and tip
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    totCst=meal*tax*tip;
    
    //Display Output
    cout<<"The total cost of the meal = $"<<totCst<<endl;
    
    //Exit Program
    return 0;
}