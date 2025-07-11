#include<iostream>
using namespace std;
int secondlargeNumber(int n,int* arr){
    int first=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
    }
    cout<<"second large numbers is :"<<second;
    return second;
}
int main(){
    int size;
    cout<<"Enter size of arr : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    secondlargeNumber(size,arr);

}