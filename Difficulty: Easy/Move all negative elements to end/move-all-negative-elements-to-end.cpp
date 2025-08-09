class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int>temp;
        for(int num:arr)
            if(num>=0) temp.push_back(num);
        for(int num:arr)
            if(num<0) temp.push_back(num);
        for(int i=0;i<arr.size();i++){
            arr[i]=temp[i];
        }
    }
};