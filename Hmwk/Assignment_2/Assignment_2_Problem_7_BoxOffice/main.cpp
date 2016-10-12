/* 
   File:   main
   Author: Jonathan Stanley
   Created on September 28th, 2016, 12:00 PM
   Purpose: Calculates a theaters gross and net box office profit for a night
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
    unsigned char movie;           //Name of the movie 
    float adult;           //How many adult movie tickets were sold
    float child;           //How many children movie tickets were sold
    int adcost=10;        //The cost of an adult movie ticket
    int chcost=6;         //The cost of a children's movie ticket
    float gross;            //Gross box office profits
    float net;              //Net box office profits
    float dis;              //Amount paid to distributor
    
    //Input values
    cout<<"What is the name of the movie?"<<endl;
    cin>>movie;
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>adult;
    cout<<"How many children tickets were sold?"<<endl;
    cin>>child;
    
    //Process values -> Map inputs to Outputs
    gross=(adcost*adult)+(chcost*child);
    net=gross/0.2;
    dis=gross/0.8;
    
    //Display Output
    cout<<"Movie Name:                     "<<movie<<endl;
    cout<<"Adult Tickets Sold              "<<adult<<endl;
    cout<<"Child Tickets Sold              "<<child<<endl;
    cout<<"Gross Box Office Profit         "<<gross<<endl;
    cout<<"Net Box Office Profit           "<<net<<endl;
    cout<<"Amount Paid to Distributor      "<<dis<<endl;
    
    //Exit Program
    return 0;
}