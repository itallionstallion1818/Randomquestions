#import<iostream>
using namespace std;

void patternzeroes(int n){
	for(int i=1;i<=n;i++){
		if(i<=2){
			for(int j=1;j<=i;j++){
				cout<<j<<" ";
			}
			cout<<endl;
		}
		else{
			int spaces=i-2;
			cout<<i<<" ";
			while(spaces>0){
				cout<<0<<" " ;
				spaces--;
			}
			cout<<i<<endl;
		}
	}
}

int main(){
	int n;
	cin>>n;
	patternzeroes(n);
}