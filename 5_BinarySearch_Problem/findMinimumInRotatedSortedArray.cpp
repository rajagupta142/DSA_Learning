// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int start = 0, end = nums.size() - 1;

//         while (start < end) {
//             int mid = start + (end - start)/2;

//             if (nums[mid] > nums[end]) {
//                 // minimum must be in right half
//                 start = mid + 1;
//             } else {
//                 // minimum is at mid or in left half
//                 end = mid;
//             }
//         }

//         // start == end points to the minimum element
//         return nums[start];
//     }
// };









// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//       int n=nums.size();
//       int start=0,end=n-1;

//       while(start<end){
//         int mid=start + (end-start)/2;
//         if(nums[mid]>nums[0] && nums[mid]>nums[n-1]){
//             end=mid;
//         }
//         else if(nums[mid] < nums[start]){ 
//              end=mid;
//         }
//         else{
//             start=mid+1;
//         }
//       }
//       return nums[start];
//     }

// tell me every issue with this code 





// Good — this is exactly the kind of question that builds strong understanding. Let’s go through **every issue** in your code one by one.

// ---

// ## 🔴 Your Code

// ```cpp
// if(nums[mid]>nums[0] && nums[mid]>nums[n-1]){
//     end=mid;
// }
// else if(nums[mid] < nums[start]){ 
//      end=mid;
// }
// else{
//     start=mid+1;
// }
// ```

// ---

// # ❌ 1. Wrong core comparison (using `nums[0]` and `nums[n-1]`)

// ### Problem:

// ```cpp
// nums[mid] > nums[0] && nums[mid] > nums[n-1]
// ```

// 👉 This condition is **not a reliable way** to detect which side contains the minimum.

// ### Why?

// Rotated arrays break the global order. Example:

// ```cpp
// [5,1,2,3,4]
// ```

// * `nums[0]=5`, `nums[n-1]=4`
// * `mid=2 → nums[mid]=2`

// Now:

// ```cpp
// 2 > 5 && 2 > 4  → false
// ```

// 👉 But `mid` is actually in the **right (sorted) part**, not left.

// So this condition gives **wrong direction decisions**.

// ---

// # ❌ 2. Using `nums[start]` (moving reference)

// ```cpp
// nums[mid] < nums[start]
// ```

// ### Problem:

// * `start` is **changing every iteration**
// * So your comparison base is **not stable**

// 👉 Binary search **must use a fixed reference**, otherwise logic breaks.

// ### Why it's bad:

// * At one step `start=0`, later `start=3`
// * Same `mid` value might behave differently

// 👉 This leads to **inconsistent decisions**

// ---

// # ❌ 3. Overlapping / conflicting conditions

// These two:

// ```cpp
// if(nums[mid]>nums[0] && nums[mid]>nums[n-1])
// else if(nums[mid] < nums[start])
// ```

// 👉 They are trying to:

// * detect left sorted part
// * detect right sorted part

// But:

// * They **overlap**
// * They **miss cases**
// * They **contradict each other**

// 👉 Result: undefined behavior on some inputs

// ---

// # ❌ 4. Wrong binary search direction

// ```cpp
// if(nums[mid]>nums[0] && nums[mid]>nums[n-1]){
//     end=mid;   // ❌ WRONG direction
// }
// ```

// 👉 If `mid` is in the **left sorted part**, the minimum is actually on the **right side**.

// So correct should be:

// ```cpp
// start = mid + 1;
// ```

// But you are doing the opposite.

// ---

// # ❌ 5. Logic depends on array shape (fragile)

// Your code might work for:

// * `[3,4,5,1,2]`
// * `[4,5,6,7,0,1,2]`

// But fails or behaves unpredictably for:

// * `[5,1,2,3,4]`
// * `[2,3,4,5,1]`

// 👉 That means your logic is **not general**

// ---

// # ❌ 6. Overcomplication

// You are using:

// * `nums[0]`
// * `nums[n-1]`
// * `nums[start]`
// * `nums[mid+1]` (implicitly in thinking)

// 👉 Too many references = confusion

// Binary search should rely on **ONE consistent rule**

// ---

// # ✅ What should be done instead

// ### Golden rule:

// ```cpp
// compare nums[mid] with nums[end]
// ```

// ---

// ## ✅ Correct Minimal Logic

// ```cpp
// while(start < end){
//     int mid = start + (end - start)/2;

//     if(nums[mid] > nums[end]){
//         start = mid + 1;
//     } else {
//         end = mid;
//     }
// }
// return nums[start];
// ```

// ---

// # 🧠 Why this works (key insight)

// * Right side is always **sorted**
// * Minimum is always in **unsorted part**
// * `nums[end]` tells you which side is sorted

// ---

// # 🔥 Summary of all issues

// | Issue                       | Why it’s wrong              |
// | --------------------------- | --------------------------- |
// | Using `nums[0]`             | Not reliable after rotation |
// | Using `nums[start]`         | Changes every iteration     |
// | Mixed conditions            | Conflicting logic           |
// | Wrong direction (`end=mid`) | Moves away from minimum     |
// | Not general                 | Fails on some inputs        |
// | Overcomplicated             | Hard to reason              |

// ---

// ## 🚀 Final takeaway

// > ❌ Avoid: `nums[0]`, `nums[start]`, multiple conditions
// > ✅ Use: **only `nums[mid]` vs `nums[end]`**

// ---

// If you want next level mastery, I can show you:
// 👉 how this same pattern extends to **search in rotated array (LeetCode 33)**
// 👉 or how to handle **duplicates (hard version)**
