#!/usr/bin/python3
""" Fuction that returns the parameter of an island"""

def count_water_neighbors(grid, row, col):
    """ this returns the number of water neighbors a cell has in a grid."""

    count = 0
    height = len(grid)
    width = len(grid[0])

    if row > 0 and not grid[row - 1][col]:
        count += 1
    if col > 0 and not grid[row][col - 1]:
        count += 1
    if col < width - 1 and not grid[row][col + 1]:
        count += 1
    if row < height - 1 and not grid[row + 1][col]:
        count += 1

    return count


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col]:
                perimeter += 4 - count_water_neighbors(grid, row, col)

    return perimeter
