class Solution {
public:
    bool exist(vector<vector<char>>& b, string w) {  //b= board and w=word
        if(count(w.begin(), w.end(), w[0]) > count(w.begin(), w.end(), w[w.size()-1]))
            reverse(w.begin(), w.end());
        for(int i=0; i<b.size(); i++){
            for(int j=0; j<b[0].size(); j++){
                if(check(b, w, i, j, 0))
                    return true;
            }
        }
        return false;
    }

    bool check(vector<vector<char>>& b, string& w, int i, int j, int k){
        if(k == w.size())
            return true;
        if(i < 0 || i >= b.size() || j < 0 || j >= b[0].size() || b[i][j] != w[k]){
            return false;
        }
        char c = b[i][j];
        b[i][j] = '*';
        bool ok = check(b, w, i - 1, j, k + 1) || check(b, w, i, j + 1, k + 1) || check(b, w, i + 1, j, k + 1) || check(b, w, i, j - 1, k + 1);
        b[i][j] = c;
        return ok;
    }
};
