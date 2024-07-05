public class AnagramCheck {

    public static boolean isAnagram(String str1, String str2) {
        if (str1.length() != str2.length()) {
            System.out.println("Not a valid anagram");
            return false;
        }

        int[] cnt = new int[26];

        for (int i=0; i<str1.length(); i++) {
            cnt[str1.charAt(i)-'a']++;
        }

        for (int i=0; i<str2.length(); i++) {
            if (cnt[str2.charAt(i) - 'a'] == 0) {
                System.out.println("Not a valid anagram");
                return false;
            }
            cnt[str2.charAt(i)-'a']--;
        }

        System.out.println("Valid anagram");
        return true;
    }

    public static void main(String[] args) {
        String str1 = "anagram";
        String str2 = "nagaram";
        isAnagram(str1, str2);
    }
}
