class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
 
         set<int> mySet;

        for (int i = 0; i < nums.size(); i++) {
            // If the element is already in the set, it's a duplicate
            if (mySet.find(nums[i]) != mySet.end())
                return true;
            mySet.insert(nums[i]);
        }

        // No duplicates found
        return false;
    }
};