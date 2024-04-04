class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int rug_max=0;
        for(char c: s){
            if(c =='('){
                count++;
                if(rug_max < count) rug_max=count;
            }
            else if(c==')') count--;
        }
        return rug_max;

    }
};