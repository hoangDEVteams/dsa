#include <iostream>
using namespace std; 

int main()
{
	const int x = 5;
	int a[x];
	for (int i = 0; i <= x-1; i++) {
		cout << "nhap pt mang thu "<< i+1 <<": ";
		cin >> a[i];
	}

	int max =a[0];
	for (int k = 1; k < x; k++) {
		if (a[k] > max) {
			max = a[k];
		}
	}
	
	cout << "a[" << max << "]";
}
