#include <iostream>
using namespace std;
int main(){
    
    int a[10][10], b[10][10], mult[10][10], f1, c1, f2, c2, i, j, k;
    
    cout << "Introduzca el numero de filas y columnas de la primera matriz separadas por un espacio: ";
    cin >> f1 >> c1;
    cout << "Introduzca el numero de filas y columnas de la segunda matriz separadas por un espacio: ";
    cin >> f2 >> c2;

    while (c1!=f2){
        
        cout << "La columna de la primera matriz debe ser igual a la fila de la segunda matriz";
        cout << "Introduzca el numero de filas y columnas de la primera matriz separadas por un espacio: ";
        cin >> f1 >> c1;
        cout << "Introduzca el numero de filas y columnas de la segunda matriz separadas por un espacio: ";
        cin >> f2 >> c2;
    }
    
    cout << endl << "Introduzca los elementos de la primera matriz:" << endl;
    for(i = 0; i < f1; ++i){
        for(j = 0; j < c1; ++j){
            cout << "Introduzca el elemento a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }
    
    cout << endl << "Introduzca los elementos de la segunda matriz:" << endl;
    for(i = 0; i < f2; ++i){
        for(j = 0; j < c2; ++j){
            cout << "Introduzca el elemento b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }
    // Se inicializa la matriz.
    for(i = 0; i < f1; ++i){
        for(j = 0; j < c2; ++j){
            mult[i][j]=0;
        }
    }
    // multiplicacion de matrices.
    for(i = 0; i < f1; ++i){
        for(j = 0; j < c2; ++j){
            for(k = 0; k < c1; ++k){
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // Imprime la matriz
    cout << endl << "Matriz multiplicada: " << endl;
    for(i = 0; i < f1; ++i){
        for(j = 0; j < c2; ++j){
            cout << " " << mult[i][j];
            if(j == c2-1){
                cout << endl;
            }
        }
    }
    return 0;
}