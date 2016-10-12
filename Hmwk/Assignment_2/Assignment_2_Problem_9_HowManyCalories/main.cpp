/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 28th, 2016, 12:00 PM
   Purpose: Calculate how many calories per cookie 
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
    int calc=100;               //Calories per cookie
    int cookie;                 //How many cookies the person ate
    float totcal;               //Total calories of all cookies eaten
    
    //Input values
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookie;
    
    //Process values -> Map inputs to Outputs
    totcal=cookie*calc;
    
    //Display Output
    cout<<"The total amount of calories in cookies eaten is "<<totcal<<" calories"<<endl;
    
    //Exit Program
    return 0;
}