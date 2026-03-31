// // https://strikes.in/practice/68b18bbfba6463f9f9ae4474

// bool allocatePage(int maxPage,vector<int> &arr, int k){
//     int count=1,pages=arr[0];
//     for(int i=1;i<arr.size();i++){
//         pages+=arr[i];
//         if(pages>maxPage){
//             count++;
//             pages=arr[i];
//         }
//     }
//     return count<=k;
// }


// int findPages(vector<int> &arr, int k) {
//     // Your code here
//     int n=arr.size();
//     int start=0,end=0,ans;

//     if(k>n){
//         return -1;
//     }

//     for(int i=0;i<n;i++){
//         start=max(start,arr[i]);
//         end=end+arr[i];
//     }
//   while(start<=end){
//     int mid= start + (end-start)/2;
//     if(allocatePage(mid,arr,k)){
//         ans=mid;
//         end=mid-1;
//     }
//     else{
//         start=mid+1;
//     }
//   }
//   return ans;
// }



//------------------------------------------------------------------------------

// some confusion i faced in this problem

// bool allocatePage(int maxPage,vector<int> &arr, int k){
//     int count=1,pages=arr[0];
//     for(int i=1;i<arr.size();i++){
//         pages+=arr[i];
//         if(pages>maxPage){
//             count++;
//             pages=arr[i];
//         }
//     }
//     return count<=k;
// }


// example
// arr = [10, 20, 30, 40]  and k=2
//start=40,end=100

// start = maximum element in array
// Because one student must at least take the largest book
// end = sum of all pages
// Worst case → one student takes all books

// mid=70 (i need to allocate all the book between A and B within this limit if it is possible?)
// mid=maxPage = 70

// let's check
// int count=1,pages=arr[0]=10;   // i gave first book to student A

// Now, i need to check from 1 to n 
// for(int i=1;i<arr.size();i++){


// pages+=arr[i]; ---> pages=10+20=30
// if(pages>maxPage){----> if(30>70)---No, so i can give this book to A
// i gave 2nd book(20 pages) to A 

// pages+=arr[i];--->pages=30+30=60
// if(pages>maxPage){----> if(60>70)---No, so i can give this book to A
// i gave 3rd book(30 pages) to A 

// pages+=arr[i];--->pages=60+40=100
// if(pages>maxPage){----> if(100>70)---yes, so i can't give this book to A,i've to give to B
// i gave 4th book(40 pages) to B
// if(pages>maxPage){
//    count++;          //i gave 4th book(40 pages) to B  so, count=2;
//    pages=arr[i];     //now B have 40 pages if there are more book i can check if
//    }                 // i can allocate more book to B


//with 70 pages allocation is possible

//   while(start<=end){
//     int mid= start + (end-start)/2;
//     if(allocatePage(mid,arr,k)){        ---->true,allocation is possible with 70 page
//         ans=mid;
//         end=mid-1;
//     }
//     else{
//         start=mid+1;
//     }
//   }


//start=40,end=mid-1=>70-1=69
// mid= 54

//now check if with 54 pages allocation is possible or not, 1 student can get a maximum
//of 54 pages, if pages exceeds maxPage then give that book to next student