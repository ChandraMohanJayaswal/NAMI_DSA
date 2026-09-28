# Expression Evaluation:
    https://www.geeksforgeeks.org/dsa/dsa-tutorial-learn-data-structures-and-algorithms/
    https://www.geeksforgeeks.org/dsa/introduction-to-stack-data-structure-and-algorithm-tutorials/
    https://www.geeksforgeeks.org/dsa/reverse-a-stack/
    https://www.geeksforgeeks.org/dsa/sort-a-stack-using-recursion/
    https://www.geeksforgeeks.org/dsa/check-for-balanced-parentheses-in-an-expression/
    https://www.geeksforgeeks.org/dsa/evaluation-of-postfix-expression/
    https://www.geeksforgeeks.org/dsa/expression-evaluation/
    https://www.geeksforgeeks.org/dsa/convert-infix-expression-to-postfix-expression/

# Graphs:
    https://www.geeksforgeeks.org/dsa/graph-data-structure-and-algorithms/ 
    
    Representation of Graph: 
        https://www.geeksforgeeks.org/dsa/graph-and-its-representations/
        
    Rules to Create Adjacency Matrix of a Graph
        Create an n x n 2d vector named matrix, where n is the number of vertices, with all entries initialized to 0.
        For an undirected graph, set both matrix[i][j] and matrix[j][i] to 1 if there is an edge between vertices i and j.
        For a directed graph, set matrix[i][j] to 1 if there is an edge from vertex i to vertex j.
        For a weighted graph, set matrix[i][j] to the weight of the edge between vertices i and j.
        If there is a self-loop on vertex i, set matrix[i][i] to 1 (or the weight if weighted).
        
    Rules to Create Adjacency List of a Graph
        Create a list of n elements, where n is the number of vertices.
        For an undirected graph, add vertex j to the list of vertex i and add vertex i to the list of vertex j if there is an edge between i and j.
        For a directed graph, add vertex j to the list of vertex i if there is an edge from vertex i to vertex j.
        For a weighted graph, add a tuple (j, weight) to the list of vertex i to represent an edge from i to j with the given weight.
        If there is a self-loop on vertex i, add i to the list of vertex i (or (i, weight) if weighted).
        

    Breadth First Search or BFS for a Graph
        https://www.geeksforgeeks.org/dsa/breadth-first-search-or-bfs-for-a-graph/
        
        Breadth First Search (BFS) is a graph traversal algorithm that starts from a source node and explores the graph level by level. First, it visits all nodes directly adjacent to the source. Then, it moves on to visit the adjacent nodes of those nodes, and this process continues until all reachable nodes are visited.
        
        - BFS is different from DFS in a way that closest vertices are visited before others. We mainly traverse vertices level by level.
        - Popular graph algorithms like Dijkstra's shortest path, Kahn's Algorithm, and Prim's algorithm are based on BFS.
        - BFS itself can be used to detect cycle in a directed and undirected graph, find shortest path in an unweighted graph and many more problems.
        
    Depth First Search or DFS for a Graph
        https://www.geeksforgeeks.org/dsa/depth-first-search-or-dfs-for-a-graph/
        
        In Depth First Search (or DFS) for a graph, we traverse all adjacent vertices one by one. When we traverse an adjacent vertex, we completely finish the traversal of all vertices reachable through that adjacent vertex. This is similar to Preorder Traversal of Binary Tree, where we first completely traverse the left subtree and then move to the right subtree. The key difference is that, unlike trees, graphs may contain cycles (a node may be visited more than once). To avoid processing a node multiple times, we use a boolean visited array.
        
        Note: There can be multiple DFS traversals of a graph according to the order in which we pick adjacent vertices. Here we pick vertices as per the insertion order.
        
    Dijkstra's Algorithm
        https://www.geeksforgeeks.org/dsa/dijkstras-shortest-path-algorithm-greedy-algo-7/
    
