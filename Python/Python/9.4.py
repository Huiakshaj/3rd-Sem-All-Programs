# 9.4. Given two strings s1 and s2 consisting of lowercase characters, check whether two given strings are an anagram of each other or not.

def are_anagrams(s1, s2):
    return sorted(s1) == sorted(s2)
s1 = input("Enter the first string: ").strip()
s2 = input("Enter the second string: ").strip()
result = are_anagrams(s1, s2)
print("Are the strings anagrams?", result)
