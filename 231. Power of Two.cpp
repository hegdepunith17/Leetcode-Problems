
//Naive approach

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int res=0;
        while(n>0){
            n=n&(n-1);
            res++;
        }
        if(res==1)return true ;
        else return false;
    }
};
