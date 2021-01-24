#include<iostream>
using namespace std;
int main(){
    int sum=1,first=0,second=1,n;
    cout<<"enter a number u want to print upto the fibonacci"<<endl;
    cin>>n;
    while(sum<=n){
        cout<<sum<<" ";
        first=second;
        second=sum;
        sum=first+second;

    }
}
