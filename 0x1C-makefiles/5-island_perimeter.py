#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """Return the perimiter of an island.
        The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    
    isLands = 0
    nghbrs = 0
    grd_len = len(grid)
    grd0_len = len(grid[0])

    for i in range(grd_len):
        for j in range(grd0_len):
            if grid[i][j] == 1:
                isLands += 1
                if i < grd_len-1 and grid[i+1][j] == 1:
                    nghbrs += 1
                if j < grd0_len-1 and grid[i][j+1] == 1:
                    nghbrs += 1
    return 4*isLands - 2*nghbrs

