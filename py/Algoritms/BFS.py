def bfs(G,start, end):
    queue = [start]
    visited = set()
    visited.add(start)
    
    while queue:
        node = queue.pop(0)
        print(node)
        if node == end:
            return True
        for next in G[node] - visited:
            queue.append(next)
            visited.add(next)
    print(queue)
    return False

g = {'A': set(['B', 'C']),
     'B': set(['A', 'D', 'E']),
     'C': set(['A', 'F']),
     'D': set(['B']),
     'E': set(['B', 'F']),
     'F': set(['C', 'E'])}


print(bfs(g,'A', 'F'))