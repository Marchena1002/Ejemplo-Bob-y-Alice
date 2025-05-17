#include <iostream>

using namespace std;
int N1 = 0;
int N2 = 0;
float Resultado = 0;

int main() {
   cout << "Bienvenido a la calculadora" << endl;
   cout<<"first number: ";
   cin>>N1;
   cout<<"second number: ";
   cin>>N2;
   Resultado = N1 + N2;
   cout<<"the result is: "<<Resultado<<endl;
    return 0;
}
