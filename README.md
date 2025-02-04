# Pivot Index Finder in a Rotated Sorted Array (binary_Search)

## Description
This C++ program finds the pivot index in a rotated sorted array. The pivot is the index of the smallest element in the array, which indicates the point of rotation.

## How It Works
- The program uses a **modified binary search** approach to find the pivot efficiently.
- If the middle element is smaller than the last element, the pivot lies in the left half.
- Otherwise, the pivot lies in the right half.
- The search continues until the left (`l`) and right (`h`) pointers converge, identifying the pivot index.

## Code Implementation
```cpp
#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 7> s = {5, 6, 7, 1, 2, 3, 4};
    int l = 0, h = s.size() - 1;

    while (l < h) {
        int mid = l + (h - l) / 2;
        if (s[mid] < s[h]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << "The pivot index is " << l << " and the value at that index is: " << s[l];
    return 0;
}
```

## Example
### Input:
```cpp
array<int, 7> s = {5, 6, 7, 1, 2, 3, 4};
```
### Output:
```
The pivot index is 3 and the value at that index is: 1
```

## Complexity Analysis
- **Time Complexity:** `O(log N)`, as binary search reduces the problem size by half in each step.
- **Space Complexity:** `O(1)`, since no extra space is used.

## Usage
1. Compile the program using a C++ compiler:
   ```sh
   g++ pivot_finder.cpp -o pivot_finder
   ```
2. Run the executable:
   ```sh
   ./pivot_finder
   ```

## Notes
- The array should be a **rotated sorted array**.
- The program works for distinct elements only.

## Contributions
Feel free to fork, modify, and contribute to this project!

## License
This project is licensed under the MIT License.

