// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         int m1[256]={0}, m2[256]={0}, n=s.size();

//         for(int i=0;i<n;i++){
//             if(m1[s[i]] != m2[t[i]])
//             return 0;
//             m1[s[i]]=i+1;
//             m2[t[i]]=i+1;
//         }
//         return 1;
//     }
// };

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>store;
        unordered_map<char,char>val;

        if(s.size()!=t.size()) return 0; 
        store[s[0]]=t[0];
        for(int i=1;i<s.size();i++){
            
            if(store.find(s[i])!=store.end()){
                if(store[s[i]]!=t[i]) return 0;
            }
            store[s[i]]=t[i];
        }
        val[t[0]]=s[0];
        for(int i=1;i<s.size();i++){
            
            if(val.find(t[i])!=val.end()){
                if(val[t[i]]!=s[i]) return 0;
            }
            val[t[i]]=s[i];
        }

        return 1;
    }
};