#include <iostream>
using namespace std;


int main() {
	int secretNum = 5;
	int guess = 0;
	int guessCount = 0;
	int guessLimit = 5;
	bool outOfGuesses = false;

	while (secretNum != guess && !outOfGuesses) {
		if (guessCount < guessLimit) {
			cout << "Enter guess 1-10 :";
			cin >> guess;
			guessCount++;
		} else {
			outOfGuesses = true;
	    }
		
	}  

	if (outOfGuesses) {
		cout << "You Lose!! ";
	} else {
				cout << "You Win!! ";
	}

		return 0;
}