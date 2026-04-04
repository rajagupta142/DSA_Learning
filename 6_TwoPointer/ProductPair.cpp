// // // // https://strikes.in/practice/68b3b8584f186b885b9c83a0

// bool isProduct(vector<int>& arr, long long target) {
//     // Your code here
    
// 	// mid: last index of negative number

// 	sort(arr.begin(),arr.end());

// 	int mid = -1, n = arr.size();

// 	for(int i=0;i<n;i++){
         
// 		 if(arr[i]<0){
// 			mid = i;
// 		 }
// 		 else{
// 			break;
// 		 }
// 	}


// 	if(target>=0){

// 		// Both number should lie in negative reigon
//         int start = 0, end = mid;
//         while(start<end){
//           long long prod = (long long)arr[start] * arr[end];
// 			if(prod==target){
// 				return 1;
// 			}
// 			else if(prod < target){
// 				end--;
// 			}
// 			else{
// 				start++;
// 			}
// 		}



// 		// BOth number should lie in positive reigon
// 		start = mid+1, end = n-1;

// 		while(start<end){
//            long long prod = (long long)arr[start] * arr[end];
// 			if(prod==target){
// 				return 1;
// 			}
// 			else if(prod < target){
// 				start++;
// 			}
// 			else{
// 				end--;
// 			}
// 		}


// 	}
//     else{

// 		// one number should lie in -ve reigon another in positive 

// 		int start = 0, end = mid+1;

// 		while(start<=mid&&end<n){
//            long long prod = (long long)arr[start] * arr[end];
// 			if(prod==target){
// 				return true;
// 			}
// 			else if(prod>target){
// 				end++;
// 			}
// 			else{
// 				start++;
// 			}
// 		}
// 	}


// 	return false;


// } 



//-------------------------------------------------------------------------------------

// // this below code will encounter integer overflow condition

// // bool isProduct(vector<int>& arr, long long target) {
// //     // Your code here
// //     sort(arr.begin(),arr.end());
// //     int n=arr.size();
// //     int mid=-1;


// //     for(int i=0;i<n;i++){
// //         if(arr[i]<0){
// //             mid=i;
// //         }
// //         else{
// //             break;
// //         }
// //     }


    
// //     // if target is positive
// //     // negative * negativef

// // if(target>=0){
// //     int start=0,end=mid;
// //      while(start<end){
// //        if(arr[start] * arr[end] == target){
// //         return true;
// //        }
// //        else if(arr[start] * arr[end] < target){
// //        end--;
// //        }
// //        else{
// //         start++;
// //        }
// //     }


// //      // positive * positive 
// //      start=mid+1,end=n-1;
// //     while(start<end){
// //        if(arr[start] * arr[end] == target){
// //         return true;
// //        }
// //        else if(arr[start] * arr[end] > target){
// //         end--;
// //        }
// //        else{
// //         start++;
// //        }
// //     }
// // }
// // else{
// //     // if target is negative 
// //     // negative * positive
// //     int start=0,end=mid+1;
// //     while(start<=mid && end<n){
// //        if( arr[start] * arr[end]== target){
// //         return true;
// //        }
// //        else if(arr[start] * arr[end] > target){
// //         end++;
// //        }
// //        else{
// //         start++;
// //        }
// //     }
// // }   
// // return false;
// // }