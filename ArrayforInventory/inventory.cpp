#include <iostream>
using namespace std;

void inventorySys();

int main() {

	inventorySys();
}

void inventorySys() {
	/*Start adding items to inventory*/
	string array[3];
	char useChoice;
	int itemPos;

	cout << "Enter 3 items: " << endl;

	for (int i = 0; i < 3; i++)
	{
		cin >> array[i];
	}
	cout << endl;

	cout << "The items you have avaible are: " << endl;
	for (int j = 0; j < 3; j++) {
		cout << array[j] << endl;
	}
	/*End adding items to inventory*/

}