#include <iostream>
using namespace std;

int main(){
	int edad;
	cin >> edad;

	if (edad < 4){
		cout << "¡¡Gracias!!";
	}else if (edad <= 18){
		cout << "Paga $5";
	}else{
		cout << "paga $10";
	}

	

	return 0;
}