#include <iostream>
#include <cctype>
using namespace std;
int main()
{	char ch;
	do
	{	cout << "������Yes��No��y/n����";
		cin >> ch;
		ch = tolower(ch);
	} while (ch != 'y' && ch != 'n');
	if (ch == 'y')
		;//......
	else
		;//......
	return 0;
}
