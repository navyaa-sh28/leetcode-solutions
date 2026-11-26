class Solution {
public:
    bool canAliceWin(int n) {
        int x=n;
        if(x<10){
            return false;
        }
        else{
           int y=10;
           int alice=0;
           int bob=1;
        while(x>0){
            if(x>=y){
                if(alice==1){
                    alice=0;
                    bob=1;
                }
                else{
                    bob=0;
                    alice=1;
                }
                x=x-y;
            }
            else {
                break;
            } 
            y--;
        }
        if(alice==1){
            return true;
        }
        else{
            return false;
        }
        }
    }
};