class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i = 0;i<n;i++){
            if(nums[i] > mx) mx = nums[i];
            if(nums[i] < mn) mn = nums[i];
        }
        set<int>st;
        vector<int>res;
        for(int i : nums) st.insert(i);
        for(int i = mn+1;i < mx;i++){
            if(st.find(i) == st.end()) res.push_back(i);
        }
        return res;
    }
