#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    int first=0,second=1;
    cin>>n;
    cout<<first<<" "<<second<<" ";
    for(int i=0;i<n-2;i++){
        sum=first+second;
        cout<<sum<<" ";
        first=second;
        second=sum;
    }
}
