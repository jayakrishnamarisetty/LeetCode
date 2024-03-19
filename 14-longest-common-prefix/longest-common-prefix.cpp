class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string rug="";
        sort(v.begin(),v.end());
        int n=v.size();
        string frist=v[0],last=v[n-1];
        for(int i=0;i<min(frist.size(),last.size());i++){
            if(frist[i]!=last[i]){
                return rug;
            }
            rug+=frist[i];
        }
        return rug;
    }
};