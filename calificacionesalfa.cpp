#include <iostream>
using namespace std;

int main() {
    char calif;
    cin >> calif;

    switch (calif) {
        case 'A': 
            cout << 9; 
            break;
        case 'B': 
            cout << 8; 
            break;
        case 'C': 
            cout << 7; 
            break;
        case 'D': 
            cout << 6; 
            break;
        case 'E': 
            cout << 5;
            break;
        case 'F': 
            cout << 4;
            break;
        default: cout << "Calificacion no valida";
    }

    return 0;
}