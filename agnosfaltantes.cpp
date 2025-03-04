#include <iostream>
using namespace std;

int main(){

	int A1, A2;
	cin >> A1 >> A2;

	if (A1 > A2) {
		cout << "Han pasado " << (A1 - A2) << " años";
	}else{
		cout << "Faltan " << (A2 - A1) << " años";
	}

	return 0;

}