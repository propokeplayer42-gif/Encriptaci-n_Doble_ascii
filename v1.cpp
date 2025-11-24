#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cout << "Cuantos numeros tiene la frase codificada?: ";
    cin >> n; // para saber de que tamano crear el vector y no desperdiciar / que falte memoria
    
    vector<int> codigo(n); // se crea vector tipo int para el texto codificado del tamano n
    vector<char> resultado(n); // se crea vector tipo char para el texto decodificado de tamano n
    
    cout << "Ingresa los " << n << " numeros (ASCII x2): " << endl; // loop que agrega los numeros ingresados al vector "codigo"
    for (int i = 0; i < n; i++) {
        cout << "Ingresa el numero " << i+1 << ": ";
        cin >> codigo[i];
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) { // loop que decodifica numeros a ascii y divide entre dos, agregandolos al vector "resultado"
        resultado[i] = char(codigo[i] / 2);
    }
    
    cout << endl << "Frase decodificada: " << endl; // loop que muestra el vector resultado completo (frase decodificada)
    for (int i = 0; i < resultado.size(); i++) {
        cout << resultado[i];
    }    
    cout << endl;
}