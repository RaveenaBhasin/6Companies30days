// Question link : https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#

class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int>st;
        string ans = "";
        int n = 1;
        for(int i = 0; i < S.size(); i++) {
            if(S[i] == 'D'){
                st.push(n++);
            }
            else{
                st.push(n++);
                while(!st.empty()){
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(n++);
        while(!st.empty()){
            ans += to_string(st.top());
            st.pop();
        }
        return ans;
    }
};

// Time Complexity : O(N)   Space Complexity : O(1)