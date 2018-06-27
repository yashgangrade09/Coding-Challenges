#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n;
	int arr[6] = {0};
	cin>>n;
	string str;
	for(int i = 0; i<n; i++){
		cin>>str;

		if(str == "purple")
			arr[0]++;
		else if(str == "green")
			arr[1]++;
		else if(str == "blue")
			arr[2]++;
		else if(str == "orange")
			arr[3]++;
		else if(str == "red")
			arr[4]++;
		else if(str == "yellow")
			arr[5]++;
	}

	m = 6 - n;
	//output starts here
	cout<<m<<endl;
	if(arr[0] == 0)
		cout<<"Power"<<endl;
	
	if(arr[1] == 0)
		cout<<"Time"<<endl;
	
	if(arr[2] == 0)
		cout<<"Space"<<endl;
	
	if(arr[3] == 0)
		cout<<"Soul"<<endl;
	
	if(arr[4] == 0)
		cout<<"Reality"<<endl;
	
	if(arr[5] == 0)
		cout<<"Mind"<<endl;	
	return 0;
}