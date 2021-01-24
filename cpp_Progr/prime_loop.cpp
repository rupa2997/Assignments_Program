#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter prime number to check whether it is prime or not: "<<endl;
    cin>>n;
     int flag=0;
    for(int i=2;i<n;i++){
        if((n% i) ==0){
                cout<<"aaaa"<<endl;
            flag=1;
            break;
        }
    }
    if(flag!=0){
        cout<<"Number is not  prime "<<n<<endl;
    }else{
        cout<<"Number is  prime "<<n<<endl;
    }
}
