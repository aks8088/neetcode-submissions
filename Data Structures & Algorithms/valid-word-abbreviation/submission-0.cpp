class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0;
        int j=0;
        while(i<word.length() && j<abbr.length()){            
        if(isdigit(abbr[j])){
            if(abbr[j]=='0'){
                return false;
            }
        int index=0;
        while(j<abbr.length() && isdigit(abbr[j])){
            index=index*10+(abbr[j]-'0');
            j+=1;
        }  
        i+=index;  
        }
        else{
            if(word[i]!=abbr[j]) {
            return false;
            }
        i++;
        j++;
        }
        }
    return i==word.length() and j==abbr.length();
    }
};