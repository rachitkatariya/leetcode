// class Solution {
// public:
//     int findMaxK(vector<int>& nums) {
//         int ans = INT_MIN;
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] == -nums[j]) {
//                     ans = max(ans, abs(nums[i]));
//                 }
//             }
//         }
//         return ans == INT_MIN ? -1 : ans;
//     }
// };
