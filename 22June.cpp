class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        vector<string> res;
        int n = s.size();
        int i = 0;
        while(i<n){
            string grp = "";
            for(int j=0;j<k;j++)
            {
                if(i<n){
                    grp += s[i++];
                }else{
                    grp += fill;
                }
            }
            res.push_back(grp);
        }
        return res;
    }
};