class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if (n>0){
        for(int i=1;i<=n;i++){
                ans*=x;
        }
    }
        if(n<0){

            for(int i=1;i<=-n;i++){
                ans*=1/x;
            }
        }
        
    return ans;
        }
    
};