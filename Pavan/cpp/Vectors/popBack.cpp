#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>store={1,2,3,4,5};
    
    cout<<store.size()<<endl;
    store.pop_back();                   //delte the last element in the vector
    for(int i=0;i<store.size();i++){
        cout<<store[i]<<",";
    }
    return 0;

}