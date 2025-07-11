#include<iostream>
using namespace std;
void linearSearch(int target,int* arr,int n){
    bool flag=false;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            cout<<"target is : "<<arr[mid];
            flag=true;
            break;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    if(!flag){
        cout<<"target is not found";
    }

}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int target;
    cout<<"Enter a Number:";
    cin>>target;
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    linearSearch(target,arr,arrSize);
    return 0;
}