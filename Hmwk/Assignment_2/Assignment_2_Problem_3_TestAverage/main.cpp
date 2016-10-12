/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 28th, 2016, 12:00 PM
   Purpose: Calculate the average of 5 test grades
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
    double test1,test2,test3,test4,test5;  //Test grades
    float Avgtst;                                //Average test grades
    float subtot;                                //total of all tests combined
    float ans;                                   //The answer rounded to one decimal place
    int tottst=5;                                //Amount of tests
    
    //Input values
    cout<<"Enter 5 test grades to calculate the average"<<endl;
    cin>>test1;
    cin>>test2;
    cin>>test3;
    cin>>test4;
    cin>>test5;
    
    //Process values -> Map inputs to Outputs
    subtot=test1+test2+test3+test4+test5;
    Avgtst=subtot/tottst;
    
    //Round to only one decimal place
    ans=Avgtst*100;
            
    //Display Output
    cout<<"The average of all tests is "<<Avgtst<<endl;
    
    //Exit Program
    return 0;
}