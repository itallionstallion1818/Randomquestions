#include<iostream>
using namespace std;
bool isprime(int a){
	if(a==0 || a==1 || a<0){
		return false;
	}
		for(int i=2;i<=(a/2);i++){
		if(a%i==0){
			return false;
		}
	}
	return true;

}
void primegenerator(int m,int n){
	for(int j=min(m,n);j<=max(m,n);j++){
		if(isprime(j)){
			cout<<j<<endl;
		}
	}
	
}
int main(){
	int t;
	cin>>t;
	for(int p=1;p<=t;p++){
		int m,n;
		cin>>m>>n;
		primegenerator(m,n);
	}
	
}