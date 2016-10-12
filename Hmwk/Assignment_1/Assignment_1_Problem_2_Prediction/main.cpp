/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 21st, 2016, 12:00 PM
   Purpose: Predict how much the East Cost Division will make
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
    double pernt=0.58;     //Percentage the East Coast Division gets from sales
    float sales=8.6e6f; //Projected sales
    int totSales;       //How much the East Coast Division is expected to get
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    totSales=pernt*sales;
    
    //Display Output
    cout<<"Total projected sales = $"<<totSales<<endl;
    
    //Exit Program
    return 0;
}