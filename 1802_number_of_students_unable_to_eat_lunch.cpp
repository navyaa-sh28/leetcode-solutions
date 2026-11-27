class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count=0;
        queue<int>q;
        int n=students.size();
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        stack<int>s;
        for(int j=n-1;j>=0;j--){
            s.push(sandwiches[j]);
        }
        int rotations=0;
        while(!q.empty() && !s.empty()){

            if(q.front() == s.top()){
                q.pop();
                s.pop();

                rotations = 0;
            }
            else{
                int x = q.front();
                q.pop();
                q.push(x);

                rotations++;

                if(rotations == q.size()){ //everyone refused current sandwich
                    break;
                }
            }
        }

        return q.size();
    }
};