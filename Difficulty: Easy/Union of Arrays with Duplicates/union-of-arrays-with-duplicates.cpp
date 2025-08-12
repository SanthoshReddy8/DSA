class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size(), m=b.size();
        set<int>st;
        vector<int>unionarr;
        for(int num:a){
            st.insert(num);
        }
        for(int num:b){
            st.insert(num);
        }
        for(int num:st){
            unionarr.push_back(num);
        }
        return unionarr;
        
    }
};