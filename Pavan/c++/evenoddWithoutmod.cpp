#include<iostream>
using namespace std;
bool findevenorodd(int num){
    if((num & 1) == 0){
        return true;
    }
    return false;
}
int main(){
    int inputnumber;
    cout<<"Enter a number: ";
    cin>>inputnumber;
    if(findevenorodd(inputnumber)){
        cout<<"The number "<<inputnumber<<" is even."<<endl;
    }else{
        cout<<"The number "<<inputnumber<<" is odd."<<endl;
    }
    return 0;

}