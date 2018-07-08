#ifndef LIBRARY_H_
#define LIBRARY_H_
#include<cstring>
#include"Book.h"
class Library 
{
//里面存着各个结点，每个结点中存储着书的信息
private:
	static int count;
public:
	Library();
	~Library();
	
	//关于图书馆类所用到的函数

	void Add_Booknode();//上书
	void Del_Booknode();//删书
	void Findacurate();//精确查找
	void Modify();//调整书籍信息
	//void Load();//加载
	void Save();//保存文件
	void Clean();//清空文件
	void Swap_Booknode(Book *q, Book *p);//交换结点的必要函数
	void Sort_instring();//排序，以字符串未关键词
	int Getabooknum(string st_name);//得到书籍余量
	void Show_allbook();//显示所有书籍
private:
	Book * head;
	Book *end;
	ifstream in;
	ofstream out;
};
#endif // !LIBRARY_H_
#pragma once
