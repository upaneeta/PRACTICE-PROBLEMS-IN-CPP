class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        int max=nums[0]*nums[1];
        for(i=0;i<n;i++)
        {
            if(nums[i]*nums[i+1]>max)
            {
                max=nums[i]*nums[i+1];
            }
            
        }
        return max;
    }
};
