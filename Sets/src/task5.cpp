/*
TASK 5
Give 3 digits (0 <= each number <= 9) and number n (1 <= n <= 10000),
determine the number of digits that need to be added to the first three input digits
to be able to output (replicate) number n.

Example 1:
INPUT:
    1 2 3
    1223
OUTPUT:
    0 (as one can create number 1223 with 1, 2 and 3)


Example 2:
INPUT:
    1 4 0 
    1223
OUTPUT:
    2 (as digits 2 and 3 need to be present in the digits set to be able to output 1223)
*/

#include <iostream>
#include <set>
#include <algorithm>

void CountNewDigitsForNumber(std::set<int>& s1, std::set<int>& s2) {
    std::set<int> res;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(res, res.begin()));
    for (int i : res) {
        s2.erase(i);
    }
    std::cout << s2.size();
}

int main() {
    std::set<int> digits;
    int n;
    for (int i = 0; i < 3; i++) {
        std::cin >> n;
        digits.insert(n);
    }
    std::cin >> n;
    std::set<int> number;

    while (n != 0) {
        number.insert(n % 10);
        n /= 10;
    }
    CountNewDigitsForNumber(digits, number);
}