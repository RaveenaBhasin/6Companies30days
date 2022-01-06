//Question Link : https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/

class Solution
{
public:
    int findPosition(int N, int M, int K)
    {
        // cases: add K , modulo N, and check for 0
        if (N == 1)
            return 1;
        int m = ((M % N) + K - 1) % N;

        return m == 0 ? N : m;
    }
};

//Time Complexity : O(1)   Space Complexity : O(1)