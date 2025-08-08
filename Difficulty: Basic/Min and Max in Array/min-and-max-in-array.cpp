// User function Template for C++

//Brute Force

class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        sort(arr.begin(),arr.end());
        
        return {arr[0],arr[arr.size()-1]};
        
    }
};

TC: O(logn) for sorting
SC: O(1)

//Optimal

// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n=arr.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int num:arr){
            if(num<mini){
                mini=num;
            }
            if(num>maxi){
                maxi=num;
            }
        }
        return {mini,maxi};
    }
};

TC: O(n)
SC: O(1)
