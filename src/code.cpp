#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int diff = left - right;
    return diff * diff;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 || bit_pos < 0) {
      return false;
    }
    int x = mask;
    for (int i = 0; i < bit_pos; i++) {
      x /= 2;
    }
    if (x % 2 != 0) {
      return true;
    }
    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left > middle && left > right) {
      return left;
    } else if (middle > left && middle > right) {
      return middle;
    } else {
      return right;
    }
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr && right != nullptr) {
      int c = *left;
      *left = *right;
      *right = c;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr == nullptr || length <= 0) {
      return 0;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr == nullptr || length <= 0) {
      return nullptr;
    }
    int* max = &arr[0];
    for (int i = 0; i < length; i++) {
      if (arr[i] > *max) {
        max = &arr[i];
      }
    }
    return max;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length <= 0) {
      return nullptr;
    }
    int* arr = new int[length];
    std::fill(&arr[0], &arr[length], init_value);
    return arr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in == nullptr or length <= 0) {
      return nullptr;
    }
    int* newArr = new int[length];
    std::copy(arr_in, arr_in + length, newArr);
    return newArr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
      return;
    } else if (length <= 0) {
      os << "Invalid argument: length\n";
      return;
    } else if (k <= 0) {
      os << "Invalid argument: k\n";
      return;
    }
    for (int i = 0; i < length; i += k) {
      os << arr[i] << "\t";
    }
  }

}  // namespace assignment
