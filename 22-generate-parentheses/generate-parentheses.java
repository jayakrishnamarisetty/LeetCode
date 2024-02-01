class Solution {
    public static void gp(int n, int left, int right, String s, List<String> list){
        if(s.length()==2*n){
            list.add(s);
            return;
        }
        if(left<n) gp(n,left+1,right,s+"(",list);
        if(right<left) gp(n,left,right+1,s+")",list);
    }
    public List<String> generateParenthesis(int n) {
        
        List<String> list = new ArrayList<>();
        String s = "";
        gp(n,0,0,s,list);
        return list;
    }
}