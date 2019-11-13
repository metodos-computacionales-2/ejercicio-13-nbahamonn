#include <iostream>
using namespace std; 

int getMaxInt(int a, int b);
double getMaxDouble(double c, double d);
  
int main (){
    
    int a;
	int b;
	double c;
	double d;
    cout <<"Escriba un numero entero" << endl;
    cin >> a; 
	cout <<"Escriba otro numero entero" << endl;
    cin >> b; 
	cout <<"Escriba un numero decimal" << endl;
    cin >> c; 
	cout <<"Escriba otro numero decimal" << endl;
    cin >> d;
    cout <<"El numero entero mas grande es: " << getMaxInt(a,b) << endl;
    cout << endl <<"El numero decimal mas grande es: " << getMaxDouble(c,d) << endl;
	cout << endl;
    return 0; 
} 

int getMaxInt(int a, int b){
	if(a < b){
		return b;
	}
}

double getMaxDouble(double c, double d){
	if(c < d){
		return d;
	}
}