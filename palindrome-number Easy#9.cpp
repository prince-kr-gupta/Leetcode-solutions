class Solution {
public:
    bool isPalindrome(int x) {
      if(x < 0) return false;
      if(x == 0 ) return true;

      int original = x;
      long long reversed = 0;

      while(x != 0){
        int num;
        num = x%10;
       reversed = (reversed*10) + num;
        x = x/10;
      }

      return original == reversed;
     
    }
     
};
