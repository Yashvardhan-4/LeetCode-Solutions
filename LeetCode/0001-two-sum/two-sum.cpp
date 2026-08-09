class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int nx = nums.size();
        for(int i = 0;i < nx;i++){
            if(mp.find(target - nums[i]) != mp.end()) return {mp[target-nums[i]],i};
            mp[nums[i]] =i;
        }
        return {0,0};
    }
};
