class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return false;
        long long root = 1;
        long long n;
        for(int i=1;i<=x;i++) {
            n = (long long)i*i;
            if(n<=x){
                root =i;
            }
            else{
                break;
            }
            
        }

     
     return root;
     
    }
};
