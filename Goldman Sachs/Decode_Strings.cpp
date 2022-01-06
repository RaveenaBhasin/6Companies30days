//Question Link : https://practice.geeksforgeeks.org/problems/decode-the-string2444/1

class Solution{
public:
    string decodedString(string s){
        stack<char>st;
        string ans;
        for(int i = 0; i < s.size(); i++){
            if(s[i]!=']'){
               st.push(s[i]);
            } 
            else{
                string temp;
                while(!st.empty() && st.top()!='['){
                    temp = st.top() + temp;
                st.pop();
                }
                st.pop();
                string num;
                while (!st.empty() && isdigit(st.top())) {
                    num = st.top() + num;
                    st.pop();
                }
                int number = stoi(num);
                string duplicate;
                for (int j = 0; j < number; j++)
                    duplicate += temp;
                for (char ch : duplicate)
                    st.push(ch);
            }
        }
        string res;
        while (!st.empty()) {
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};


//Time Complexity : O(s)    Space Complexity : O(s)