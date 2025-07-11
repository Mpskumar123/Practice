#include<iostream>
#include<vector>

#include <algorithm>
using namespace std;
int main(){
    vector<int>store;
    int n;


    if(store.empty()){                  //we can check the vector is empty or having values.
        cout<<"vector is empty"<<endl;
    }


    cout<<"Enter the size of vector:";
    cin>>n;
    
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        store.insert(store.begin()+i,j);   //insert the element in particular position.
                                         
    }
    int k=store.size();
    cout<<"last element is :"<<k<<endl;


    store.erase(store.begin()+k-1);       //begin is the ststring position of the vector.


    store.erase(store.end()-1);           //end is the  last position of the vector.
    for(int i=0;i<store.size();i++){
        cout<<store[i]<<endl;
    }
    


    swap(store[0],store[1]);              //swapping the numbers.
    cout<<"after swapping"<<endl;
    for(int i=0;i<store.size();i++){
        cout<<store[i]<<endl;
    }


    sort(store.begin(), store.end());     //it will sort the elements and it reqiure <algorithm> module for sort method.
    cout<<"after sorting"<<endl; 
    for(int i=0;i<store.size();i++){
        cout<<store[i]<<endl;
    }
    


    return 0;

}