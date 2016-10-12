/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 21st, 2016, 12:00 PM
   Purpose:Compute the total sales tax of a $95 purchase
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
    int itmCst=95;      //The cost of the item
    double Stsal=1.04;  //The amount of state sales tax
    double Consal=0.02; //The amount of country sales tax
    float totCst;       //Total cost of item with taxes
    //Input values
    
    //Process values -> Map inputs to Outputs
    totCst=itmCst*(Stsal+Consal);   //equation to figure out total cost
    
    //Display Output
    cout<<"The total cost is = $"<<totCst;
    
    //Exit Program
    return 0;
}