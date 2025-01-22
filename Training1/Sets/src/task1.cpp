/*
TASK 1
For a given list of integer numbers (0 <= size <= 100000), determine the number of unique numbers in it 
*/

#include <iostream>
#include <set>
#include <vector>
//#include <algorithm>

int main() {
    std::vector<int> vec;
    vec = {1,2,3,3,5};
    std::set<int> my_set(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << ": uniques = " << my_set.size() << "\n";
}