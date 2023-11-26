#!/usr/bin/python3
"""Modules"""


def island_perimeter(grid):
    """ISLAND"""
    g = grid

    if g in {[], [[]]}:
        return 0

    w = [0 for _ in range(len(g[0]))]
    h = [0 for _ in range(len(g))]

    for i in range(len(g)):
        for j in range(len(g[0])):
            h[i] = h[i] | g[i][j]

    for i in range(len(g[0])):
        for j in range(len(g)):
            w[i] = w[i] | g[j][i]

    return (sum(w) + sum(h)) * 2
