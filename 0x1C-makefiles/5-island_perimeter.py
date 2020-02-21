#!/usr/bin/python3
"""perimeter module"""


def island_perimeter(grid):
    """function to find island perimeter"""
    count = 0
    edge = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += 1
                if j > 0 and j + 1 < len(grid[i]) and grid[i][j + 1] == 1:
                    edge += 1
                if i > 0 and i + 1 < len(grid) and grid[i + 1][j] == 1:
                    edge += 1
    
    perimeter = (count * 4) - (edge * 2)
    return perimeter
