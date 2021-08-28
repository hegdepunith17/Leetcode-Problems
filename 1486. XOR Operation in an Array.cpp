class Solution {
public:
    int xorOperation(int n, int start) {
        int xr=0;
        vector<int >nums;
        for(int i=0;i<n;i++){
            nums.push_back(start+2*i);
        }
          for(int i=0;i<n;i++){
            xr=xr^nums[i];
        }
        return xr;
    }
};
