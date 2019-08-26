#pragma once
#include <string>

using namespace std;

//Namespace for separating 
namespace library {
	struct Book
	{
		string title, author, isbn;
		int pages;
		double price;

	};
}