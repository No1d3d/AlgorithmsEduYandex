/*
TASK 4

Given a text file, count unique words in it. A word is defined by a sequence of non-space symbols.
Words are separated by a single or several space symbols. Words that are located in the end of a "sentence"
or near the punctuation signs, should be read without the punctuation sign (.,;:!?\|/'"")
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <cctype>

std::string cleanWord(const std::string& word) {
    std::string cleaned;
    for (char c : word) {
        if (std::isalnum(static_cast<unsigned char>(c))) {
            cleaned += std::tolower(static_cast<unsigned char>(c));
        }
    }
    return cleaned;
}

int countUniqueWords(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return -1;
    }

    std::set<std::string> uniqueWords;
    std::string line;

    while (std::getline(file, line)) {
        std::istringstream stream(line);
        std::string word;
        while (stream >> word) {
            word = cleanWord(word);
            if (!word.empty()) {
                uniqueWords.insert(word);
            }
        }
    }

    file.close();
    return uniqueWords.size();
}

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    int uniquesCount = countUniqueWords(filename);
    if (uniquesCount != -1) {
        std::cout << "The number of unique words in the file is: " << uniquesCount << std::endl;
    }

    return 0;
}