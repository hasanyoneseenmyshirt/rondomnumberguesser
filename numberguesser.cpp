#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int main()
{
    srand(time(0));
    
    int num = (random() % 100) + 1;
    int guess;
    int guesses;
    cout <<num << endl;
    
    cout << "Guess a number between 1 and 100\n";
    guess = (random() % 100) + 1;
    do{
        guess = (random() % 100) + 1;
        guesses++;
        if(guess == num){
            
            cout << "The number was " << num << " you got it right in " << guesses << " guesses\n";
            
        } 
        else{
            cout << "You choose " << guess <<endl;
            cout << "Try again\n";
            
            
        }
    }while(guess != num);
    
    
    
    

    return 0;
}
