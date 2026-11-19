class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;

        for(int i=100; i<1000; i++){
            if(i%2!=0) continue;

            int n=i;
            vector<int> temp=digits;

            while(n>0){
                int dig=n%10;
                bool found=false;

                for(int j=0;j<temp.size();j++){
                    if(temp[j]==dig){
                        temp[j]=-1;
                        found=true;
                        break;
                    }
                }

                if(!found) break;

                n=n/10;
            }

            if(n==0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};