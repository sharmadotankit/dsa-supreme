class Solution {
public:
    int solve(vector<int>& nums, int index){
        int size = nums.size();
        if(index>=size){
            return 0;
        }

        // Robbed
        int robbed = nums[index] + solve(nums,index+2);
        // Not Robbed
        int notRobbed = 0 + solve(nums,index+1);

        return max(robbed,notRobbed);
    }
    int rob(vector<int>& nums) {
        return solve(nums,0);
    }
};