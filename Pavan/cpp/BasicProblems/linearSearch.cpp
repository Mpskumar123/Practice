#include<iostream>
using namespace std;
void linearSearch(int target,int* arr,int n){
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"target is :"<<arr[i];
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"target is not found";
    }

}
int main(){
    int arr[10]={3,4,1,6,7,8};
    int target;
    cout<<"Enter a Number:"<<flush;
    cin>>target;
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    linearSearch(target,arr,arrSize);
    return 0;
}