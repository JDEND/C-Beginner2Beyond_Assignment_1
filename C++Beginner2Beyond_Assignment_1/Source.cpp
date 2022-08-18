#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void displayPyrimid(string input);

int main() {
	string temp;
	cout << "Enter a string: ";
	getline(cin, temp);


	displayPyrimid(temp);

	return 0;
}

void displayPyrimid(string input) {

	for (int i = 0; i < input.length(); i++) {
		for (int j = (input.length() - i); j > 0; j--)
			cout << " ";

		for (int j = 0; j < i; j++) {
			cout << input[j];	
		}
		for (int j = i; j >= 0; j--) {
			cout << input[j];
		}
		cout << endl;
	}



}