/* 
TASK 2
Given a vector of integer values, output the type of sequence it belongs to
CONSTANT - all values of the vector are equal
ASCENDING - all values are ascending
WEAKLY ASCENDING - all values are ascending or equal to the previous ones
DESCENDING - all values are descending
WEAKLY DESCENDING - all values are descending or equal to the previous ones
RANDOM - the values of the vector do not fit to either one of the previous patterns
*/

#include <iostream>
#include <vector>

// enum VecType {
//     CONSTANT = 0,
//     ASCENDING = 1,
//     WEAKLY_ASCENDING = 2,
//     DESCENDING = 3,
//     WEAKLY_DESCENDING = 4,
//     RANDOM = 5
// };
enum VecType {
    CONSTANT,
    ASCENDING,
    WEAKLY_ASCENDING,
    DESCENDING,
    WEAKLY_DESCENDING,
    RANDOM
};

std::string StringEnum(const VecType& vecType) {
    switch (vecType) {
        case CONSTANT: return "CONSTANT";
        case ASCENDING: return "ASCENDING";
        case WEAKLY_ASCENDING: return "WEAKLY_ASCENDING";
        case DESCENDING: return "DESCENDING";
        case WEAKLY_DESCENDING: return "WEAKLY_DESCENDING";
        case RANDOM: return "RANDOM";
    }
}

void TypeOfSequence(const std::vector<int>& vec) {
    if (vec.empty()) {
        std::cout << "NONE";
    } else {
        VecType res = CONSTANT;
        int i = 0;
        while (true) {
            if (i == vec.size() - 1) {
                break;
            }
            if ((res == ASCENDING && vec[i + 1] < vec[i]) || (res == DESCENDING && vec[i + 1] > vec[i])) {
                res = RANDOM;
                break;
            }
            if (vec[i + 1] > vec[i] && (i == 0 || res == ASCENDING)) {
                res = ASCENDING;
            } else if (res == ASCENDING && vec[i + 1] == vec[i]) {
                res = WEAKLY_ASCENDING;
            } else if (vec[i + 1] < vec[i] && (i == 0 || res == DESCENDING)) {
                res = DESCENDING;
            } else if (res == DESCENDING && vec[i + 1] == vec[i]) {
                res = WEAKLY_DESCENDING;
            } else if (res == CONSTANT && vec[i + 1] == vec[i]) {
                res = CONSTANT;
            }
            i++;
        }
        std::cout << StringEnum(res);
    }
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
    TypeOfSequence(vec);
}