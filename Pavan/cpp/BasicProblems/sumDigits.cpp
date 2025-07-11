#include<iostream>
using namespace std;
int sumDigits(int num){
    int sum=0;
    while(num>0){
        sum += num%10;
        num=num/10;
    }
    return sum;
}
int main(){
    int inputNumber;
    cout<<"Enter the number:";
    cin>>inputNumber;
    cout<<"The sum of digits of"<<inputNumber<<" is: "<<sumDigits(inputNumber);
}