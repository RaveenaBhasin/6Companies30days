// Question link : 

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 == str2 + str1){
            return str1.substr(0, gcd(str1.size(), str2.size()));
        }
        else{
            return "";
        }
    }
};

// Time Complexity :  O(n) where n = max(str1.length(), str2.length()) Space Complexity : O(1)
