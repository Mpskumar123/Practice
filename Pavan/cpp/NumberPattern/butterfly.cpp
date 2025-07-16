#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    int k1;
    for(int i=1,k1=n;i<n;i++,k1--){
        int p=1;
        for(int j=1;j<=i;j++){
            cout<<p++;
        }
        for(int k=i;k<n-1;k++){
            cout<<" ";
        }
        for(int k=i;k<n-1;k++){
            cout<<" ";
        }
        int p1=n-k1+1;
        for(int h=1;h<=i;h++){
            cout<<p1--;
        }

        cout<<""<<endl;
    }
    int k2;
    for(int i=1,k2=n;i<n;i++,k2--){
        int pp=1;
        for(int j=i;j<n-1;j++){
            cout<<pp++;
        }
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        int pp1=k2-2;
        for(int h=i;h<n-1;h++){
            cout<<pp1--;
        }
        cout<<""<<endl;
    }
}