#include "Book.h"
#include<iostream>
using namespace std;

void Book::input()
{
	cout << "please enter book's name:" << endl;
	cin >> s_name;
	cout << "please enter book's isbn:" << endl;
	cin >> s_isbn;
	cout << "please enter book's price:" << endl;
	cin >> s_price;
	cout << "please enter book's writer:" << endl;
	cin >> s_writer;
	cout << "please enter book's point:" << endl;
	cin >> s_point;
	return;
}

//read the message from the txtbook to the node;
void Book::ReadFile(ifstream &in)
{
	in >> s_name >> s_isbn >> s_price >> s_writer >> s_point;
}