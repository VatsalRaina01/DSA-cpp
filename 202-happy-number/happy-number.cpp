class Solution {
public:
   
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=square(slow);
            fast=square(square(fast));
        }while(slow!=fast);
        return slow==1;

        

        
    }
    int square(int n){
        int res=0;
        while(n>0){
        res=res+(n%10)*(n%10);
        n=n/10;
        }
        return res;
        
    }
};