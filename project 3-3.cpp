#include<iostream>
using namespace std;
int main() {
	int n,flag;
	const int size = 100;
	int A[size];
		cout << "tedad araye:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "adad ra vared konid (0-100)" << i << ":";
		cin >> A[i];
	}
	for (int i = 0; i <n; i++) {
		if (A[i] < A[i + 1]) {
			flag=1;
			break;
		}
		else if (A[i] > A[i + 1]) {
			flag = 0;
		}
	}
	if (flag == 1) { cout << "moratab"<<"\n"; }
	else if (flag == 0) { cout << "na moratab" << "\n"; }
	system("pause");
	return 0;
}
