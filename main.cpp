/*
 * Author: Anita Prova
 * Course: CSCI-135
 * Instructor: Genady Maryash
 * Assignment: Homework E5.14
 * The program swaps two integers.
 * 
 */

#include <iostream>
#include <string>

using namespace std;
  
void sort2(int& a, int& b){
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
}
  
int main() {
	int a = 0;
	cin >> a;

	int b = 0;
	cin >> b;

	sort2(a, b);
	cout << a << b;

	return 0;
}
