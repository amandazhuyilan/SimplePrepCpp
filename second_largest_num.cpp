// Question: Write a C++ program to find the second largest element in an array.

#include <iostream>
#include <vector>
#include <cassert>

int32_t find_largest_value_index(const std::vector<int32_t> &input_array) {
    int32_t largest_num = input_array[0];
    int32_t largest_index = 0;
    for (int32_t index = 0; index < input_array.size() ; index++) {
        if (input_array[index] > largest_num) {
            largest_num = input_array[index];
            largest_index = index;
        }
    }
    return largest_index;
}


int32_t find_second_largest_num(std::vector<int32_t> &input_array) {
    if (input_array.size() < 2) {
        throw std::invalid_argument("must at least have 2 elements in the array!");
    }
    // 1. find largest num in array
    int32_t largest_index = find_largest_value_index(input_array);

    // 2. find and remove largest in array
    input_array.erase(input_array.begin() + largest_index);

    if (input_array.size() < 2) {
        throw std::invalid_argument("No second largest element found");
    }

    // 3. find largest num in array
    int32_t second_largest_index = find_largest_value_index(input_array);

    // 4. return this value
    return input_array[second_largest_index]; 
}

void test_find_second_larget_num() {
    std::vector<int32_t> input_array_1 = {1, 2, 3};
    assert(find_second_largest_num(input_array_1) == 2);
    std::cout << "test 1 passed!" << std::endl;

    std::vector<int32_t> input_array_2 = {2, 1, 3};
    assert(find_second_largest_num(input_array_2) == 2);
    std::cout << "test 2 passed!" << std::endl;
}

int main() {
    test_find_second_larget_num();

    return 0;
}