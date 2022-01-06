//Question link : https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-productuct-less-than-k1708/1/

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k <= 1) return 0;
        int ans=0;
        long long product=1, limit=0;
        for(int i=0; i<n; i++) {
            product *= a[i];
            while(product >= k) {
                product /= a[limit];
                limit++;
            }
            ans += (i - limit + 1);
        }
        return ans;
        
    }
};

// Time complexity : O(N)  Space Complexity : O(1)