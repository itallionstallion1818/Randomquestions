#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main(){
	map<string,int>m;
	// m["Mango"]=100;
	m.insert(make_pair("Mango",100));
	if(m.count("Mango")==1){
		cout<<"the price of Mango is:"<<m["Mango"];
	}
	m.insert(make_pair("Apple",120));

	if(m.count("Apple")==1){
		cout<<"the price of Mango is:"<<m["Apple"];
	}

}