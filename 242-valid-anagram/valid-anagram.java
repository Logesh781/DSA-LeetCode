class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()){
            return false;
        }

        char[] arr1 = new char[s.length()];
        char[] arr2 = new char[t.length()];

        for(int i=0; i<s.length(); i++){
            arr1[i] = s.charAt(i);
            arr2[i] = t.charAt(i);

        }

        Arrays.sort(arr1);
        Arrays.sort(arr2);
        if(Arrays.equals(arr1,arr2)) return true;
        return false;
        
        
    }
}