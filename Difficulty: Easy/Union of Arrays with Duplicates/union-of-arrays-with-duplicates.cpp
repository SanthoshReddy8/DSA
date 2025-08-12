
//Brute Force
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

TC: O(n+m).log(n+m)
SC: O(1)

//Optimal
class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        int m = a.size(), n = b.size();
        vector<int> unionarr;
        int i = 0, j = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        while(i < m && j < n) {
            if(a[i] < b[j]) {
                if(unionarr.empty() || unionarr.back() != a[i])
                    unionarr.push_back(a[i]);
                i++;
            } else if(b[j] < a[i]) {
                if(unionarr.empty() || unionarr.back() != b[j])
                    unionarr.push_back(b[j]);
                j++;
            } else {
                if(unionarr.empty() || unionarr.back() != a[i])
                    unionarr.push_back(a[i]);
                i++; j++;
            }
        }
        while(i < m) {
            if(unionarr.empty() || unionarr.back() != a[i])
                unionarr.push_back(a[i]);
            i++;
        }
        while(j < n) {
            if(unionarr.empty() || unionarr.back() != b[j])
                unionarr.push_back(b[j]);
            j++;
        }
        return unionarr;
    }
};


TC: O(mlogm + nlogn) for sorting + O(m+n) for merging
SC: O(1)
