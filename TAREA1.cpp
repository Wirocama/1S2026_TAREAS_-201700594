#include <iostream>
#include <string>

using namespace std;

//  FUNCION: Calcular promedio 
double calcularPromedio(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main() {
    //  PROMEDIO 
    double nota1, nota2, nota3;
    cout << "--- Calcular promedio de notas ingresadas" << endl;
    
    cout << "Ingrese la nota 1: "; cin >> nota1;
    cout << "Ingrese la nota 2: "; cin >> nota2;
    cout << "Ingrese la nota 3: "; cin >> nota3;

    // Llamada a la función y almacenamiento del resultado
    double promedioFinal = calcularPromedio(nota1, nota2, nota3);
    
    cout << "El promedio final es: " << promedioFinal << "\n" << endl;

    system("pause");
    return 0; 
}