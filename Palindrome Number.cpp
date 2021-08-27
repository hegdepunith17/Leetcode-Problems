class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x,rem;
        long rev=0;
        if(x<0)return false;
        else {
            while(x>0)
            {
             rem=x%10;
            rev=rev*10+rem;
            x=x/10;
                
            }
            return  rev==temp;
           
        }
        
    }
};
