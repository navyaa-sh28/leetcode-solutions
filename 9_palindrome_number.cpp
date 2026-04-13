class Solution {
public:
    bool isPalindrome(int x) {
        int original =x;
        int rem;
        long long rev=0;
        if(x<0){
            return false;
        }
        else{
        while(x>0){
            rem=x%10;
            rev=(rev*10)+rem;
            x=x/10;
        }
        if(rev==original){
            return true;
        }
        else{
            return false;
        }
        }
    }
};