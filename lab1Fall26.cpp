#include <iostream>
using namespace std;

void drawhorizontalline()

int main (){
	int option;

	do
	cout  << "\n0) quit"
		<< "\n1 Draw a horizontal line"
		<< "\n2 Draw a vertical line"
		<< "\n3 Draw a square "
		<< "\n4 Draw a square filled"
		<< "\n5 Draw a rectangle"
		<< "\n6 Draw a rectangle Filled" << endl;
cout << "\nEnter option: ";
	cin >> option;

	if (option = 0) {

	}
	else if (option == 1) {
		drawhorizontalline

	}
	else if (option == 2) {

	}
	else if (option == 3) {

	}
	else if (option == 4) {

	}
	else if (option == 4) {

	}
	else if (option == 5) {

	}
	else if (option == 6) {

	}
	else {
		cerr << "\n wrong choice!";
	}
	while (0 != option);
	cout << "\nHave a nice day";
	return 0;
}
//draws horizontal line according to the arguments
void drawhorizontalline(int length, char ch) {
	cout << "\n";
	for (int i = 0, i < length; i++) {
		cout << ch;
	}

}