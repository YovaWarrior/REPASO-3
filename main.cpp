#include <iostream>

using namespace std;
int main() {
    int caratula;

    cout << "Escoja el programa que desea utilizar y escoja el numero respecto al programa que desea" << endl;
    cout << "1- Determinar si la persona es mayor de edad o no" << endl;
    cout << "2- Determinar el mayor de dos numeros" << endl;
    cout << "3- Determinar si el numero ingresado es par o impar" << endl;
    cout << "4- Determinar el factorial de un numero" << endl;
    cout<< " 5- Determinar que numeros son impares ingresando un numero del 10 al 30 empezando desde 1 hasta el numero ingresado"<< endl;
    cout << "6- Mismo programa que el 5 pero con el bucle while" << endl;
    cout << "7- Determinar que dia de la semana es ingresando un numero del 1 al 5" << endl;
    cin >> caratula;
    switch (caratula) {
        case 1: /* Programa para saber si la persona es mayor de edad*/

            int edad;
            cout << "Ingrese su edad" << endl;
            cin >> edad;

            if (edad >= 18) {
                cout << "Eres mayor de edad" << endl;
            } else {
                cout << "Eres menor de edad" << endl;
            }

            break;

        case 2: /* Programa para saber el mayor de dos numeros */

            int a, b;

            cout << "Ingrese un numero" << endl;
            cin >> a;
            cout << "Ingrese otro numero" << endl;
            cin >> b;

            if (a > b) {
                cout << "El numero " << a << "" << "es mayor que" << b << endl;
            } else {
                cout << "El numero " << b << "" << "es mayor que " << a << endl;
            }
            break;

        case 3: /* Programa para saber si el numero es par o impar */

            int numb;

            cout << "Ingrese un numero entero por favor para saber si es par o impar" << endl;
            cin >> numb;

            if (numb % 2 == 0) {
                cout << endl << numb << " es par\n";
            } else {
                cout << endl << numb << " es impar\n";
            }
            break;

        case 4: /* Programa para saber el factorial de un numero*/

            int c,d;
            long double factorial;
            cout << "Introduce un numero: " << endl;
            cin >> c;
            factorial=1;
            for(d=1;d<=c;d++)
                factorial = factorial * d;
            cout << endl << "Factorial de " << c << " = " << factorial << endl;
            break;

        case 5: /* Programa para saber numeros impares del 1 hasta el numero que ingrese el usuario del 10 al 30*/
            int r, s;
            cout << "Ingresa un numero del 10 al 30" << endl;
            cin >> r;

            for (s = 1; s <= r; s++) {
                if (s % 2 == 1) {
                    cout << s << endl;
                }
            }
            break;

        case 6: /* Mismo programa que el programa 5 pero con while*/
            int h, f;
            cout << "Ingresa un numero del 10 al 30" << endl;
            cin >> h;

            f = 1;

            while (f <= h) {
                if (f % 2 == 1) {
                    cout << f << endl;
                }
                f++;
            }
            break;

        case 7: /* Programa para saber el dia de la semana ingresando un numero del 1 al 5*/

            int sem;

            cout << "Ingrese un numero del 1 al 5 " << endl;
            cin >> sem;

            switch (sem) {
                case 1:
                    cout << "Es dia lunes" << endl;
                    break;

                case 2:
                    cout << "Es dia martes" << endl;
                    break;

                case 3:
                    cout << "Es dia miercoles" << endl;
                    break;

                case 4:
                    cout << " Es dia jueves" << endl;
                    break;

                case 5:
                    cout << "Es dia viernes " << endl;
                    break;

                default:
                    cout << "No ingreso ninguna" << endl;
                    break;
            }


    }
    return 0;

}


