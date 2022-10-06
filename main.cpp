#include <iostream>
#include <string>

using namespace std;
  
void sort2(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b;
}
  
int main() {
	int u = 0;
	cin >> u;

	int v = 0;
	cin >> v;

	sort2(u, v);

	return 0;
}
