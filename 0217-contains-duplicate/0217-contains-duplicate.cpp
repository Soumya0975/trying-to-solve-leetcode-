class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //create hashset to store elements from array
        
        unordered_set<int> seen;
        for(int nums:nums){// iterate each element in the array
            if(seen.count(nums)){
                return true;//duplicate found
            }
            seen.insert(nums);//add elements to hashset
        }
        return false;// no duplicates found
    }
};