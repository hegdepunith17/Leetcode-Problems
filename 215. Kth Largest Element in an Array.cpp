class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> kthlargest;
        for(int i=0;i<nums.size();i++) kthlargest.push(nums[i]);
        for(int j=0;j<k-1;j++)kthlargest.pop();
        return kthlargest.top();
        
    }
};
