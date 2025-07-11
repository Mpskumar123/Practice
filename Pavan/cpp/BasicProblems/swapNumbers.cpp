#include<iostream>
using namespace std;
int swapNumbers(int *firstnum,int *secondnum){
    int temp;
    temp=*firstnum;
    *firstnum=*secondnum;
    *secondnum=temp;
    return 0;
}
int main(){
    int firstnum, secondnum;
    cout << "Enter first number: ";
    cin>>firstnum;
    cout<<"Enter second number: ";
    cin>>secondnum;
    cout<<"Before swapping: "<<firstnum<<" "<<secondnum<<endl;
    swapNumbers(&firstnum, &secondnum);
    cout<<"After swapping: "<<firstnum<<" "<<secondnum<<endl;
}