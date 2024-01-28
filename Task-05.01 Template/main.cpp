//
//  main.cpp
//  Task-05.01 Template
//
//  Created by Маргарет  on 28.01.2024.
//

#include <iostream>
#include <cmath>


template <class T>
T squaring (T value) {
    return pow(value, 2);
}

template <>
std::vector<int> squaring(std::vector<int> vec) {
    
    for (int i : vec) {
        pow(i, 2);
    }
    return vec;
}

int main(int argc, const char * argv[]) {
    
    std::cout << "[IN]: ";
    int num = 4;
    std::cout << num;
    std::cout << "\n";
    std::cout << "[OUT]: " << squaring<int>(num) << "\n";

    std::cout << "[IN]: ";
    
    std::vector<int> vec{-1, 4, 8};
    
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    
    std::cout << "[OUT]: ";
    
    for (int i : squaring<std::vector<int>>(vec)) {
        std::cout << i << " ";
    }
    
    return 0;
}
