#include<iostream>
using namespace std;
int main(){
    int num1,num2,flag=0;
    cin>>num1;
    cin>>num2;
    for(int i=num1;i<=num2;i++){
            flag=0;
        for(int j=2;j< num1;j++){
            if((i % j)==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<" ";
        }
    }
}
