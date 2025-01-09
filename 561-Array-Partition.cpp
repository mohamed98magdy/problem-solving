class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
         sort(nums.begin(),nums.end());

      if(nums.size()==2)
        return nums[0];

        int maxPairs = 0;

    for(int i=0;i<nums.size();i=i+2)
    {
        maxPairs+= nums[i];
    }
    
    return maxPairs;
        
    }
};