#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q1, q2;
    q1.push(10);                    //insert the values 
    q1.emplace(20);                 //same as push 
    q1.push(30);
    cout<<"Front:"<<q1.front()<<endl;    //returns the front element
    cout<<"Back:"<<q1.back()<<endl;         //returns the back element
    cout<<"Size:"<< q1.size()<<endl;          //returns the size
    cout<<"Empty:"<<q1.empty()<< endl;           //checks if queue is empty or not 
    q1.pop();                                           //removes the last element
    cout<<"After pop, front:"<< q1.front() << endl;
    q2.push(100);
    q2.push(200);
    q1.swap(q2);                                                //it will swap the queues
    cout<<"After swap, front of q1: "<<q1.front()<<endl;

    return 0;

}