class Solution {
public:
    int lengthOfLastWord(string s) {
        // int space=s.size()-1;
        // while(space>=0 && s[space] ==' '){
        //     space--;
        // }
        // int result=0;
        // while(space>=0 && s[space]!=' '){
        //     space--;
        //     result++;
        // }
        // return result;

        int count=0;
        bool ok=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                ok=1;
                count++;
            }
            else if(ok){
                break;
            }
        }
        return count;
    }
};