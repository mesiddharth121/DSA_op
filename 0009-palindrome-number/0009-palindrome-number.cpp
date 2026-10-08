class Solution {
public:
    bool isPalindrome(int x) {
        int N = x ;
        long long rev ;

        if(x < 0)
        return false ;

        while(x > 0){
            int last_digit = x % 10 ;
            rev = ( rev * 10) + last_digit ;
            x = x / 10 ;

            
        }
        if(N == rev)
        return true ;

        else 
        return false ;
    }
};