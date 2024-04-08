class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> rug(2,0);
        for(int i : students){
            rug[i]++;
        }
        int veda=sandwiches.size();
        for(int j : sandwiches){
            if(rug[j]==0) break;
            if(veda == 0) break;
            rug[j]--;
            veda--;
        }
        return veda;
        
    }
};