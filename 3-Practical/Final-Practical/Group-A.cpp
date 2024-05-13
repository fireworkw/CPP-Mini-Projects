// Lab Exam - Group A
#include <iostream>
using namespace std;
int main() {
	int x ,sum = 0;
	int arr[20];
	for (int i = 0; i < 20; i++) {
		cin >> x;
		if (0 <= x&&x <= 100) {
			arr[i] = x;
			if (x % 2 !=  0 && x % 5 == 0) {
				sum += arr[i]* arr[i];	
			}
		}
		else
		{
			cout << "not vaild" << endl;
			i--;
		}
	}
	cout << sum;
}
