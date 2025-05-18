#include <iostream>
#include <vector>
//map 20*20 -------->
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
        arr.push_back(std::vector<char>());
        for(int j = 0; j < 20; j++) {
            arr[i].push_back('.');
        }
    }
    return arr;
}

// 1 5 9
// 7 3 2
// 0 4 6


void print(const std::vector<std::vector<char>>& arr) {
    
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}


void border(std::vector<std::vector<char>>& arr) {
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            if(i == 0 || i == 19 || j == 0 || j == 19)  {
                arr[i][j] = '#';
           }
        }
    }
}



int main() {
    std::vector<std::vector<char>> arr = create();
    border(arr);
    print(arr);
    return 0;
}
