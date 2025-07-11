#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>store={1,2,3,4,5,6};
    cout<<"first element in the vector :"<<store.front()<<endl;           //returns the first element in the vector.

    cout<<"last element in the vector :"<<store.back()<<endl;            //returns the last ele in the vector.

    cout<<"particular position element in the vector :"<<store.at(2)<<endl; // returns the  metioned position element in the vector.

    for(int i=0;i<store.size();i++){
        cout<<store[i]<<endl;
    }

    store.assign(2,10);                                             //it will assign the copy of the multiple elements.
    cout<<"after assigning the elements in the vector:"<<endl;
    for(int i=0;i<store.size();i++){
        cout<<store[i]<<endl;
    }

    cout<<"size of the vector:"<<store.size()<<endl;               //returns the size od the vector.


    store.resize(10);                                              //it will resize(increase the size of vector) the vector.

    cout<<" the vector size after the resizing:"<<store.size()<<endl;
    store.clear();                                                    // it removes the elements int the vector.

    if(store.empty()){
        cout<<"vector is empty!"<<endl;                               //it will check vector empty or not.
    }

    return 0;
}