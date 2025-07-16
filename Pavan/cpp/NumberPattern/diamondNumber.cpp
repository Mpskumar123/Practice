#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    int p=1;
    for(int i=1;i<n;i++,p++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<p;
        }
        for(int j=2;j<=i;j++){
            cout<<p;
        }

        cout<<""<<endl;
    }
    
    for(int i=2;i<n;i++,p++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=i;j<n;j++){
            cout<<p;
        }
        for(int j=i;j<n-1;j++){
            cout<<p;
        }

        cout<<""<<endl;
    }
}