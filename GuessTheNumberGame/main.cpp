//
//  main.cpp
//  GuessTheNumberGame
//
//  Created by Mohamed  
//

#include <iostream>
using namespace std;
int main() {
    cout << "\n\t======================================================================================" << endl;
    cout << "\t||                                                                                  ||" << endl;
    cout << "\t||                                WELCOME TO THE                                    ||" << endl;
    cout << "\t||                           GUESS THE NUMBER GAME!                                 ||" << endl;
    cout << "\t||                                                                                  ||" << endl;
    cout << "\t||   - Guess a number between 1 and 100.                                            ||" << endl;
    cout << "\t||   - You'll have limited attempts based on your chosen difficulty level.          ||" << endl;
    cout << "\t||   - Try to find the secret number!                                               ||" << endl;
    cout << "\t||                                                                                  ||" << endl;
    cout << "\t||                                GOOD LUCK!                                        ||" << endl;
    cout << "\t||                                                                                  ||" << endl;
    cout << "\t======================================================================================" << endl;
    int x,y, z;
    cout<<"\t Enter 1 to play the number guessing game or 0 to exit: ";
    cin>>x;
    if(x==1)
    {
        cout << " " << endl;
        cout << "\t Please enter the difficulty level:" << endl;
        cout << "\t 1 for easy! (10 Attempts) \t    2 for medium! (7 Attempts) \t    3 for difficult! (5 Attempts)" << endl;
        cout << "\t Enter the number:";
        
        cin >> y;
        if (y == 1)
        {
            cout << "\t You have 10 Attempts for finding the secret number between 1 and 100." << endl;
            
            
            for (int i = 1;i <= 10;i++)
            {
                cout<<endl;
                cout << "\t Enter the number:";
                cin >> z;
                if (z == 34)
                {
                    cout << "\n\t--------------------------------------------------" << endl;
                    cout << "\t|             CONGRATULATIONS!                   |" << endl;
                    cout << "\t|          Well played! You won!                 |" << endl;
                    cout << "\t|        The secret number was: 34               |" << endl;
                    cout << "\t|                                                |" << endl;
                    cout << "\t|      Thanks for playing. We hope you enjoyed!  |" << endl;
                    cout << "\t|   Play again and challenge yourself next time! |" << endl;
                    cout << "\t--------------------------------------------------\n" << endl;
                    break;
                }
                
                else if (z < 34)
                {
                    cout<<endl;
                    cout << "\t Nope, " << z << " is not the right number." << endl;
                    cout << "\t The secret number is greater than the number you have chosen." << endl;
                    cout <<"\t " <<10 - i << " Attempts left." << endl;
                    cout<<" "<<endl;
                    
                    
                }
                else if(z>34)
                {
                    cout<<endl;
                    cout << "\t Nope, " << z << " is not the right number." << endl;
                    cout << "\t The secret number is smaller than the number you have chosen." << endl;
                    cout <<"\t " <<10 - i << " Attempts left." << endl;
                    cout<<" "<<endl;
                    
                    
                }
                else
                {
                    cout << "\n\t--------------------------------------------------" << endl;
                    cout << "\t|                   GAME OVER!                   |" << endl;
                    cout << "\t|         The secret number was: 34              |" << endl;
                    cout << "\t|                                                |" << endl;
                    cout << "\t|            Better luck next time!              |" << endl;
                    cout << "\t|    Try again and see if you can win!           |" << endl;
                    cout << "\t--------------------------------------------------\n" << endl;

                }
            }
                    }
        else if (y == 2)
        {
            cout << "\t You have 7 Attempts for finding the secret number between 1 and 100." << endl;
            
            
            for (int i = 1;i <= 7;i++)
            {
                cout<<endl;
                cout << "\t Enter the number:";
                cin >> z;
                if (z == 34)
                {
                    cout << "\n\t--------------------------------------------------" << endl;
                    cout << "\t|             CONGRATULATIONS!                   |" << endl;
                    cout << "\t|          Well played! You won!                 |" << endl;
                    cout << "\t|        The secret number was: 34               |" << endl;
                    cout << "\t|                                                |" << endl;
                    cout << "\t|      Thanks for playing. We hope you enjoyed!  |" << endl;
                    cout << "\t|   Play again and challenge yourself next time! |" << endl;
                    cout << "\t--------------------------------------------------\n" << endl;
                    break;
                }
                else if (z < 34)
                {
                    cout<<endl;
                    cout << "\t Nope, " << z << " is not the right number." << endl;
                    cout << "\t The secret number is greater than the number you have chosen." << endl;
                    cout <<"\t " << 7 - i << " Attempts left." << endl;
                    cout<<" "<<endl;
                    
                    
                }
                else if(z>34)
                {
                    cout<<endl;
                    cout << "\t Nope, " << z << " is not the right number." << endl;
                    cout << "\t The secret number is smaller than the number you have chosen." << endl;
                    cout <<"\t "<< 7 - i << " Attempts left." << endl;
                    cout<<" "<<endl;
                    
                    
                }
                else{
                    cout << "\n\t--------------------------------------------------" << endl;
                    cout << "\t|                   GAME OVER!                   |" << endl;
                    cout << "\t|         The secret number was: 34              |" << endl;
                    cout << "\t|                                                |" << endl;
                    cout << "\t|            Better luck next time!              |" << endl;
                    cout << "\t|    Try again and see if you can win!           |" << endl;
                    cout << "\t--------------------------------------------------\n" << endl;
                }
            }
            
        }
        else if (y == 3)
        {
            cout << "\t You have 5 Attempts for finding the secret number between 1 and 100." << endl;
            
            for (int i = 1;i <= 5;i++)
            {
                cout << "\t Enter the number:";
                cin >> z;
                if (z == 34)
                {
                    
                    cout << "\n\t--------------------------------------------------" << endl;
                    cout << "\t|             CONGRATULATIONS!                   |" << endl;
                    cout << "\t|          Well played! You won!                 |" << endl;
                    cout << "\t|        The secret number was: 34               |" << endl;
                    cout << "\t|                                                |" << endl;
                    cout << "\t|      Thanks for playing. We hope you enjoyed!  |" << endl;
                    cout << "\t|   Play again and challenge yourself next time! |" << endl;
                    cout << "\t--------------------------------------------------\n" << endl;
                    break;
                }
                else if (z < 34)
                {
                    cout<<endl;
                    cout << "\t Nope, " << z << " is not the right number." << endl;
                    cout << "\t The secret number is greater than the number you have chosen." << endl;
                    cout <<"\t "<< 5 - i << " Attempts left." << endl;
                    cout<<" "<<endl;
                    
                    
                }
                else if(z>34)
                {
                    cout<<endl;
                    cout << "\t Nope, " << z << " is not the right number." << endl;
                    cout << "\t The secret number is smaller than the number you have chosen." << endl;
                    cout <<"\t "<< 5 - i << " Attempts left." << endl;
                    cout<<" "<<endl;
                    
                    
                }
                else
                {
                    cout << "\n\t--------------------------------------------------" << endl;
                    cout << "\t|                   GAME OVER!                   |" << endl;
                    cout << "\t|         The secret number was: 34              |" << endl;
                    cout << "\t|                                                |" << endl;
                    cout << "\t|            Better luck next time!              |" << endl;
                    cout << "\t|    Try again and see if you can win!           |" << endl;
                    cout << "\t--------------------------------------------------\n" << endl;

                }
            }
            
            
        }
        
    }
    else if(x==0)
    {
        cout << "\t You ended the game. See you next time!" << endl;
    }
    else
    {
        cout << "\t Invalid input! Please enter 1 to play or 0 to exit."<<endl;
    }
     return 0;
}


