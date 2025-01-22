/*
TASK 1
You recieve a number N, representing the number of pairs of tokens you are going to recieve.
Then you recieve N pairs (the pair consists of two DIFFERENT strings, 
which are then assigned to each other as synonyms) of tokens, 
and then a single word. Output a synonym for this word.
*/
#include <iostream>
#include <map>

std::string FindSynonym(const std::map<std::string, std::string>& pairs, const std::string& word) {
    for (auto pair : pairs) {
        if (pair.first == word) {
            return pair.second;
        } else if (pair.second == word) {
            return pair.first;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::map<std::string, std::string> pairs;
    std::string w1, w2;
    for (int i = 0; i < n; i++) {
        std::cin >> w1 >> w2;
    }
    std::cin >> w1;
    std::cout << FindSynonym(pairs, w1);
}