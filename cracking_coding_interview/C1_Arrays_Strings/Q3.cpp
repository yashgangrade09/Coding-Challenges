#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <ctype.h>
using namespace std;

string urlify(string str, int len){
	string temp;
	string temp2 = "%20";

	for(int i = 0; i<len; i++){
		if(str[i] == ' '){
			//temp.append(temp2);
			temp+=temp2;
		}
		else{
			temp+=str[i];
		}
	}
	return temp;
}

int main(){

	string str;
	int len;
	cout<<"Enter the String input and the original length"<<endl;
	getline(cin, str);
	cin>>len;
	str = urlify(str, len);
	cout<<str<<endl;
	return 0;
}