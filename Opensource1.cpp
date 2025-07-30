#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of elements :"<<endl;
    int n;
    cin>>n;
    int arr[n];
    int avg=0;
    cout<<"Enter elements :"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        avg+=arr[i];
    }
    cout<<"Average is : "<<(double)avg/n;
}
