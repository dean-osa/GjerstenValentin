#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;
char* getname(void);
int main()
{

	char* name;
	name = getname();
	cout << name << " at " << (int*)name << "\n";
	delete[]name;

	name = getname();
	cout << name << " at " << (int*)name << "\n";
	delete[]name;

	return 0;
}
//我认为这里很好。极大的节省了内存。
char* getname()
{
	char temp[80];

	cout << "Enter last name: ";
	cin >> temp;

	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;
}
