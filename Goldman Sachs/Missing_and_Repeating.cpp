//Question link : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *res = new int[2];
        unordered_map<int, int>mp;
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        for(int i = 1; i <= n; i++) {
            if(mp[i] == 0){
                res[1] = i;
            }
            if(mp[i] == 2){
                res[0] = i;
            }
        }
        return res;
    }
};

// Time Complexity : O(n)   Space Complexity : O(1)