//Question link : https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution{
    public:
        bool canPair(vector<int>nums, int k){
            unordered_map<int, int>mp;
            int n = arr.size();
            for(int i = 0; i < n; i++){
                int currentVal = arr[i];
                int currentRem = ((currentVal % k) + k) % k;
                if(mp.find(currentRem) != mp.end()){
                    mp[currentRem] += 1;
                }
                else{
                    mp[currentRem] = 1;
                }
            }
            for(auto it : mp){
                if(it.first == 0){
                    if(mp[it.first]%2 != 0){
                        return false;
                    }
                }
                else if(mp.find(k-it.first)==mp.end()){
                    return false;
                }
                else if(mp[it.first]!=mp[k-it.first]){
                    return false;
                }
            }
            return true;
        }
};


// Time complexity : O(n + k),  Space Complexity : O(k) 