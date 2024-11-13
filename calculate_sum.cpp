// Calculate the Sum of an Array

#include <iostream>
#include <vector>
#include <cassert>

int32_t calculate_sum(const std::vector<int32_t>& input) {
    int32_t sum = 0;
    for (int32_t num: input) {
        sum += num;
    }

    return sum;
}

void testCalculateSum() {
    std::vector<int32_t> arr1 = {1, 2, 3};
    assert(calculate_sum(arr1) == 6);
    std::cout << "test 1 passed" << std::endl;

    std::vector<int32_t> arr2 = {0, 1};
    assert(calculate_sum(arr2) == 1);
    std::cout << "test 2 passed" << std::endl;
}


int main() {
    testCalculateSum();
    return 0;
}