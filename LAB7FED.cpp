#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct Stack 
{	
	string info;
	Stack* next; 

} *beg = NULL, * t; 

Stack* InStack(Stack* p, string in)
{
	Stack* t = new Stack;
	t->info = in;
	t->next = p;
	return t;
}


void View(Stack* p)
{
	Stack* t = p; 
	while (t != NULL) 
	{
		cout << t->info << endl; 
		t = t->next; 
	}
}

void Push(Stack* p, string arr[10])
{
	Stack* t = p;
	for (int i = 0; t != NULL; i++)
	{
		arr[i] = t->info;
		t = t->next;
	}

}


int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
 
	string str;
	string arr[10];

	ifstream File1("C:\\t.txt",ios::in);
	
	cout << "Данные из файла: " << endl;
	
	while (!File1.eof())
	{   
		getline(File1, str);
		beg = InStack(beg, str);
		cout << str << endl;
	
	}
	
	File1.close();

	cout << "Даные в стеке : " << endl;

	View(beg);

	cout << "Даные в новом файле: " << endl;

	ofstream File2;
	File2.open("C:\\test.txt", ios::out);
	
	Push(beg,arr);

	for (int i = 0; i < 10; i++) {
		File2 << arr[i] << endl;
	}
	
	File2.close();

	ifstream File2out("C:\\test.txt", ios::in);

	while (!File2out.eof())
	{
		getline(File2out, str);
		cout << str << endl;
	}
	File2out.close();

	return 0;
}