class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> seen;
        for(int nums:nums){
            if(seen.count(nums)){
                return true;
            }
            seen.insert(nums);
        }
        return false;
    }
};