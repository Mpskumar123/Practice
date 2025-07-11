#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>store;
    int n;
    cout<<"Enter the size of vector";
    cin>>n;
    cout<<"vector values are ";
    for(int i=0;i<n;i++){
        cin>>i;
        store.push_back(i);
    }
    cout<<store[0]<<endl; //vector index start from 0.
    cout<<store.size();   //return the size of the vector.
    return 0;
}