 /*
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries Here

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string Computer;                        //Name of the opponent
    int warcnt;                             //How many cards to put face down for war
    const int deck=416;                     //Total points the deck is worth and will end game
    const int min=2;                        //Minimum number player can pick for his/her turn
    const int max=14;                       //Maximum number player can pick for his/her turn
    int player;                       //Keeps track of how many points the player has
    int comp;                         //Keeps track of how many points the computer has
    int choice;                         //Player choice for what type of card or end the game
    int pchoice;                        //Player chooses what number card he/she wants
    
    
    //Input or initialize values Here
    cout<<"How many cards would you like to place face down before you flip";
    cout<<" one for when war occurs(2-4)?"<<endl;
    cin>>warcnt;
    while(warcnt>4||warcnt<2){
        cout<<"Invalid input, Select a number between 2 and 4"<<endl;
        cin>>warcnt;
    }
    
    cout<<"Start!"<<endl;
    cout<<endl;
    
    do{
        cout<<"Would you like to play:"<<endl;
        cout<<"1. A face card (includes Ace)?"<<endl;
        cout<<"2. A number card(includes 10)?"<<endl;
        cout<<"or"<<endl;
        cout<<"3. End the game?"<<endl;
        cin>>choice;
        
        while(choice>3||choice<1){
            cout<<"Invalid input, please select a number between 1 and 3"<<endl;
            cin>>choice;
        }
        if(choice==1){
            cout<<"Which face card would you like to play?"<<endl;
             cout<<"J,Q,K, or A"<<endl;
             cin>>pchoice;
        }
        else if(choice==2){
            cout<<"What number would you like to play (2-10)?"<<endl;
            cin>>pchoice;
        }
        else if(choice==3){
            cout<<"Thank you for playing!"<<endl;
            return 0;
        }
    }
    
    
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}