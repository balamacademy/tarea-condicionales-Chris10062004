#include <iostream>
using namespace std;

int main() {
	int cantidad;
	double precio, total, precioBruto;

	cin >> cantidad >> precio;

	precioBruto = cantidad * precio * 1.15;

	if (precioBruto > 1000) {
		total = precioBruto * 0.95;
    	} else {
        	total = precioBruto;
        
    	}

    	cout << "Pagar $" << total;
    
    return 0;
}
