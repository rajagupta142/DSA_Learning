// // https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

// bool shippingPossibleWithThisWeight(int maxShipWeight,vector<int>& weights, int days){
//     int shipDays=1, parcelWeight=weights[0];
//     for(int i=1;i<weights.size();i++){
//        parcelWeight+=weights[i];
//        if( parcelWeight>maxShipWeight){
//          shipDays++;
//          parcelWeight=weights[i];
//        }
//     }
//     return shipDays<=days;
// }

// class Solution {
// public:
//     int shipWithinDays(vector<int>& weights, int days) {
//         int n=weights.size();
//         int start=0,end=0,ans;
//         for(int i=0;i<n;i++){
//             start=max(start,weights[i]);
//             end+=weights[i];
//         }
//         while(start<=end){
//             int mid=start + (end-start)/2;
//          if (shippingPossibleWithThisWeight(mid,weights,days)){
//                ans=mid;
//                end=mid-1;
//         }
//         else{
//             start=mid + 1;
//         }
//         }
//         return ans;
//     }
// };


//---------------------------------------------------------------------------------------

// same approach as AllocateMinimumNumberOfPages and split_Array_Largest_Sum


// The ith package on the conveyor belt has a weight of weights[i] 
// weights = [1,2,3,4,5,6,7,8,9,10], days = 5
// highest parcel weight among all of these is 10 , 
// so ship must have this much of weight, all other parcel are either minimim or equal weight
// so, to carry highest weight ship must have weight equal to parcel highest weight(i.e 10)
// worst case, ship will be having weight equal of weight of all packages (i.e 55)

// take the maxWeight of ship mid = 32 and check if i take maxWeight of ship as 32
// if shipping of all the parcel is possible within 5 days