#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
using namespace std;

string SortString(string &str){

	sort(str.begin(), str.end());
	return str;
}

bool IsPermutation(string str1, string str2){
	if(str1.length() != str2.length())
		return false;

	str1 = SortString(str1);
	str2 = SortString(str2);

	for(int i = 0; i<str1.length(); i++){
		if (str1[i] != str2[i])
			return false;
		else continue;
	}	
	return true;
}	

int main(){

	string str1,str2; 
	cout<<"Enter the String input"<<endl;

	cin>>str1;
	cin>>str2;

	bool flag = IsPermutation(str1, str2);

	if(!flag)
		cout<<"Unique Strings"<<endl;
	else cout<<"Permutation of each other"<<endl;

	return 0;
}