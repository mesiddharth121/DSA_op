class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size() ;
        int i = 0 ;
        int j = n-1 ;
        vector<int>res(n) ;
        int last_index = n-1;

        while(i <= j){
            if(abs(nums[i]) > abs(nums[j])){
                res[last_index] = nums[i] * nums[i] ;
                i++ ;
            }
            else{
                res[last_index] = nums[j] * nums[j] ;
                j-- ;
            }
            last_index--;
        }
        return res ;
    }
};