class Solution {
public:
    string makeGood(string s) {
        stack<char> rug;
        for(char c: s){
            if(!rug.empty() && abs(c-rug.top())==32){
                rug.pop();
            }
            else{
                rug.push(c);
            }
        }
        string veda;
        while(!rug.empty()){
            veda=rug.top()+veda;
            rug.pop();
        }
        return veda;
    }
};