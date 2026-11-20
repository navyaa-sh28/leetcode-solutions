class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
           int dig=0;
           int n=i;
           while(n>0){
            dig++;
            n=n/10;
           }
           if(dig%2!=0){
             continue;
           }
           else{
            int x=i;
            int m=dig/2;
            int l=dig/2;
            int sum1=0;
            int sum2=0;
            while(m>0){
                int rem=x%10;
                sum1+=rem;
                x=x/10;
                m--;
            }
             while(l>0){
                int rem=x%10;
                sum2+=rem;
                x=x/10;
                l--;
            }
            if(sum1==sum2)count++;
           }
        }
        return count;
    }
};