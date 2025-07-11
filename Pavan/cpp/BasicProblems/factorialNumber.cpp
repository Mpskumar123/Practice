#include<iostream>
using namespace std;
int factorialNumber(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num * factorialNumber(num - 1);
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin>>num;
    if(num<0){
        cout<<"Factorial is not defined for negative numbers."<<endl;
    }else{
        cout<<"factorial of"<<num<<" is: "<<factorialNumber(num)<<endl;
    }
}