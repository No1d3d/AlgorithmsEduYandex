/*
Task 9
You need to put out a MINESWEEPER game field. You are given 3 numbers:
the number of rows, the number of columns and the number of mines on a field.
if the number of mines is not 0, you are also given the coordinates of each mine on the field.
You should only output a field for the game of the given configuration.

THE VALUES ARE GIVEN IN THE RIGHT WAY, YOU DO NOT NEED TO PROOF CHECK VALUES!!!
*/

#include <iostream>
#include <vector>

void OutputField(const std::vector<std::vector<int>>& f) {
    for (int i = 0; i < f.size(); i++) {
        for (int j = 0; j < f[i].size(); j++) {
            if (f[i][j] == -1) {
                std::cout << "* ";
            } else {
                std::cout << f[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
}

void ChangeField(std::vector<std::vector<int>>& f, int x, int y) {
    for (int i = -1; i < 2; i++) {
        for (int j = -1; j < 2; j++) {
            if (y - 1 + i >= 0 && y - 1 + i <= f.size() && x - 1 + j >= 0 && x - 1 + j <= f[0].size()) {
                if (f[y - 1 + i][x - 1 + j] != -1) {
                    f[y - 1 + i][x - 1 + j]++;
                }
            }
        }
    }
}

int main() {
    int r, c, m;
    std::cin >> r >> c >> m;
    std::vector<std::vector<int>> field;
    for (int i = 0; i < r; i++) {
        std::vector<int> cur_row;
        for (int j = 0; j < c; j++) {
            cur_row.push_back(0);
        }
        field.push_back(cur_row);
    }
    // create a field and init with 0s
    // if mines is more or equal 1, enter mine coordinates and put them on field
    if (m > 0) {
        for (int mine_count = 0; mine_count < m; mine_count++) {
            int x, y;
            std::cin >> y >> x;
            field[y-1][x-1] = -1;
            ChangeField(field, x, y);
        }
    }
    OutputField(field);
    // for each coordinate around mines, set value of field to++
    // output field
}