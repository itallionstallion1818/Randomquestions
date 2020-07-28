#include<iostream>
using namespace std;
void pattern(int n){
	int l=0;
	int i=1;
	while(l<=n){
		for(int j=1;j<=l;j++){
			cout<<i<<'\t';
			i++;
		}
		cout<<'\n';
		l++;
	}
	
}



int main(){
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	pattern(n);


}
