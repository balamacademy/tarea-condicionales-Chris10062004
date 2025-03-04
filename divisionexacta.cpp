#include <iostream>
using namespace std;

int main(){

	int A, B;
	cin >> A >> B;
		 
	if (A % B == 0){
		cout << "La divicion es exacta";
	}else{
		cout << ":a divicion NO es exacta";
	}
	return 0;
}