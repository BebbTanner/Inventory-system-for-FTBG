#include <iostream>
using namespace std;

void inventorySys();

int main() {

	inventorySys();

}

void inventorySys() {
	string items[3];
	string number;

	//for loop that stores items in the list array
	cout << "Please enter the items that you are storing in your inventory: " << endl;
	for (int i = 0; i < 3; i++) {
		cin >> items[i];
	}

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
