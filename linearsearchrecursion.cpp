#include<iostream>
using namespace std;

bool lsearch(int *arr,int n,int key){
	if(n<0){
		return false;
	}
	if(arr[0]==key){
		return true;
	}


	return lsearch(arr+1,n-1,key);


}

int main(){
	
	int n=0;
	cout<<"Enter the number of elements you want in the array:";
	cin>>n;
	int * arr= new int[n];
	cout<<endl;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int key=0;
	cout<<"Enter the key you want to search:";
	cin>>key;

	if(lsearch(arr,n,key)){
		cout<<"The element is present.";
	}
	else{
		cout<<"The element is not present.";
	}



}