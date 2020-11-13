#include <fstream>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	
	fstream f;
	
	f.open("����� ���� ������� 2019.txt");
	
	if (!f){
		
		cout << "Error!";
		
	}
	
	cout << "Hello!";
	char ch;
	while (!f.eof())
	{
		f >> ch;
		cout << ch;
	}	
	f.close();
}
