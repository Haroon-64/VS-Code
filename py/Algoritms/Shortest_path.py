def Dijkstra(graph, start):
    visited = [False] * len(graph)
    distance = {i: float('inf') for i in graph}
    distance[start] = 0
    keys = list(distance.keys())
    print(keys)
    for i in range(len(distance)):
        minD = float('inf')
        u = None  
        for j in range(len(distance)):
            if not visited[j] and distance[keys[j]] < minD:
                minD = distance[keys[j]]
                u = keys[j]
        visited[keys.index(u)] = True  
        for v in graph[u]:
            if not visited[keys.index(v)] and distance[u] + graph[u][v] < distance[v]:
                distance[v] = distance[u] + graph[u][v]
    return distance

graph = {
    'a': {'b': 6, 'c': 2},
    'b': {'a': 6, 'd': 1, 'e': 5},
    'c': {'a': 2, 'd': 2},
    'd': {'b': 1, 'c': 2, 'e': 1},
    'e': {'b': 5, 'd': 1}
}

print(Dijkstra(graph, 'a'))
