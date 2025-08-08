// Better

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n/2;i++){
            int temp=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
    }
};

TC: O(n) for Copying elements to a new array
SC: O(n) for using an extra array


//Optimised

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        int left=0, right=n-1;
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
};

TC: O(n) as we are visiting each element exactly once.
SC: O(n) 
