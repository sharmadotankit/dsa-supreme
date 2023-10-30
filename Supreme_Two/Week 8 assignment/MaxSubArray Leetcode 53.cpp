class Solution {
public:

    int maxSubArrayHelper(vector<int>& nums, int start,int end){
        if(start>=end) return nums[start];

        int maxLeftBorderSum = INT_MIN,maxRightBorderSum = INT_MIN;
        int mid = start + ((end-start)>>1);

        int maxLeftSum = maxSubArrayHelper(nums,start,mid);
        int maxRightSum = maxSubArrayHelper(nums,mid+1,end);

        int leftBorderSum = 0;
        int rightBorderSum = 0;

        for(int i=mid;i>=start;i--){
            leftBorderSum += nums[i];
            if(leftBorderSum > maxLeftBorderSum) maxLeftBorderSum = leftBorderSum;
        }

        for(int j=mid+1;j<=end;j++){
            rightBorderSum +=nums[j];
            if(rightBorderSum > maxRightBorderSum) maxRightBorderSum = rightBorderSum;
        }

        int crossBorderSum = maxRightBorderSum + maxLeftBorderSum;

        return max(maxLeftSum, max(maxRightSum, crossBorderSum));

    }

    int maxSubArray(vector<int>& nums) {
        return maxSubArrayHelper(nums,0,nums.size()-1);
    }
};