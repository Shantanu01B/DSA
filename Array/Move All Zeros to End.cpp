// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int insertposition=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] != 0){
                arr[insertposition++]=arr[i];
            }
        }
        
        while (insertposition < arr.size()){
            arr[insertposition++]=0;
        }
        
    }
};
