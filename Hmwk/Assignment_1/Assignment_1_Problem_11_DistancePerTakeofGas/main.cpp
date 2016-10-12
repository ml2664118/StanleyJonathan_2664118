/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 21st, 2016, 12:00 PM
   Purpose: Determine total distance the car can travel in the city and
   on the highway with a full tank
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
    int tank=20;        //Gallons the cars tank can hold
    float cmpg=23.5;    //MPG in the city
    float hmpg=28.9;    //MPG on the highway 
    float ctot;         //How far can the car travel in the city with a full tank
    float htot;         //How far can the car travel on the highway with a full tank
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    ctot=cmpg*tank;         //Calculate the total distance in the city
    htot=hmpg*tank;         //Calculate the total distance on the highway
    
    //Display Output
    cout<<"The total distance that can be traveled in the city = "<<ctot<<" mi"<<endl;
    cout<<"The total distance that can be traveled on the highway = "<<htot<<" mi";
    
    //Exit Program
    return 0;
}