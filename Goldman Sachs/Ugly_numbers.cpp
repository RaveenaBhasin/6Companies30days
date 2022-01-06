//Question Link : https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/

class Solution{
public:	
	int getNthUglyNo(int n) {
	    set<int>st;
	    st.insert(1);
	    while(--n) {
	        auto it = st.begin();
	        st.insert(*it * 2);
	        st.insert(*it * 3);
	        st.insert(*it * 5);
	        st.erase(it);
	    }
	    return *st.begin();
	}
};

//Time complexity : O(N)   Space Complexity : O(N)