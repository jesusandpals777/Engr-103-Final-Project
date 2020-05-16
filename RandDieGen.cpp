#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  // Changed initialization of n # of die to the beginning of the program
	int choice = 0,n = 0;

	srand(time(0));

	cout << endl;
  // \n is just endline you can add endl if you want
	cout << "Enter to select the number of dice, enter 2 to restart program, or 3 to end the program: \n";
	cin >> choice;

  // Removed switch statements to create a conditional argument
	if (choice == 1) {

		cout << "Enter number of dice: ";
		cin >> n;

    // Sometimes the increment goes on the other side, dont ask me why
		for (int i = 0; i < n; ++i) {
			cout << (rand() % 6) + 1 << "\n";
		}
    // Always return 
    return main();
	}

	else if(choice == 2) {
		cout << choice;

		return main();
	}
  else if(choice == 3){
    cout << "Good Bye!\n";

  } 
  
  // Added this in case the user types in any other value other than the specific choices
  else{
    cout << "INVALID CHOICE\n";
    return main();
  }

	return 0;
}
