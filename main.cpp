#include <fstream>
#include <iostream>
using namespace std;


int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	fstream f;
	
	f.open("twitter-1.txt");
	
	if (!f){
		
		cout << "Error!";
		
	}

	string s;
	while (getline(f, s))
	{
		cout << s << endl;
	}	
	f.close();
}
