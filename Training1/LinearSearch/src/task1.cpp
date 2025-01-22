/* 
TASK 1 
Given a vector of integer values, output YES if it is strictly ascending, NO if not
*/

#include <iostream>
#include <vector>

bool VecIsAscending(const std::vector<int>& vec) {
    bool result = false;
    if (vec.empty() || vec.size() == 1) {
        return result;
    }
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i + 1] <= vec[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> vec;
    int num;
    while (true) {
        std::cin >> num;
        if (num == -999999) {
            break;
        }
        vec.push_back(num);
    }
    std::cout << (VecIsAscending(vec) == 1 ? "YES" : "NO");
}