 // Numeros Aleatorios
// Diego E. Morales Garcia
// 802211405
// CCOM3033-002

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    //utilizar la funcion s(rand) para tener un seed value
    srand(time(0));

    //variables para los numeros aleatorios
    int minimo = 0;
    int maximo = 100;

    // Formula: rand() % (maximo - minimo + 1) + minimo mostrada en las instrucciones
    int num1 = rand() % (maximo - minimo + 1) + minimo;
    int num2 = rand() % (maximo - minimo + 1) + minimo;
    int num3 = rand() % (maximo - minimo + 1) + minimo;

    // desplega los numeros no ordenados
    cout << "Numeros aleatorios generados: " << num1 << " " << num2 << " " << num3 << " " << endl;

    // desplega en ordern descendiente usando if/else statements
    cout << "En orden descendiente: ";

    // cuando num1 es mayor, se desplega primero en orden de mayor a menor utilizando el ejemplo en las instrucciones
    if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " >= ";
        if (num2 >= num3) {
        cout << num2 << " >= " << num3;
        } 
        else {
        cout << num3 << " >= " << num2;
        }
    }


    // else if para cuando num2 es el mayor numero
    else if (num2 >= num1 && num2 >= num3) {
        cout << num2 << " >= ";
        if (num1 >= num3) {
        cout << num1 << " >= " << num3;
        } 
        else {
        cout << num3 << " >= " << num1;
        }
    }


    // finalmente si num1 y num2 no son el mayor numero, automaticamente num3 es el mayor numero
    else if (num3 >= num1 && num3 >= num2) {
        cout << num3 << " >= ";
        if (num1 >= num2) {
        cout << num1 << " >= " << num2;
        } 
        else {
        cout << num2 << " >= " << num1;
        }
    }

    return 0;
}


