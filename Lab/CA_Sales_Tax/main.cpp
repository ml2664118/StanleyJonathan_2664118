/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on September 29th, 2016, 12:00 PM
   Purpose: To determine the price of any item including sales tax for Riverside, CA 
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
    float Price;       //input price of an item 
    float tax=1.08;    //Sales tax in CA
    float totCst;      //Total cost of an item including sales tax
    float taxCst;      //Amount of the sales tax
    
    //Input values
    
    //Display Output
    cout<<"This is to determine the price of an item with sales tax"<<endl;
    cout<<"Input the price of the item"<<endl;
    cin>>Price;
    
    //Process values -> Map inputs to Outputs
    totCst=Price*tax;
    
    //Display Output
    cout<<"Total Cost of item = "<<totCst<<endl;
    
    //Exit Program
    return 0;
}