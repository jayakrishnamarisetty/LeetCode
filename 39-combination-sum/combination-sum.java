class Solution {
    public void veda(int[] r, int ind, List<Integer> ans, List<List<Integer>> result, int t, int size, int sum) {
        if (sum == t) {
            result.add(new ArrayList<>(ans));
            return;
        }
        if (ind >= size || sum > t) {
            return;
        }
        ans.add(r[ind]);
        veda(r, ind, ans, result, t, size, sum + r[ind]);
        ans.remove(ans.size() - 1);
        int j = ind + 1;
        while (j+1 < size && r[j] == r[j + 1])
            j += 1;
        veda(r, j, ans, result, t, size, sum);
    }

    public List<List<Integer>> combinationSum(int[] rug, int B) {
        Arrays.sort(rug);
        List<Integer> ans = new ArrayList<>();
        List<List<Integer>> result = new ArrayList<>();
        veda(rug, 0, ans, result, B, rug.length, 0);
        return result;
    }

}