// This is a guessing game. \nYou have 3 chances to guess the correct number between 1 to 15.
// Created by: Kamal Chandra Paul
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

string again;
int main()
{

    cout<< "This is a guessing game. \nYou have 3 chances to guess the correct number between 1 to 15."<< endl<<endl;
start:
    int guessed, counter=0;
    srand(time(0));

    int number = 1+rand()%15;


    cout<< "Please enter your guessed number"<< endl;
    cin>> guessed;

check:
    if (guessed==number){
        cout<< "Bingo! You win! ";
        cout<< "The number was: " << number<<endl;
    }
    else if (guessed<number && counter<=3){
        cout<< "Your guess is too low! ";
        cout<< "Please enter your guessed number"<< endl;
        cin>> guessed;
        counter+=1;
        goto check;
    }

    else if(guessed>number && counter<=3) {
        cout<< "Your guess is too high! ";
        cout<< "Please enter your guessed number"<< endl;
        cin>> guessed;
        counter+=1;
        goto check;
    }
    else
        {cout<< "Sorry! Try again. "<< endl;
        cout<< "The number was: " << number<<endl;
        }

    cout<< endl<< "Wanna play again? (y/n) "<< endl;
    cin>> again;
    if (again == "y" || again== "Y")
        goto start;

    return 0;
}
