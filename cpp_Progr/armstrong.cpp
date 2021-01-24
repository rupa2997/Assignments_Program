#include<iostream>
using namespace std;
int main(){
    int num,digit,rem;
    cin>>num;
    int temp;
    temp=num;
    while(num>0){
        rem=num%10;
        digit+=rem*rem*rem;
        num/=10;
    }
    if(temp==digit){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not an palindrome"<<endl;
    }
}
