#include <iostream>
using namespace std; 

int fib(int n);
int fibr(int n);
  
int main (){
    
    int n;
    cout <<"Escriba un numero entero" << endl;
    cin >> n; 
    cout <<"La serie de Fibonacci con un for es: "<< fib(n) << endl;
    cout <<"La serie de Fibonacci recursiva es: "<<  fibr(n) << endl;
    return 0; 
} 

int fib(int n){ 
  int a = 0;
  int b = 1;
  int c; 
    
  if(n <= 1){
    return a;
  }else{
	cout << "0 1" << " ";
	for(int i = 2; i <= n; i++){ 
        c = a + b; 
        a = b; 
        b = c; 
		cout << c << " ";
      } 
    }
}

int fibr(int n){
    if (n <= 1){
        return n;
    }else{
        return fibr(n-1) + fibr(n-2);
    }
}