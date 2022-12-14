#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    double raiz2 = sqrt( 2.0 );
    cout << "Raiz cuadrada de 2 con precisiones de 0 a 9." << endl << "Precision establecida mediante la funcion miembro precision " << "de ios_base:" << fixed << endl;

    for ( int posiciones = 0; posiciones <= 9; ++posiciones ) {
        cout << "posicion:" << posiciones << "    ";
        cout.precision(posiciones);
        cout << raiz2 << endl;
    }

    cout << "\nPrecision establecida por el manipulador de flujo " << "setprecision:" << endl;

    for ( int posiciones = 0; posiciones <= 9; ++posiciones )
        cout << "posicion:" << posiciones << "    " << setprecision( posiciones ) << raiz2 << endl;

    getchar();

} 