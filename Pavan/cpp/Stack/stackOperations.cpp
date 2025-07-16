#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>store;
    int n;
    cout<<"the size of the stack:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>i;
        store.push(i);          //push the ele into stack;
    }

    int topele=store.top();     //get the top ele in the stack
    cout<<"top element is:"<<topele<<endl;
    store.pop();                    // delete the top element
    store.emplace(10);              //emplace is used to construct an element in place directly in the container, avoiding a temporary object and copy/move operations

    while(!store.empty()){        //check if stack is empty or not 
        cout<<store.top()<<endl;
        store.pop();
    }

}