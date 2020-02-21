#!/usr/bin/python3
"""perimeter module"""


def island_perimeter(grid):
    """function to find island perimeter"""
    count = 0
    edge = 0
    for i in range(len(grid) - 1):
        for j in range(len(grid[i]) - 1):
            if grid[i][j] == 1:
                count += 1
                if j < (len(grid[i]) -1) and i < (len(grid) - 1):
                    if grid[i][j] == 1 and grid[i][j + 1] == 1:
                        edge += 1
                    if grid[i][j] == 1 and grid[i + 1][j] == 1:
                        edge += 1
    count = count * 4
    edge = edge * 2
    perimeter = count - edge
    return perimeter
