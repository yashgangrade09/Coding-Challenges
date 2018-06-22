#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
using namespace std;

bool isUnique(string str){
	//using an additional data structure is recommended to get a boost on time complexity 

	//extended ASCII
	if(str.length() > 256)
		return false;

	bool arr[256] = {false};
	int temp;

	for(int i = 0; i< str.length(); i++){

		temp = (int)str[i];
		if(arr[temp])
			return false;
		else
			arr[temp] = true;

	}
	return true;
}


int main(){

	string str; 
	cout<<"Enter the String input"<<endl;

	cin>>str;

	bool flag = isUnique(str);

	if(flag)
		cout<<"Unique String"<<endl;
	else cout<<"Not Unique String"<<endl;

	return 0;
}