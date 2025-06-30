#include<iostream>
using namespace std;

string reverse(string str){
    string reverseString="";
    for(int i=str.length();i>=0;i--){
        reverseString += str[i];
    }
    return reverseString;
}
int main(){
    string inputstring;
    cout << "Enter a string: ";
    cin >> inputstring;
    string reverseString="";
   
    cout<<"ReversedString:"<<reverse(inputstring)<<endl;
    return 0;

}