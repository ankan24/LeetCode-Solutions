class Solution {
    public boolean isValid(String s) {
        int len = s.length();
        boolean ans = true;

        while (s.contains("()") || s.contains("{}") || s.contains("[]")) {
            s = s.replace("()", "");
            s = s.replace("{}", "");
            s = s.replace("[]", "");
        }

        if (s.length() != 0) {
            ans = false;
        }
        return ans;
    }
}
