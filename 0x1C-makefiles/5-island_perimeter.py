#!/usr/bin/python3
"""Modules"""


def island_perimeter(grid):
    """ISLAND"""
    g = grid
    w = 0
    h = 0

    for i, _ in enumerate(g):
        a = [0 for _ in range(len(g))]

        for j, __ in enumerate(_):
            a[i] = g[i][j] | a[i]

        h = sum(a)

    for i in range(len(g[0])):
        a = [0 for _ in range(len(g[0]))]

        for j in range(len(g)):
            a[i] = g[j][i] | a[i]

        w = sum(a)

    return (w + h) * 2 
