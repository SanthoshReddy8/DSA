
// User function template for C++

// Brute Force

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};

TC: O(logn)
SC: O(1)

// Better
class Solution {
  public:
    int kthSmallest(vector<int>& arr, int k) {
        for (int i = 0; i < k; ++i) {
            int min_idx = i;
            for (int j = i + 1; j < arr.size(); ++j)
                if (arr[j] < arr[min_idx])
                    min_idx = j;
            swap(arr[i], arr[min_idx]);
        }
        return arr[k-1];
    }
};

TC: O(n*k)
SC: O(1)

//Optimal

  // User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int>pq;
        for(int num:arr){
            pq.push(num);
            if(pq.size() > k) pq.pop();
        }
        return pq.top();
    }
};


TC: O(nlogk)
SC: O(1)
