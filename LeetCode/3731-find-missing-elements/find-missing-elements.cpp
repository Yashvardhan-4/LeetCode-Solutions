class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        for(int i = 0;i<n;i++){
            if(nums[i] > mx) mx = nums[i];
        }
        return res;
            if(nums[i] < mn) mn = nums[i];
        int mx = INT_MIN;
        for(int i = mn+1;i < mx;i++){
        set<int>st;
        for(int i : nums) st.insert(i);
            if(st.find(i) == st.end()) res.push_back(i);
        }
    }
        vector<int>res;
