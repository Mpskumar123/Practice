#include<iostream>
using namespace std;
  bool numpalindrone(int num){
    int OrgNum=num;
    int reverseNum=0;
    while(num>0){
        int digit=num%10;
        reverseNum=reverseNum*10+digit;
        num=num/10;
    }
    return OrgNum==reverseNum;
}
int main(){
    int num;
    cout<< "Enter a number: ";
    cin>>num;
    if(numpalindrone(num)){
        cout<<num<<" is a palindrome number."<<endl;
    } else {
        cout<<num<<" is not a palindrome number."<<endl;
    }
}