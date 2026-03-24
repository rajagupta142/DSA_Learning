#include<iostream>
using namespace std;

void printValue(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    // a[0]=77;                    //it will change in the same address of arr.
    
}
int main(){
    int arr[5]={20,35,48,23,87};

    printValue(arr,5);                //when you pass arr here as arr stores it's own address
                                      //(so you can say it as pass by reference)
                                      //it is necessary to pass size of an array

    int arr2[8]={5,9,7,19,13,21,6,51};
    printValue(arr2,8);
                                    
    // cout<<arr;
    // cout<<arr[0]; 

}