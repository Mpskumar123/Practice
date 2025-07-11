#include<iostream>
using namespace std;
bool primeNumber(int num){
    if(num<=1){
        return false;
    }

    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    for(int i=2;i<num;i++){
        if(primeNumber(i)){
            cout<<i<<" ";
        } 
    }
    return 0;
}