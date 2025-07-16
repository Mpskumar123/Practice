Time and Space complexity

| Function                   | Description                               | Time Complexity                | Space Complexity       |
| -------------------------- | ----------------------------------------- | ------------------------------ | ---------------------- |
| `push_back()`              | Adds an element at the end                | **O(1)** *(amortized)*         | O(1)                   |
| `pop_back()`               | Removes the last element                  | **O(1)**                       | O(1)                   |
| `insert(pos, val)`         | Inserts element at `pos`                  | **O(n)**                       | O(n)                   |
| `erase(pos)`               | Removes element at `pos`                  | **O(n)**                       | O(n)                   |
| `begin()`                  | Returns iterator to first element         | **O(1)**                       | O(1)                   |
| `end()`                    | Returns iterator past last element        | **O(1)**                       | O(1)                   |
| `size()`                   | Returns number of elements                | **O(1)**                       | O(1)                   |
| `swap(v2)`                 | Swaps content with another vector         | **O(1)**                       | O(1)                   |
| `sort()` (via `std::sort`) | Sorts vector elements (ascending)         | **O(n log n)**                 | O(log n) *(auxiliary)* |
| `empty()`                  | Checks if vector is empty                 | **O(1)**                       | O(1)                   |
| `clear()`                  | Removes all elements                      | **O(n)** *(calls destructors)* | O(1)                   |
| `resize(n)`                | Resizes to `n` elements                   | **O(n)**                       | O(n)                   |
| `at(i)`                    | Access element with bounds checking       | **O(1)**                       | O(1)                   |
| `front()`                  | Returns first element                     | **O(1)**                       | O(1)                   |
| `back()`                   | Returns last element                      | **O(1)**                       | O(1)                   |
| `assign(n, val)`           | Replaces content with `n` copies of `val` | **O(n)**                       | O(n)                   |

