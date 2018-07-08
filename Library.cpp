#include<iostream>
#include"Book.h"
#include"Library.h"
using namespace std;
Library::Library()
{
	head = new Book;
	head->next = new Book;
	end = head->next;

	ifstream in("booklist.txt");//the book's message were all
	//stored in this file.And this is a major step in the process.
	//we read the file first to find if it is empty. for eof()can not be 
	//used as a tool to tell if it is empty. It is only when we are reading
	//the file and meet the end can we know its is-empty.//or in.eof won't//
	//won't return the positive,though it is empty.
	char ch = in.get();
	if (in.eof())
	{
		cout << "file is empty" << endl;
	}

	//if it is not empty
	while (!in.eof())
	{
		end->ReadFile(in);
		if (end->s_name[0] == '\0')
			break;
		end->next = new Book;
		end = end->next;
	}
}

//xigou function
Library::~Library()
{
	Save();
	Book *pos = head->next;
	Book *temp;
	while (pos != end)
	{
		temp = pos;
		pos = pos->next;
		delete temp;
	}
	delete head, end;
}

//add new book
void Library::Add_Booknode()
{
	char quit;
	while (1)
	{
		end->input();
		end->next = new Book;
		end = end->next;

		cout << "continue or not?,Y/N" << endl;
		cin >> quit;
		switch (quit)
		{
		case'Y':
		case'y':break;
		case'N':
		case'n': return;
			break;
		default:
			cout << "error input,again,please..y/n";
			cin >> quit;
		}
	}
	cout << "add Book successfully" << endl;
	system("pause");
}

void Library::Modify()
{
	string t_name;
	cout << "enter the name you want to modify:";
	cin >> t_name;

	Book *pos = head->next;
	for (pos; pos != end; pos = pos->next)
	{
		if (t_name == pos->s_name)
		{
			pos->input();
			break;
		}
	}
	cout << "Modify successfully..." << endl;
	system("pause");
}
void Library::Del_Booknode()
{
	int del_flag = 0;
	string t_name;
	if (head->next = end)
	{
		cout << "empty..." << endl;
		return;
	}

	cout << "please enter the name you want to delete:";
	cin >> t_name;

	Book *p = head->next;
	Book *q = head;
	for (p; p != end; p->next)
	{
		if (p->s_name == t_name)
		{
			del_flag = 1;
			 q->next = p->next;
			 delete p;
				 break;
		}
		else
		{
			p = p->next;
			q = q->next;
		}
	}
	if (del_flag == 0)
	{
		cout << "Can't find the name you want." << endl;
	}
	cout << "del node successfully!" << endl;
	system("pause");
}
int Library::Getabooknum(string st_name)
{
	int count = 0;
	Book *pos = head->next;
	for (pos; pos != end; pos = pos->next)
	{
		if (st_name == pos->s_name)
		{
			count++;
		}
	}
	return count;
}
void Library::Findacurate()//input the name of book then output all the message about the book ,including the remain number.
{
	string t_name;
	Book *pos = head->next;
	if (pos == end)
	{
		cout << "The library is empty now,we can find no book here!" << endl;
	}
	else
	{
		cout << "Please enter the book's name,if you want to know something about it." << endl;
		cin >> t_name;
		int count = Getabooknum(t_name);
		if (count>0)
		{//We can find the book in library.
			while (pos->s_name != t_name)
				pos = pos->next;
			cout << endl;
			cout << "\t" << pos->s_name << "\t" << pos->s_isbn << "\t" << pos->s_price
				<< "\t" << pos->s_writer << "\t" << pos->s_point << "\t" << "Remain:" << count << endl;
		}
		else
		{
			cout << "Sorry,we can't find the book here now,maybe it was borrowed by somebody else!" << endl;
		}
	}
	system("pause");
}
void Library::Save()
{
	out.open("booklist.txt");
	Book *pos = head->next;
	if (pos == end)
	{
		cout << "Library is empty.." << endl;
		return;
	}
	else
	{
		for (pos; pos != end; pos = pos->next)
		{
			out << "\t" << pos->s_name << "\t" << pos->s_isbn << "\t" << pos->s_price
				<< "\t" << pos->s_writer << "\t" << pos->s_point;
		}
	}
	out.close();
	cout << "Save node successfully!" << endl;
}

//show the library
void Library::Show_allbook()
{
	if (head->next == end)
	{
		cout << "empty" << endl;
	}
	Book *pos;
	pos = head->next;
	for (pos; pos != end; pos = pos->next)
	{
		cout << endl;
		cout << "\t" << pos->s_name << "\t" << pos->s_isbn << "\t" << pos->s_price
			<< "\t" << pos->s_writer << "\t" << pos->s_point << endl;
		cout << endl;
	}
	system("pause");
}

void Library::Swap_Booknode(Book *p, Book *q)
{
	string tname;
	string tisbn;
	string tprice;
	string twriter;
	double tpoint;
	q->s_name.swap(p->s_name);
	q->s_isbn.swap(p->s_isbn);
	q->s_price.swap(p->s_price);
	q->s_writer.swap(p->s_writer);
	tpoint = p->s_point;
	p->s_point = q->s_point;
	q->s_point = tpoint;
}