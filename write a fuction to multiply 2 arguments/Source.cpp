#include<iostream>
using namespace std;
int multiply(int, int);

int main() {

	int a, b;
	cout << "Enter two numbers \n";
	cin >> a >> b;
	cout << multiply(a, b);

	return 0;
}
int multiply(int a, int b) {
	return a * b;
}
