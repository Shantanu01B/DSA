class Solution {
public:
    int singleNonDuplicate(vector<int>& A){
        int n=A.size();
        
        if(n==1){
            return A[0];
        }

        int start=0,end=n-1;
        while(start<=end){
            int mid =start +(end-start)/2;

            if(mid ==0 && A[0] !=A[1]){ //if mid is first element
                return A[mid];
            }
            if(mid == n-1 && A[n-1]!=A[n-2]){ // if mid is last element
                return A[mid];
            }

            if( A[mid-1] != A[mid] && A[mid]!=A[mid+1]){ 
                return A[mid];
            }

            if(mid %2 ==0){//Even
              if(A[mid-1] == A[mid]){//left
                end=mid-1;
                }else{//right
                    start=mid+1;
                }
            }else//odd
            {
              if(A[mid-1] == A[mid]){//right
                start=mid+1;
              }else{//left
                end=mid-1;
              }
            }
        }
        return -1;
    }
};