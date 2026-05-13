# 88 - Merge Sorted Array

Link: https://leetcode.com/problems/merge-sorted-array/

## Idea

`nums1` already has enough space to store all elements from both arrays.

The approach is:

* copy every element from `nums2` into the empty positions at the end of `nums1`
* then sort the entire array using Bubble Sort

First loop:

```cpp
nums1[m + j] = nums2[j];
```

This places all elements from `nums2` after the valid elements already inside `nums1`.

After that, `nums1` contains all numbers, but they are not necessarily ordered.

So I use Bubble Sort:

* compare adjacent elements
* if the left element is larger, swap them
* repeat until the whole vector is sorted

---

Example:

```txt
nums1 = [1,2,3,0,0,0]
m = 3

nums2 = [2,5,6]
n = 3
```

After copying:

```txt
[1,2,3,2,5,6]
```

Bubble Sort rearranges the elements into:

```txt
[1,2,2,3,5,6]
```

## Complexity

Copying elements:

```txt
O(n)
```

Bubble Sort:

```txt
O((m+n)^2)
```

Total:

```txt
O((m+n)^2)
```

Space:

```txt
O(1)
```

because the sorting is done directly inside `nums1`.

## Notes

* `nums1[m + j]` starts writing exactly after the valid elements already in `nums1`.
* Bubble Sort compares adjacent elements.
* `nums1.size() - 1 - i` avoids revisiting the largest elements that are already sorted at the end.
* `temp` is used to swap two elements.
* The algorithm works correctly, although it is not the most optimal solution for this problem.
