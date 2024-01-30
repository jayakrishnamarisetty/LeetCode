class Solution {
    public int evalRPN(String[] tokens) {
        int[] rug = new int[tokens.length];
        int top = 0;
        for(String s : tokens) {
            char c = s.charAt(0);
            if(c=='+') {
                int b = rug[--top];
                int a = rug[--top];
                rug[top++] = a+b;
            } else if(c=='-' && s.length()==1) {
                int b = rug[--top];
                int a = rug[--top];
                rug[top++] = a-b;
            } else if(c=='*') {
                int b = rug[--top];
                int a = rug[--top];
                rug[top++] = a*b;
            } else if(c=='/') {
                int b = rug[--top];
                int a = rug[--top];
                rug[top++] = a/b;
            } else 
                rug[top++] = Integer.parseInt(s);
        }
        return rug[0];
    }
}