class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,1);//initialize ans arr with 1
        int leftProduct=1;//sorts product of numbers on the left
        for(int i=0;i<n;i++){ //fill results with left product
           result[i]=leftProduct;
           leftProduct*=nums[i];//update left product for next index
        }
        int rightProduct=1;
        for(int i=n-1;i>=0;i--){
            result[i]*=rightProduct;//trverse from right to left and multiply left with right
            //update right product for next index
            rightProduct*=nums[i];
        }
        return result;
        
    }
};