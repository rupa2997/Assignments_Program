#include<iostream>
using namespace std;
int main(){
    int arr[]={10,2,11,0,4,6,8};
    int max=arr[0];
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<len;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Largest number is: "<<max<<endl;
}
