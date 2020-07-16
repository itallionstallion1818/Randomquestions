#include<iostream>
using namespace std;

int first_bit(int n){
	return (n&1);
}
int ith_bit(int n,int i){
	int mask=1<<i;
	int ans=(n&mask)>0?0:1;
	return ans;
}
int clear_bit(int n,int i){
	int mask=~(1<<i);
	int ans=n&mask;
	return ans;
}
void update_bit(int &n,int i,int v){
	int mask=~(1<<i);
	int ans=n&mask;
	n=ans|(v<<i);
}




int main(){
	int n;
	cout<<"Enter the number";
	cin>>n;
	update_bit(n,2,0);
	update_bit(n,3,1);
	cout<<n;


}