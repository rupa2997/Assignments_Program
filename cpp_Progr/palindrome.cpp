#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp;
    temp=n;
    int digit=0;
    int rem;
    while(n>0){
        rem=n%10;
        digit=digit*10+rem;
        n=n/10;
    }
    if(temp==digit){
        cout<<"Palindrome number"<<" ";
    }
    else{
        cout<<"Not Palindrome number"<<" ";
    }
    //cout<<"Reverse number is: "<<digit;
}

