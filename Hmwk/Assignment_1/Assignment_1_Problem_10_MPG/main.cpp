/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 21st, 2016, 12:00 PM
   Purpose: Determine the MPG for the car
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
    int gals=15;        //How much gasoline the car can hold in it's tank
    double mile=375;    //How far the car can drive with a full tank
    float MPG;          //How much miles per gallon the car has
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    MPG=mile/gals;
    
    //Display Output
    cout<<"The car's MPG = "<<MPG<<" MPG";
    
    //Exit Program
    return 0;
}