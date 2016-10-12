/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 28th, 2016, 12:00 PM
   Purpose: How many tickets for each class were sold and income generated
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
    int costA=15;     //Cost of class A tickets
    int costB=12;     //Cost of class B tickets
    int costC=9;      //Cost of class C tickets
    float soldA,soldB,soldC;       //Amount of tickets sold for each class
    float totA,totB,totC;          //Revenue generated for each class 
    float sales;                   //Total sales from tickets
    
    //Input values
    cout<<"How many tickets were sold for class A?"<<endl;
    cin>>soldA;
    cout<<"How many tickets were sold for class B?"<<endl;
    cin>>soldB;
    cout<<"How many tickets were sold for class C?"<<endl;
    cin>>soldC;
    
    //Process values -> Map inputs to Outputs
    totA=costA*soldA;      //Revenue for class A
    totB=costB*soldB;      //Revenue for class B
    totC=costC*soldC;      //Revenue for class C
    sales=totA+totB+totC;  //Total sales from tickets
    
    //Display Output
    cout<<"Total revenue generated from all ticket sales = $"<<sales<<endl;
    
    //Exit Program
    return 0;
}