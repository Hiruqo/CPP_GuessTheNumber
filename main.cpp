#include <iostream>
#include <ctime>

// 'using' statements
using std::cin, std::cout, std::endl;

// generate random number
int lottery() {

    // set up the time seed
    srand(time(NULL));

    // rand the number between 1 - 100
    int number = (rand() % 100) + 1;
    return number;
}

// main function
int main() {

    int guessNumber = lottery();;
    int playerNumber = 0;
    int roundCounter = 0;

    cout << " ***** Welcome to \"Guess the number\" game *****" << endl;
    cout << endl;

    do {
        cout << "Guess the number bewtween 1-100." << endl;
        cout << "Number: ";
        cin >> playerNumber;
        roundCounter++;

        if(playerNumber < guessNumber) {
            cout << "Your number is too low!" << endl;
        } else if(playerNumber > guessNumber) {
            cout << "Your number is too high!" << endl;
        } else {
            cout << "Congratulations! You guessed the numebr!" << endl;
            printf("The game took %d rounds.", roundCounter);
            cout << endl;
        }

        system("pause");
        system("cls");

    } while(playerNumber != guessNumber);

    return 0;
}