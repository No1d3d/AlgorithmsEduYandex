/*
TASK 5
Vasiliy took part in a dookie throwing competition. There were a lot of participants
and he did not remember the order of the participants and the place when it was his turn to throw.
He only remembered that the number of meters he threw the dookie ended with number 5,
one of the first three winning contestants took his turn right before Vasiliy,
and the participant that took his turn right after Vasiliy, could not throw further than him.
What is the highest place Vasiliy could have gotten in that competition?
*/
#include <iostream>
#include <vector>
#include <algorithm>

int HighestPlace(const int& count, const std::vector<int>& vec) {
    if (count <= 2) {
        return 0;
    }
    int res = 0;
    std::vector<int> matches;
    for (int i = 1; i < count - 1; i++) {
        if (vec[i] % 10 == 5) {
            matches.push_back(i);
        }
    }
    int best_place = count + 1;
    for (int index : matches) {
        if ((vec[index - 1] == *std::max_element(vec.begin(), vec.begin() + 3)) &&
            (vec[index] >= vec[index + 1])) {
            int place = 1;
            for (int i = 0; i < count; ++i) {
                if (vec[i] > vec[index] || (vec[i] == vec[index] && i < index)) {
                    ++place;
                }
            }
            best_place = std::min(best_place, place);
        }
    }
    return best_place;
}

int main() {
    std::vector<int> vec;
    vec = {};
    std::cout << HighestPlace(0, vec) << "\n";
    vec = {1};
    std::cout << HighestPlace(1, vec) << "\n";
    vec = {1, 5};
    std::cout << HighestPlace(2, vec) << "\n";
    vec = {10, 5, 1};
    std::cout << HighestPlace(3, vec) << "\n";
    vec = {10, 20, 15, 10, 30, 5, 1};
    std::cout << HighestPlace(7, vec) << "\n";
    vec = {15, 15, 10};
    std::cout << HighestPlace(3, vec) << "\n";
}