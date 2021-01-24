#include<iostream>
using namespace std;
int main(){
    int fact=1,sum=1,n;
    cin>>n;
    for(int i=n;n>0;n--){
        sum=sum*n;
    }
    cout<<"Factorial of "<<n<<" "<<sum<<endl;
}
