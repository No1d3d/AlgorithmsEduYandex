/*
TASK 3

Anya and Borya love to play multi-colored cubes, and each of them has its own set, and in
each set all the cubes are different in color. One day, the children wondered how much
There are colors such that cubes of each color are present in both sets. To do this,
they numbered all the colors with random numbers. That's when their enthusiasm ran out, so you're
invited to help them with the rest. A number of any color is an integer between 0 and 10.

Input format:
In the first line of the input file, the numbers N and M are written - the number of cubes for Anya and Borya
, respectively. In the next N lines, the color numbers of Anya's cubes are set. In the last M
lines are the color numbers of the Bori cubes.

Output format:
Print first the number and then the ascending numbers of colors such
that cubes of each color are in both sets, then the number and
ascending numbers of the remaining colors for Anya, then the number and
ascending numbers of the remaining colors for Borya.
*/

#include <set>
#include <iostream>
#include <algorithm>

void CubesOfChildren(std::set<int>& s1, std::set<int>& s2) {
    std::set<int> res;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(res, res.begin()));
    std::cout << res.size() << "\n";
    for (int i : res) {
        std::cout << i << " ";
        s1.erase(i);
        s2.erase(i);
    }
    std::cout << "\n" << s1.size() << "\n";
    for (int i : s1) {
        std::cout << i << " ";
    }
    std::cout << "\n" << s2.size() << "\n";
    for (int i : s2) {
        std::cout << i << " ";
    }
}

int main() {
    std::set<int> set_a;
    std::set<int> set_b;
    int n, m, k;
    std::cin >> n >> m;
    for (int i = 0; i < n; i++) {
        std::cin >> k;
        set_a.insert(k);
    }
    for (int i = 0; i < m; i++) {
        std::cin >> k;
        set_b.insert(k);
    }
    CubesOfChildren(set_a, set_b);

}