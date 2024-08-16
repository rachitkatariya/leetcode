#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currSum = 0; 

    for(int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum is " << maxSubArray(nums) << endl;
    return 0;
}
