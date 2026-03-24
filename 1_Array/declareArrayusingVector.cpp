#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(5);   //vector is dynamic even though you have given size as 5 you can add
                         // or remove an element 
    arr[0]=7;
    arr[1]=13;
    arr[2]=9;
    arr[3]=29;
    arr[4]=17;

    arr.push_back(71);   //to add an element dynamically
    arr.push_back(57);   // to delete the last element
    arr.pop_back();

    int n=arr.size();

     for(int i=0;i<n;i++){
     cout<<arr[i]<<endl;
     }
}
