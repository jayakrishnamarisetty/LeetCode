class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       int sum=0;
        int n=tickets.size();
        for(int i=0;i<n;i++){
            if(tickets[i] < tickets[k]){
                sum+=tickets[i];
            }
            else if (i<=k && tickets[i] >= tickets[k]) sum+=tickets[k];
            else sum+=tickets[k] - 1;
        }
        return sum;
        
    }
};