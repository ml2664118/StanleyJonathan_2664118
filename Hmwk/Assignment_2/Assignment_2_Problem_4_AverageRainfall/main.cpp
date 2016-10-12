/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 28th, 2016, 12:00 PM
   Purpose: Calculate the average rainfall for three months
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
    short month1,month2,month3;    //Which months for the time period
    float rain1,rain2,rain3;       //How much rain each month
    float avgrain;                  //The average rainfall for the time 3 months
    
    //Input values
    cout<<"Enter the name of 3 consecutive months"<<endl;
    cin>>month1;
    cin>>month2;
    cin>>month3;
    cout<<"Enter rainfall in inches for the three months"<<endl;
    cin>>rain1;
    cin>>rain2;
    cin>>rain3;
    
    //Process values -> Map inputs to Outputs
    avgrain=(rain1+rain2+rain3)/3;
    
    //Display Output
    cout<<"The average rainfall for "<<month1,month2,month3<<"is"<<avgrain<<" inches"<<endl;
    
    //Exit Program
    return 0;
}