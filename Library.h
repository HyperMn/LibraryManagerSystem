#ifndef LIBRARY_H_
#define LIBRARY_H_
#include<cstring>
#include"Book.h"
class Library 
{
//������Ÿ�����㣬ÿ������д洢�������Ϣ
private:
	static int count;
public:
	Library();
	~Library();
	
	//����ͼ��������õ��ĺ���

	void Add_Booknode();//����
	void Del_Booknode();//ɾ��
	void Findacurate();//��ȷ����
	void Modify();//�����鼮��Ϣ
	//void Load();//����
	void Save();//�����ļ�
	void Clean();//����ļ�
	void Swap_Booknode(Book *q, Book *p);//�������ı�Ҫ����
	void Sort_instring();//�������ַ���δ�ؼ���
	int Getabooknum(string st_name);//�õ��鼮����
	void Show_allbook();//��ʾ�����鼮
private:
	Book * head;
	Book *end;
	ifstream in;
	ofstream out;
};
#endif // !LIBRARY_H_
#pragma once
