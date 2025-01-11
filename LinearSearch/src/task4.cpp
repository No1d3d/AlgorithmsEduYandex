/*
TASK 4
In a given vector, put out the number of elements that are bigger than both their left and right neighbors
*/

#include <iostream>
#include <vector>

int CountBiggestSibling(const std::vector<int>& vec) {
    if (vec.size() <= 2) {
        return 0;
    }
    int i = 1, counter = 0;
    while (i <= vec.size() - 1) {
        if (i == vec.size() - 1) {
            break;
        }
        if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1]) {
            counter++;
            i += 2;
        } else if (vec[i] == vec[i + 1]) {
            i += 2;
        } else if (vec[i] > vec[i + 1]) {
            i += 2;
        } else {
            i++;
        }
    }
    return counter;
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
    std::cout << CountBiggestSibling(vec);
}