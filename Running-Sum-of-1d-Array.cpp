class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr(nums.size(),0);
        for(int i =0;i<nums.size();i++)
        {
            if(i==0)
            arr[i] = nums[i];
            else
            arr[i] = nums[i] + arr[i-1];
        }
        return arr;
        
    }
};