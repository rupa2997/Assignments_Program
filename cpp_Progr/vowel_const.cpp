#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        cout<<"Vowels"<<endl;
    }else{
        cout<<"Consonants"<<endl;
    }
}
