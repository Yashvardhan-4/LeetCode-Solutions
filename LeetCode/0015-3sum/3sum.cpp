    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        }
                if(j != i && mp.find(target - nums[j]) != mp.end() && mp[target - nums[j]] != i){
            }
        for(int i = 0;i < n-2;i++){
            int target = -(nums[i]);
            unordered_map<int,int>mp;
            for(int j = i+1;j < n;j++){
                    res.insert({nums[i],target - nums[j],nums[j]});
                }else mp[nums[j]] = j;
        set<vector<int>> res;
public:
class Solution {
        int n = nums.size();
        vector<vector<int>> ans;
            if(i > 0 && nums[i] == nums[i-1]) continue;
        for(auto i : res) ans.push_back(i);
