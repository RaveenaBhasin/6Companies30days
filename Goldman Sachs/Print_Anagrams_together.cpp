// Question link : https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int n = strs.size();
        unordered_map<string, vector<string>>mp;
        for(int i = 0; i < n; i++){
            string word = strs[i];
            sort(word.begin(), word.end());
            mp[word].push_back(strs[i]);
        }
        for(auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};

// Time complexity : O(N*logW* W) where W is the length of the strings  
// Space complexity : O(N*W)