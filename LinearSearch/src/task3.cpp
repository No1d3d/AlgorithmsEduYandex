/*
TASK 3
You recieve a number n, a length of an array, then n elements of an array, and then a number f.
In the given array of length n, find a value closest to number f
*/

#include <iostream>
#include <vector>

int FindClosest(const std::vector<int>& array, int find, int len) {
    if (len == 1) {
        return array[0];
    }
    int res;
    for (int i = 0; i < len; i += 1) {
        if (i == 0) {
            res = array[i];
        }
        if (abs(array[i] - find) == 0) {
            res = array[i];
            break;
        } else if (abs(array[i] - find) < abs(res - find)) {
            res = array[i];
        }
    }
    return res;
}

int main() {
    int n = 0;
    std::cin >> n;
    if (n < 1) {
        std::cout << "empty array";
    } else {
        std::vector<int> arr;
        int f = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> f;
            arr.push_back(f);
        }
        std::cin >> f;
        std::cout << FindClosest(arr, f, n);
    }
    return 0;
}