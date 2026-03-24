// 1 2 3 5  --- missing element is 4  
// 1 2 3 4 5 7 8 9 ----missing element is 6


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>arr(n);
    // arr[0]=1;
    // arr[1]=2;
    // arr[2]=3;
    // arr[3]=5;

    cout<<"Enter the Array:";
    for(int i=0;i<n;i++){
     cin>>arr[i];
     cout<<endl;
     }

     int sum1=0;
     for(int i=0;i<n;i++){
        sum1+=arr[i];
     }
     int n1=arr.size()+1;
       n1=(n1*(n1+1))/2;
     cout<<"missing element is:"+n1-sum1<<endl;
}