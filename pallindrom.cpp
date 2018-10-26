#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

bool isPalindrome(int x) {
        int arr1[10];
        int arr2[10];
        int x_copy=x;
        int temp=0;
        if(x<0){
            return false;
        }
        else{
            int i=0;
            while(x!=0){
                arr1[i]=x%10;
                x=x/10;
                i++;
            }
            int count=i-1;
            for(int j=0;j<=count;j++){
                temp+=arr1[j]*pow(10,i-1);
                i--;
            }
        }
        if(temp==x_copy){
            return true;
        }
        else{
            return false;
        }
    }

int main(){
	int x;
	while(true){	
		cout<<"Input random number to check for pallindrom : ";
		cin>>x;

		if(isPalindrome(x)){
				
			cout<<"Its a Palindrome.\n"<<endl;				
		}
		else{
		
			cout<<"Not a Palindrome.\n"<<endl;	
		}
	}
}
