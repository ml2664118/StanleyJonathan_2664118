/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 28th, 2016, 12:00 PM
   Purpose: Calculate the miles per gallon of the car
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
    float gal;      //Number of gallons of gas the car's tank holds
    float trip;     //Number of miles it can be driven on a full tank
    float mpg;      //Miles driven per gallon of gas
    
    //Input values
    
    //Display Output
    cout<<"How many gallons of gas does your car hold?"<<endl;
    cin>>gal;
    cout<<"How many miles can be driven with a full tank of gas?"<<endl;
    cin>>trip;
    
    //Process values -> Map inputs to Outputs
    mpg=trip/gal;
    
    //Display Output answer
    cout<<"The MPG of your car is "<<mpg<<" mpg";
    
    //Exit Program
    return 0;
}