#include <iostream>
using namespace std;

//prototype functions
void drawhorizontalline(int length, char ch);

int main (){
	const int MAX_LEN = 80;
	int option;
	int len;
	char sym;

	do {
		cout << "\n0) quit"
			<< "\n1 Draw a horizontal line"
			<< "\n2 Draw a vertical line"
			<< "\n3 Draw a square "
			<< "\n4 Draw a square filled"
			<< "\n5 Draw a rectangle"
			<< "\n6 Draw a rectangle Filled" << endl;
		cout << "\nEnter option: ";
		cin >> option;

		if (option == 0) {}
		else if (option == 1) {
			do {
				cout << "\nEnter length of line (1--" << MAX_LEN << "):";
				cin >> len;
			} while (len<1 || len>MAX_LEN);
			cout << "\nEnter drawing sumpol";
			cin >> sym;
			drawhorizontalline(len, sym);

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
	} while (0 != option);
	cout << "\nHave a nice day";
	return 0;
}
//draws horizontal line according to the arguments
void drawhorizontalline(int len, char sym) {
	if (len <= 0) return;
	for (int i = 0; i < len; ++i) std::cout << sym;
    std::cout << '\n';

}