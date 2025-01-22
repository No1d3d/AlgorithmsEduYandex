/*
TASK 6
Given two strings consisting of only CAPITAL ENGLISH LETTERS, determine the number of pairs (with duplicates) from string 2 that can be found in string 1.

Example:
    ABBACAB
    BCABB

Output: 4

pairs in string 1: AB BB BA AC CA AB
pairs in string 2: BC CA AB BB

    picking out pairs from s2, we can see that there is no BC in s1, one CA in s1, two AB in s1, one BB in s1.
    0 + 1 + 2 + 1 = 4;
*/

#include <iostream>
#include <algorithm>
#include <set>

void HowManyPairsMatch(const std::string& s1, const std::string& s2) {
    std::multiset<std::string> set1;
    std::string str;
    for (int i = 0; i < s1.size()-1; i++) {
        str = "";
        str += s1[i];
        str += s1[i + 1];
        set1.insert(str);
    }
    std::multiset<std::string> set2;
    for (int i = 0; i < s2.size()-1; i++) {
        str = "";
        str += s2[i];
        str += s2[i + 1];
        set2.insert(str);
    }
    int counter = 0;
    std::multiset<std::string>::iterator itr_set1;
    std::multiset<std::string>::iterator itr_set2;
    for (itr_set1 = set1.begin(); itr_set1 != set1.end(); itr_set1++) {
        for (itr_set2 = set2.begin(); itr_set2 != set2.end(); itr_set2++) {
            if (*itr_set1 == *itr_set2) {
                counter++;
            }
        }
    }
    std::cout << counter;
}

int main() {
    std::string s1, s2;
    std::cin >> s1;
    std::cin >> s2;
    HowManyPairsMatch(s1, s2);
    return 0;
}
