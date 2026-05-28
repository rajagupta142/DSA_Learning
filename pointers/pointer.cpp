#include<iostream>
using namespace std;
// int main(){

//     int a = 10;
//     int *ptr = &a;

//     cout<< a<<endl;
//     cout<< &a<<endl;
//     cout<< ptr<<endl;
//     cout<<&ptr<<endl;
//     cout<<*ptr<<endl;
// }


//-------------------------------------------------------------------------------------------

// int arr[5] = {1,2,3,4,5};
// int *p = arr;

// int main(){

//     for(int i=0;i<5;i++){
//         // cout<<arr + i<<endl;
//         // cout<<*(arr + i)<<endl;
//         cout<<p + i<<endl;
//         cout<<*(p + i)<<endl;
//     }
//     // cout<<arr<<endl;
//     // cout<< arr + 1<<endl;
//     // cout<<*(arr)<<endl;
//     // cout<<*(arr + 1)<<endl;
// }


//------------------------------------------------------------------------

//      PASS BY POINTER

// int add(int *a, int b ){

//     int ans = 0;
    
//     for(int i=0;i<b;i++){
//         // ans+=*(a + i);  this both are same
//         ans+=a[i];
//     }

//     return ans;
// }

// int main(){

//     int arr[10]= {1,2,3,4,5,6,7,8,9,10};
//     int n = 10;

//     int ans = add(arr,n);
//     cout<<ans;

//     return 0;
// }


//----------------------------------------------------------------------------------

int main(){

    char arr[5] = {'a','b','c','d','e'};
    int n = 5;

    // cout<<arr;   // Unlike int here this arr will not point to address but the actual value
                 // char have special type of property

    char *ptr=arr;
    cout<<(void*)ptr<<endl;


    return 0;
}
