class Solution {
    public int lengthOfLastWord(String s) {
        String str = "";
        int count = 0;
        s = s.trim();

        for(int i = s.length()-1;i>=0;i--){
            if(s.charAt(i) == ' '){
            break;
            }
            else{
             count++;
            }
        }
        return count;
    }
}
