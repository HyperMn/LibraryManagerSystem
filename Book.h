#ifndef BOOK_H_
#define BOOK_H_
#define IN_PARAM
#define OUT_PARAM
#include<string>
#include<fstream>
using namespace std;
class People;
class Book
{
public:
	Book * next;
	string s_name;
	string s_isbn;
	string s_price;
	string s_writer;
	double s_point;
	//People P_people;����δд���˵�ʵ�֣����������˵Ĵ洢����������

public:
	Book(){}
	Book(string s1, string s2, string s3, string s4, double po)
	{
		s_name = s1;
		s_isbn = s2;
		s_price = s3;
		s_writer = s4;
		s_point = po;
		//P_people();�޲εĺ���������ģ�
	}
	void input();//������Ϣ�Ľӿ�
	void ReadFile(ifstream &in);//���ļ�������Ϣ�Ľӿ�
};
#endif // !BOOK_H_
#pragma once
