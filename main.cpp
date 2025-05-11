#include <iostream>
#include <vector>
//map 20*20
//target
//tank
//tank move
//process keyboard
//hit
//kill
//exit



std::vector<std::vector<char>> create() {
    std::vector<std::vector<char>> arr = {};
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            // arr[i][j] = '.'; bug
        }
    }
    return arr;
}

int main() {
    std::vector<std::vector<char>> arr = create();
    std::cout << "Hello world" << std::endl;

    return 0;
}
