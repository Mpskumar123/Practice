#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    int p;
    for(int i=1,p=0;i<=n;i++,p++){
        for(int j=1;j<=i;j++){
            cout<<p+1;
        }
        cout<<""<<endl;
    }
}