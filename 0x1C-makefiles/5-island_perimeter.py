#!/usr/bin/python3
"""Modules"""

def island_perimeter(grid):
    g = grid
    w = []
    h = []

    for _ in grid:
        w.append(sum(_))

    for i in range(len(g[0])):
        a = []
        for j in range(len(g)):
            a.append(g[j][i])
        
        h.append(sum(a))

    return (max(w) + max(h)) * 2

