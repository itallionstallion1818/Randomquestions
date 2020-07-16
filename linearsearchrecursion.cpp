#include<iostream>
using namespace std;

bool linearsearch(int arr[],int n,int key){
	if(n>=0){
		if(arr[0]==key){
			return true;
		}
		return linearsearch(arr+1,n-1,key);
}

int main(){
	int arr[]={1,2,3,4,5};
	if(linearsearch(arr,5,3)){
		cout<<"Key found.";
	}
	else{
		cout<<"Key not found.";
	}
}