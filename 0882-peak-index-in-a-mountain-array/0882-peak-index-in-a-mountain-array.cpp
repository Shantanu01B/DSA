class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int start = 1, end = A.size() - 2;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid;
            } else if (A[mid] < A[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return -1; // should never reach here in a valid mountain array
    }
};
