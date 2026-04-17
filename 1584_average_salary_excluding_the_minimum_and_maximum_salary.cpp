class Solution {
public:
    double average(vector<int>& salary) {
        double count=0,ans=0;
        int n=0;
        double minSal=*min_element(salary.begin(),salary.end());
        double maxSal=*max_element(salary.begin(),salary.end());
        for(int i=0;i<salary.size();i++){
            count=count+salary[i];
            n++;
        }
        ans=(count-(minSal+maxSal))/(n-2);
        return ans;
    }
};