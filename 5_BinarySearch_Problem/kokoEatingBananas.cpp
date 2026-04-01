// // https://leetcode.com/problems/koko-eating-bananas/description/

// bool isEatingBananaPossible(int maxKokoSpeed,vector<int>& piles, int h){
//     long long count=0;
//     for(int i=0;i<piles.size();i++){
//             count += piles[i]/maxKokoSpeed;
//         if(piles[i] % maxKokoSpeed > 0){
//             count++;
//            }
//         }
//         return count<=h;
// }

// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
        
//         int n=piles.size();
//          int start=1,end=0,ans=0;
//         for(int i=0;i<n;i++){
//             end=max(end,piles[i]);
//         }
//         while(start<=end){
//             int mid=start + (end-start)/2;
//             if (isEatingBananaPossible(mid,piles,h)){
//                 ans=mid;
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//         }
//         return ans;
//     }
// };



//------------------------------------------------------------------------------------

// suppose [20,30,40]  h=90hr

// should koko eat bananas int the speed of 40 or 20 ?
// no, koko likes to eat slowly, so even koko eat 1 banana per hour he will finish all bananas in 90hr
// start =1
// end should be max bananas in a pile (40---> koko eat at a speed of this then he will take 
//  1 hour for each pile of banana (without completing 1 pile koko can't move to other pile))
// so even koko eat at a speed of 15 banana per hour 
//1st pile-------  1st hour-->finished 15 banana    leftover is 5
//2nd hour he will only eat that leftover 5 bananas

// int mid=start + (end-start)/2;     mid=91/2=>45
//if koko starts eating 45 bananas per hour,will he finish eating each pile within 90hr?
// yes,then see if you take eating speed less than 45,will he finish all pile?
//  (end=mid-1=44)    ------mid = 45/2=>22

// check like this 


// and now 

// bool isEatingBananaPossible(int maxKokoSpeed,vector<int>& piles, int h){
//     long long count=0;
//     for(int i=0;i<piles.size();i++){
//             count += piles[i]/maxKokoSpeed;
//         if(piles[i] % maxKokoSpeed > 0){
//             count++;
//            }
//         }
//         return count<=h;
// }


// if piles[0]=4 and maxKokoSpeed=10

// count += piles[i]/maxKokoSpeed;   -------------> 0
//     if(piles[i] % maxKokoSpeed > 0){    ----------> 4 % 10 = 4 if(4>0)--yes so count++; 
//         count++;
//         }