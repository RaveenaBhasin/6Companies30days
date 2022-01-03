// Question link : https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

string encode(string src)
{     
  //Your code here 
    string res = "";
    int count = 0;
    char curr = src[0];  //a
    for(int i = 0; i < src.size(); i++){
        if(src[i] != curr){    
            res += (curr + to_string(count));
            curr = src[i];
            count = 0;
        }
        count++;
    }
    res += (curr + to_string(count));
    return res;
}

// Time Complexity : O(n)  Space Complexity : O(1)