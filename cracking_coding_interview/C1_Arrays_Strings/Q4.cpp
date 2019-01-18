#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <ctype.h>
using namespace std;

void RemoveSpaces(string &str, int len){
	int index = 0; 
	int spacecount = 0;

	for(int i = 0; i<len; i++){
		if(str[i] == ' ')
			spacecount++;
	}
	for(int i = 0; i<)
}

bool ispalindrome()

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