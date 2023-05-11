/*Next objectives:
add an if else statement asking the user if they would want to sell or use items
add in a way to allow users to add an item to the current inventory
note: this might be easier if I use a linked list, I might come back to this idea.*/

#include <iostream>
using namespace std;

void inventorySys();

int main() {

	inventorySys();

}

void inventorySys() {
	string items[3];
	string number;
	char response;

	//for loop that stores items in the list array
	cout << "Please enter the items that you are storing in your inventory: " << endl;
	for (int i = 0; i < 3; i++) {
		cin >> items[i];
	}


	//if statement that asks the user if they want to use or sell anything
	cout << "Would you like to use or sell and item(Y or N)?" << endl;
	cin >> response;
	if (response == 'Y' || response == 'y') {
		//asking the user for which item they would like to delete
		cout << "Enter the item that you are selling or using: " << endl;
		cin >> number;
		cout << endl;

		cout << "The items that are left in you inventory are: " << endl;
		//for loop to delet an item from the array
		for (int i = 0; i < 3; i++) {
			if (items[i] != number) {
				cout << items[i] << endl;
			}
		}
	}

	else {
		cout << "Your current inventory is: " << endl;

		for (int i = 0;i < 3;i++) {
			cout << items[i] << endl;
		}
	}

}
