#include <iostream>
using namespace std;

//int fiboRekrusif (int n){
//	if (n <= 1)
//		return n;
//	else
//		return fiboRekrusif (n - 1) + fiboRekrusif (n - 2);
//}
//
//int main (){
//	int n=70;
//	cout<<fiboRekrusif(n);
//}



int fiboDynamic(int n) {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    return fib[n];
}

int main (){
	int n=100;
	cout<<fiboDynamic(n);
	
}
