#include <gtest/gtest.h>
#include "countingSort.h"

TEST(CountingSortTest, HandlesSortedInput) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(countingSort(input), expected);
}

TEST(CountingSortTest, HandlesReverseSortedInput) {
    std::vector<int> input = {5, 4, 3, 2, 1};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(countingSort(input), expected);
}

TEST(CountingSortTest, HandlesUnsortedInput) {
    std::vector<int> input = {3, 6, 4, 1, 2};
    std::vector<int> expected = {1, 2, 3, 4, 6};
    EXPECT_EQ(countingSort(input), expected);
}

TEST(CountingSortTest, HandlesEmptyInput) {
    std::vector<int> input = {};
    std::vector<int> expected = {};
    EXPECT_EQ(countingSort(input), expected);
}