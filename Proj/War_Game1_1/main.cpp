 /*
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on December 12th, 2016, 12:00 AM
 * Purpose: Create the game of war
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
    int draw;                               //Number of draws
    int J=11;                               //Value of Jack
    int Q=12;                               //Value of Queen
    int K=13;                               //Value of King  
    int A=14;                               //Value of Ace
    int warcnt;                             //How many cards to put face down for war
    const int min=2;                        //Minimum number player can pick for his/her turn
    const int max=14;                       //Maximum number player can pick for his/her turn
    int player=26;                       //Keeps track of how many points the player has
    int comp=26;                         //Keeps track of how many points the computer has
    int choice;                         //Player choice for what type of card or end the game
    int pchoice;                        //Player chooses what number card he/she wants
    int cchoice;                        //Random number the computer created
    int war=0;                           //Keeps track the number of wars
    
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
    
    for (int count=0;player<52&&comp<52;count++){
        cout<<"What would you like to play?:"<<endl;
        cout<<"1. A face card (includes Ace)?"<<endl;
        cout<<"2. A number card(includes 10)?"<<endl;
        cout<<"or"<<endl;
        cout<<"3. End the game?"<<endl;
        cin>>choice;
        cout<<endl;
        cout<<endl;
        
        //Random Number seed for card choice for computer
        srand(time(NULL));
        //Random number generator for computer
        cchoice=rand()%10+5;
        
        if (choice>3||choice<1){
            cout<<"Invalid input, please select a number between 1 and 3"<<endl;
            cin>>choice;
        }
        else if(choice==1){
            cout<<"Which face card would you like to play?"<<endl;
             cout<<"J=11,Q=12,K=13, or A=14 (Please enter numeric value of card)"<<endl;
             cin>>pchoice; 
             cout<<endl;
             cout<<endl;
             
             while (pchoice>14||pchoice<11){
                 cout<<"Invalid input, please a number between 11 and 14"<<endl;
                 cin>>pchoice;
             }
             
             if (pchoice>cchoice){
                 cout<<"You won the round!"<<endl;
                 player++;
                 comp--;
                 cout<<"Player:   "<<player<<endl;
                 cout<<"Computer: "<<comp<<endl;
                 cout<<"Wars:     "<<war<<endl;
                 cout<<"Draw:     "<<draw<<endl;
             }
             else if (pchoice<cchoice){
                 cout<<"Computer wins the round"<<endl;
                 comp++;
                 player--;
                 cout<<"Player:   "<<player<<endl;
                 cout<<"Computer: "<<comp<<endl;
                 cout<<"Wars:     "<<war<<endl;
                 cout<<"Draw:     "<<draw<<endl;
             }
             else if (pchoice==cchoice){
                 cout<<"You and the computer have declared war!"<<endl;
                 cout<<"Place "<<warcnt<<" cards down"<<endl;
                 cout<<"Flip the "<<warcnt+1<<" card"<<endl;
                 cout<<"What card did you flip?"<<endl;
                 cin>>pchoice;
                 
                 if (pchoice>cchoice){
                 cout<<"You won the round!"<<endl;
                 player++;
                 comp--;
                 war++;
                 cout<<"Player:   "<<player<<endl;
                 cout<<"Computer: "<<comp<<endl;
                 cout<<"Wars:     "<<war<<endl;
                 cout<<"Draw:     "<<draw<<endl;
                }
                else if (pchoice<cchoice){
                 cout<<"Computer wins the round"<<endl;
                 comp++;
                 player--;
                 war++;
                 cout<<"Player:   "<<player<<endl;
                 cout<<"Computer: "<<comp<<endl;
                 cout<<"Wars:     "<<war<<endl;
                 cout<<"Draw:     "<<draw<<endl;
                }
                else if (pchoice==cchoice){
                    cout<<"This round is a draw"<<endl;
                    draw++;
                    war++;
                    cout<<"Player:   "<<player<<endl;
                    cout<<"Computer: "<<comp<<endl;
                    cout<<"Wars:     "<<war<<endl;
                    cout<<"Draw:     "<<draw<<endl;
                }
             }
        }
        else if(choice==2){
            cout<<"What number would you like to play (2-10)?"<<endl;
            cin>>pchoice;
            cout<<endl;
            cout<<endl;
            
            while (pchoice<2||pchoice>10){
                cout<<"Invalid input, please select a number between 2 and 10"<<endl;
                cin>>pchoice;
            }
                
            if (pchoice>cchoice){
                 cout<<"You won the round!"<<endl;
                 player++;
                 comp--;
                 cout<<"Player:   "<<player<<endl;
                 cout<<"Computer: "<<comp<<endl;
                 cout<<"Wars:     "<<war<<endl;
                 cout<<"Draw:     "<<endl;
             }
             else if (pchoice<cchoice){
                 cout<<"Computer wins the round"<<endl;
                 comp++;
                 player--;
                 cout<<"Player:   "<<player<<endl;
                 cout<<"Computer: "<<comp<<endl;
                 cout<<"Wars:     "<<war<<endl;
                 cout<<"Draw:     "<<draw<<endl;
             }
             else if (pchoice==cchoice){
                 cout<<"You and the computer have declared war!"<<endl;
                 cout<<"Place "<<warcnt<<" cards down"<<endl;
                 cout<<"Flip the "<<warcnt+1<<" card"<<endl;
                 cout<<"What card did you flip?"<<endl;
                 cin>>pchoice;
                 
                 if (pchoice>cchoice){
                 cout<<"You won the round!"<<endl;
                 player++;
                 comp--;
                 war++;
                 cout<<"Player:   "<<player<<endl;
                 cout<<"Computer: "<<comp<<endl;
                 cout<<"Wars:     "<<war<<endl;
                 cout<<"Draw:     "<<draw<<endl;
                }
                else if (pchoice<cchoice){
                 cout<<"Computer wins the round"<<endl;
                 comp++;
                 player--;
                 war++;
                 cout<<"Player:   "<<player<<endl;
                 cout<<"Computer: "<<comp<<endl;
                 cout<<"Wars:     "<<war<<endl;
                 cout<<"Draw:     "<<draw<<endl;
                }
                else if (pchoice==cchoice){
                    cout<<"This round is a draw"<<endl;
                    draw++;
                    war++;
                    cout<<"Player:   "<<player<<endl;
                    cout<<"Computer: "<<comp<<endl;
                    cout<<"Wars:     "<<war<<endl;
                    cout<<"Draw:     "<<draw<<endl;
                }
             }
        }
        else if(choice==3){
            cout<<"Thank you for playing!"<<endl;
            cout<<"Final score:"<<endl;
            cout<<"Player:     "<<player<<endl;
            cout<<"Computer:   "<<comp<<endl;
            cout<<"Wars:       "<<war<<endl;
            cout<<"Draw:       "<<draw<<endl;
            
            return 0;
        }
    }
    if (player==52){
        cout<<"Congratulations you won the game!"<<endl;
    }
    else if (comp==52){
        cout<<"Oh no you lost!"<<endl;
    }
    
    
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}