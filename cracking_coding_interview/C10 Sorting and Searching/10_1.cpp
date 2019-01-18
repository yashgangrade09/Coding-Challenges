#include<iostream>
using namespace std;

    int a[] = {10,20,30,40,50, 0, 0, 0, 0};
    int b[] = {1,12,22,25};

void merge_arrays(int a[], int b[], int endA, int endB){
    int index = endA + endB + 1;
    
    while(endB >= 0){
        if(endA >= 0 && a[endA] >= b[endB]){
            a[index] = a[endA];
            endA--;
		}
		else{
		    a[index] = b[endB];
		    endB--;
		}
		index--;
    }
}

int main(){

    int la = sizeof(a)/sizeof(int);
    int lb = sizeof(b)/sizeof(int);

    merge_arrays(a, b, la - lb - 1, lb - 1);

    for(int i = 0; i < la; i++){
    	cout<<a[i]<<" ";
    }
    cout<<endl;
    int temp = -5;
    cout<<temp/2<<endl;
    return 0;
}

