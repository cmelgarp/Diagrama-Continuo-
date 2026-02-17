// sistemaContinuo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int contador = 0, num;
    while (true) {
        for (int i = 0; i < 24; i++) {
            cout << "Hora: " << i << endl;
            num = rand() % 10;
            if (num % 2 == 0) {
                cout << "SE LLAMA = ACTIVO" << endl;
                cout << "sube o baja" << endl;
                cout << "LLega = inactivo" << endl;
            }
            else {
                cout << "Inactivo = no se llama" << endl;
            }
        }
        
        cout << endl;
        contador++;
        cout << contador << endl;
        if (contador > 3) {
            break;
        }
    }
}


