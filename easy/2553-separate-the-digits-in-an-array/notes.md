2553 - Separate the Digits in an Array

Link: https://leetcode.com/problems/separate-the-digits-in-an-array/

## Idea

For each number in nums, I need to separate its digits and append them to the answer in the same order.

The easiest way is:

* take digits from right to left using % 10
* store them temporarily in another vector
* then read that temporary vector backwards to restore the original order

For example:

123

Using % 10 gives:

3, 2, 1

So I store those digits in temporary, then push them into solutionsVector from the back to the front:

1, 2, 3

## Notes

* % 10 extracts the last digit.
* /= 10 removes the last digit.
* The digits are extracted backwards, so temporary has to be read backwards.
* temporary.clear() is needed so each number starts with an empty temporary vector.
