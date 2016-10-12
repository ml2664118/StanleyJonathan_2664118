/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 29th, 2016, 12:00 PM
   Purpose: How many acres in a tract of land
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
    double acre=43560;   //How many square feet in an acre
    double tract=391876; //How many square feet in the tract of land
    float land;          //Amount of acres in the tract
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    land=tract/acre;
    
    //Display Output
    cout<<"There are "<<land<<" acres in the tract";
    
    //Exit Program
    return 0;
}