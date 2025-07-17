#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q1, q2;
    q1.push(10);
    q1.emplace(20);
    q1.push(30);
    cout << "Front: " << q1.front() << endl;
    cout << "Back: " << q1.back() << endl;
    cout << "Size: " << q1.size() << endl;
    cout << "Empty: " << q1.empty() << endl;
    q1.pop();
    cout << "After pop, front: " << q1.front() << endl;
    q2.push(100);
    q2.push(200);
    q1.swap(q2);
    cout << "After swap, front of q1: " << q1.front() << endl;

    return 0;

}