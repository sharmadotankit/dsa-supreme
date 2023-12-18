class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> q;
        int i;
        for(i=0;i<k;i++){
            q.push(nums[i]);
        }

        while(i<nums.size()){
            if(nums[i]>q.top()){
                q.pop();
                q.push(nums[i]);
            }
            i++;
        }
        return q.top();
    }
};