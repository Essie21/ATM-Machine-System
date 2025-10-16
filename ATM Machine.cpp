#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	
	double acc_bal;  // To hold the account balance of user
	
	int choice;  // To hold options for the menu
	
	double amount; // To hold withdrawal or deposit amount
	
	// Prompt user to input account balance
	
	cout << "Enter account balance: ";
	cin>> acc_bal;
	
	// Check for invalid balance input
    if (acc_bal < 0) {
        cout << "Invalid balance! Setting balance to 0.\n";
        acc_bal = 0;
    }
	
	// Constants for menu choices
	
	const int CHECK_CHOICE = 1; // Option to check balance
	const int WITHDRAW_CHOICE = 2; // Option to withdraw money
	const int DEPOSIT_CHOICE = 3; // Option to deposit money
	 const int QUIT_CHOICE = 4; // Option to quit the program
	           
  do {
  	
  	// Display the moenu and get a choice

cout << "\t\tTransaction Selection Menu\n\n"
     << "1. Balance Inquiry\n"
     << "2. Cash Withdrawal\n"
     << "3. Cash Deposit\n"
     << "4. Quit\n"
     << "Enter your choice: ";
cin>> choice;

// Set the numeric output formatting for currency values.
 cout << fixed << showpoint << setprecision(2);
 
// Respond to the user's menu selection

if (choice == CHECK_CHOICE){
	cout << "Available balance is: $" << acc_bal<< endl; // Display current balance
} 
else if (choice == WITHDRAW_CHOICE){
	cout << "Enter amount to withdraw: "; // Prompt user for withdrawal amount
	cin >> amount;
	
	// Setting Withdrawal limits
	
if (amount > acc_bal){
	cout <<"Insufficient funds!\n";
} else if (amount <= 0){
	cout <<"Invalid amount";
} else {
          acc_bal -= amount; // Deduct withdrawal amount from account balance
	cout << "Withrawal successful! New balance: $" << acc_bal<< endl;
 }
}

else if (choice == DEPOSIT_CHOICE) {
	cout << "Enter amount to deposit: "; // Prompt user for deposit amount
	cin >> amount;
	
// Setting 	deposit limit
	if (amount <=0) {
		cout << "Invalid amount!\n";
	} else {
	         acc_bal+= amount; // Add deposit amount to account balance
	cout << "Deposit successful! New balance: $" << acc_bal << endl;
   }
}

else if (choice == QUIT_CHOICE) {
	cout << "Thank you for using ATM. Goodbye!\n"; // Exit the program
}

else {
	cout<< "Invalid choice! Please select a valid option.\n"; // Handle invalid menu selection
  }
	

  } while (choice != QUIT_CHOICE); // Continue until user chooses to quit
  
  return 0;
	           
}
