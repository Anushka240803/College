#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the string :"<<endl;
    string s;
    cin>>s;
    int n= s.size();
    string r="";
    for(int i =n-1;i>=0;i--){
        r+= s[i];
    }
    cout<<"Reverse is : "<<r;
}
