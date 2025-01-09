class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

         if(nums.size()<3)
        return 0;

    sort(nums.rbegin(),nums.rend());


    for(int i=0;i<=nums.size()-3;i++)
    {
        if(nums[i]<nums[i+1]+nums[i+2])
        return nums[i]+nums[i+1]+nums[i+2];
    }
    return 0;

    }
    
};