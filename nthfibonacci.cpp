#import<iostream>
using namespace std;

int fibonacci(int n){
	//base case
	if(n==0 or n==1)
		return n;


	//recursive case
	return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
	int n=0;
	cin>>n;
	cout<<fibonacci(n);
}