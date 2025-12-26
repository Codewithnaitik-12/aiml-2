#include <iostream>
using namespace std;
//function to calculate factorial
int factorial(int n){
	int fact=1;
	for (int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int num;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"Factorial of"<<num<<"is"<<factorial(num);
	return 0;
}
