class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;
        for(int i=0;i<operations.size();i++){
            string op=operations[i];
            if(isdigit(op[0])||op.length()>1&&op[0]=='-'){
                ans.push_back(stoi(op));
            }
            else if (op == "+") {
    int n = ans.size();
    ans.push_back(ans[n - 1] + ans[n - 2]);
} 
else if (op == "D") {
    ans.push_back(2 * ans.back());
} 
else if (op == "C") {
    ans.pop_back();
}
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
          sum+=ans[i];
        }
        return sum;
    }
};