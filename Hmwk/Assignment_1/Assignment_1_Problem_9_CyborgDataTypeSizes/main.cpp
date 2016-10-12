/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 21st, 2016, 12:00 PM
   Purpose: Define how many bytes in the data types
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
    double charc=1; //How many bytes a char holds
    double intg=1;  //How many bytes an int holds
    double flo=4;   //How many bytes a float holds
    double dub=8;   //How many bytes a double holds
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"The amount of bytes a char can hold = "<<charc<<" byte"<<endl;
    cout<<"The amount of bytes an int can hold = "<<intg<<" byte"<<endl;
    cout<<"The amount of bytes a float can hold = "<<flo<<" bytes"<<endl;
    cout<<"The amount of bytes a double can hold = "<<dub<<" bytes"<<endl;
    
    //Exit Program
    return 0;
}