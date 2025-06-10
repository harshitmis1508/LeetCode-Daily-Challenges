class Solution {
public:
    int maxDifference(string s) {
        
        int maxi = INT_MIN;
        int mini = INT_MAX;

        unordered_map<char,int> freq;
        for(auto it: s){
            freq[it]++;
        }

        for(auto &[id,ocrr]: freq)
        {
            if(ocrr%2==1){
                maxi = max(maxi,ocrr);
            }else{
                mini = min(mini,ocrr);
            }
        }

        return maxi-mini;
    }
};