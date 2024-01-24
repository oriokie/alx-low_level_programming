#!usr/bin/python3
"""
Island Perimeter function
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island
    described in the grid

    """
    #initialize the perimeter variable to 0
    perimeter = 0

    #get the dimensions of the grid
    rows = len(grid)
    cols = len(grid[0])

    #loop through the grid
    for i in range(rows):
        for j in range(cols):
            #check if the current position is an island
            if grid[i][j] == 1:
                #check if the current position has a left neighbor
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                #check if the current position has a right neighbor
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                #check if the current position has a top neighbor
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                #check if the current position has a bottom neighbor
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    #return the perimeter
    return perimeter
