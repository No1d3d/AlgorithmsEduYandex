/*
TASK 2
For two given list of integer numbers (0 <= size of list 1 or list 2 <= 10000), determine the intersecting (similar) elements in them and put them out in the ascending order.
*/
#include <algorithm>
#include <iostream>
#include <set>

void Intersection(const std::set<int>& s1, const std::set<int>& s2) {
    std::set<int> res;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(res, res.begin()));
    std::cout << "Intersection of two sets: ";
    for (int i : res) {
        std::cout << i << " ";
    }
}

int main() {
    std::set<int> my_set1;
    std::set<int> my_set2;
    for (int i = 0; i < 10; i++) {
        my_set1.insert(i);
        if (i % 2 == 0) {
            my_set2.insert(i);
        }
    }
    Intersection(my_set1, my_set2);
    return 0;
}