class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       int maxright=-1;
       for(int i=arr.size()-1;i>=0;--i){
        int temp=arr[i];
        arr[i]=maxright;
        maxright=max(temp,maxright);
       }
       return arr;
    }
};