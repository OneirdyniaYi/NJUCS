#include <iostream>
#include <cmath>
using namespace std;
int main()
{	int n;
	double square_root;
	cout << "������������������0��������";
	for (cin>>n; n!=0; cin>>n)
	{	if (n < 0) continue;
		square_root = sqrt(n);
		cout << n << "��ƽ�����ǣ�" << square_root << endl;
	}
	return 0;
}
