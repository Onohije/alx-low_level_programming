#!/usr/bin/python3
"""Module to calculate the perimeter of an island in a grid."""


def num_water_neighbors(grid, i, k):
    """Calculate the number of water neighbors adjacent to a cell in the grid."""

    num = 0

    if i <= 0 or not grid[i - 1][k]:
        num += 1
    if k <= 0 or not grid[i][k - 1]:
        num += 1
    if k >= len(grid[i]) - 1 or not grid[i][k + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][k]:
        num += 1

    return num


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (List[List[int]]): A list of list of integers representing the grid.

    Returns:
    int: The perimeter of the island.
    """

    perimeter = 0
    for i in range(len(grid)):
        for k in range(len(grid[i])):
            if grid[i][k]:
                perimeter += num_water_neighbors(grid, i, k)

    return perimeter
