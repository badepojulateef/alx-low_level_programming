def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.
    Each 1 cell in the grid represents a land zone, and each 0
    cell represents a water zone.
    The island is completely surrounded by water and
    there is only one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).

    Args:
    - grid: A list of list of integers representing the grid.

    Returns:
    - The perimeter of the island as an integer.
    """
    if not grid:
        return 0

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    # Loop through each cell in the grid
    for row in range(rows):
        for col in range(cols):
            # If the cell is land, add 4 to the perimeter count
            if grid[row][col] == 1:
                perimeter += 4

                # If the cell to the left is also land,
                # subtract 2 from the perimeter count
                if col > 0 and grid[row][col-1] == 1:
                    perimeter -= 2

                # If the cell above is also land,
                # subtract 2 from the perimeter count
                if row > 0 and grid[row-1][col] == 1:
                    perimeter -= 2

    return perimeter
