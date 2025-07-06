class Solution {
public:
    void reverse(vector<int>& arr, int start, int end) {
        while(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;

        reverse(arr, 0, n - 1);       // Step 1: Reverse entire array
        reverse(arr, 0, k - 1);       // Step 2: Reverse first k elements
        reverse(arr, k, n - 1);       // Step 3: Reverse remaining n-k elements
    }
};
