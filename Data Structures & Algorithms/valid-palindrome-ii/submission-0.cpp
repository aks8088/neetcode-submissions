class Solution {
public:
bool ispalindrome(int i,int j,string s){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return ispalindrome(i+1,j,s) || ispalindrome(i,j-1,s);
            }
            i++;
            j--;
        }
        return true;
    }
};