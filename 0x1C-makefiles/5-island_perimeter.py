#!/usr/bin/python3
"""
This module calculates the perimeter of an island described in a grid.
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the grid.

    Args:
    - grid (list of list of integers): Represents the island grid.

    Returns:
    - int: Perimeter of the island.
    """
    perimeter = 0

    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Assuming it's land

                # Check neighboring cells
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract shared edge with upper neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract shared edge with left neighbor

    return perimeter

# Test case
if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
