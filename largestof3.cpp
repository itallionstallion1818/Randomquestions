#include<iostream>
#include<climits>
using namespace std;
int main(){
	int a,b,c;
	int max=INT_MIN;	
	cin>>a;
	if(a>max){
		max=a;
	}
	cin>>b;
	if(b>max){
		max=b;
	}
	cin>>c;
	if(c>max){
		max=c;
	}
	cout<<"THE LARGEST ELEMENT:"<<max;

}
