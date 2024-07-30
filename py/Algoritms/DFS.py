def dfs(G, start, end, visited=None):
    if visited is None:
        visited = set()
    visited.add(start)
    print(start)
    if start == end: return True
    for next in G[start] - visited:
        if dfs(G, next, end, visited):  return True
        print(next)
    return False



g = {'A': set(['B', 'C']),
     'B': set(['A', 'D', 'E']),
     'C': set(['A', 'F']),
     'D': set(['B']),
     'E': set(['B', 'F']),
     'F': set(['C', 'E'])}


print(dfs(g, 'A', 'F'))