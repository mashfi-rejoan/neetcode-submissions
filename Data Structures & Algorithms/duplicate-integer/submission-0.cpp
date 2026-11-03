class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for (auto u : nums) st.insert(u);
        int st_sz = st.size();
        int num_sz = nums.size();
        if(st_sz != num_sz) return true;
        else return false;
    }
};