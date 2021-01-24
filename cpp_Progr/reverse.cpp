#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit=0;
    int rem;
    while(n>0){
        rem=n%10;
        digit=digit*10+rem;
        n=n/10;
    }
    cout<<"Reverse number is: "<<digit;
}
