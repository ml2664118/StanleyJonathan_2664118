/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 21st, 2016, 12:00 PM
   Purpose: Calculate the Average from the variables given  
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
    int a=28;       //Integers
    int b=32;
    int c=37;
    int d=24;
    int e=33;
    int sum;
    int Avg;
    int tot=5;
    //Input values
    
    //Process values -> Map inputs to Outputs
    sum=a+b+c+d+e;
    Avg=sum/tot;
    
    //Display Output
    cout<<"The Average of the variables = "<<Avg;
    //Exit Program
    return 0;
}