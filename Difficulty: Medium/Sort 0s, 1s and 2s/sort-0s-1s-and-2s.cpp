class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int zero=0, one=0, two=0;
        for(int num:arr){
            if(num==0) zero++;
            else if(num==1) one++;
            else two++;
        }
        for(int i=0;i<zero;i++) arr[i]=0;
        for(int i=zero;i<zero+one;i++) arr[i]=1;
        for(int i=zero+one;i<arr.size();i++) arr[i]=2;
    }
};