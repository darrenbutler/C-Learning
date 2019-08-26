#include "Book.h"
#include <iostream>

using namespace std;
using namespace library;

int main() {
	const int SIZE = 10;

	Book myBooks[SIZE];

	for (int i = 0; i < SIZE; i++) {
		
		cout << "Enter Book title: ";
		cin.ignore();
		getline(cin, myBooks[i].title);

		cout << "Enter Book author: ";
		getline(cin, myBooks[i].author);

		cout << "Enter Book isbn: ";
		getline(cin, myBooks[i].isbn);

		cout << "Enter Book pages: ";
		cin >> myBooks[i].pages;

		cout << "\n\n";
	}

	return 0;
}