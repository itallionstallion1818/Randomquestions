#include<iostream>
#include<climits>
using namespace std;
int main(){
	int choice=1;
	int x=0;
	int y=0;
	int min_dist=INT_MAX;
	int d=0;
	int k=0;
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<'\n'<<"Enter your choice:";
	cin>>choice;
	while(choice!=3){
		if(choice==1){
			cout<<"Enter the x coordinate";
			cin>>x;
			cout<<'\n';
			cout<<"Enter the y coordinate:";
			cin>>y;
			cout<<'\n';
			d=x*x+y*y;
			if(min_dist>d){
				min_dist=d;
			}

		}
		else{
			cout<<min_dist;

		}
	cout<<'\n';
	cout<<"Enter your choice:";
	cin>>choice;

	}
}