class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int n= str.size();
        int count=0;
         for(int i=0;i<n;i++){
             if(str[i]==str[n-i-1]){
                 count++;
             }
             
         }
        if(count==n){
            return true;
        }
        else{
            return false;
        }
         
          
    }
};