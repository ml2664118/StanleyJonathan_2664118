/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 28th, 2016, 12:00 PM
   Purpose: Calculate the percentage of males to females
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
    float male;                 //How many males are in the class
    float female;               //How many females are in the class
    float mper;                 //Percentage of males
    float fper;                 //Percentage of females
    float totppl;               //How many people are in the class
    //Input values
    cout<<"How many males are in the class?"<<endl;
    cin>>male;
    cout<<"How many females are in the class?"<<endl;
    cin>>female;
    
    //Process values -> Map inputs to Outputs
    totppl=male+female;
    mper=(male/totppl)*100;
    fper=(female/totppl)*100;
    
    //Display Output
    cout<<"The percentage of males in the class is "<<mper<<"%"<<endl;
    cout<<"The percentage of females in the class is "<<fper<<"%"<<endl;
    
    //Exit Program
    return 0;
}