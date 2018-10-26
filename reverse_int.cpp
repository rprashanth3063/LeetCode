#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;
void reverse(int x){
	int arr[10];
	int final=0;
	int count=0;
	int total;	
	while(x!=0){
		arr[count]=x%10;
		x=x/10;
		count++;
	}
	cout<<count<<endl;
	int index=count-1;
	for(int i=0;i<count;i++){
	
		total+=	arr[i]*pow(10,index);
		index--;
	}
	cout<<total<<endl;;
}

int main(){

	int x=0;
	while(true){
		cout<<"Enter the value : ";
		cin>>x;
		//cout<<reverse(x)<<endl;
		reverse(x);
	}
}
