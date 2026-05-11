# 1861 - Rotating the Box

Link: https://leetcode.com/problems/rotating-the-box/

## Idea

The box is rotated 90 degrees clockwise. After the rotation, the stones (`#`) fall downward because of gravity until they hit:
- an obstacle (`*`)
- another stone (`#`)
- or the bottom of the box.

Instead of rotating first and simulating gravity later, I can simulate gravity in the original matrix by moving stones to the right. After a clockwise rotation, the original “right” direction becomes “down”.

For each row:
- I scan from right to left.
- I keep track of the next valid position where a stone can fall.
- Obstacles reset that position.
- Stones are moved as far right as possible inside their segment.

After gravity is simulated, I create a new matrix with dimensions `n x m` and rotate the box using:

`rotated[j][m - 1 - i] = boxGrid[i][j]`

## Complexity

Time: `O(m * n)`

Space: `O(m * n)`

## Notes

- Rotating first makes gravity simulation harder.
- Simulating gravity horizontally before rotation simplifies the problem.
- Obstacles split rows into independent sections.
