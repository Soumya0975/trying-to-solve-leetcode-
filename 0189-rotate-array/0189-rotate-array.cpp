class Solution {
public:
    void rotate(vector<int>& nums, int k) {// reverse algorithm
        int n=nums.size();
        k=k%n;//handle k larger than the array size
        reverse(nums.begin(),nums.end());//rev whole array
        reverse(nums.begin(),nums.begin()+k);//rev first k elements
        reverse(nums.begin()+k,nums.end()); //rev remaining elements
    
    }
};
//t=o(n)
//s=o(1)