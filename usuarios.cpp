#include <iostream>
#include <string>

using namespace std;
// Definición de la clase Usuario

int main() {
    string nombre;
    int edad;
    string correo;

    // Solicitar información al usuario
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su correo electronico: ";
    cin >> correo;

    // Mostrar la información ingresada
    cout << "\nInformacion del usuario:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Correo electronico: " << correo << endl;

    return 0;
}
