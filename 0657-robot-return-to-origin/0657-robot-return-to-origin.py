class Solution:
    def judgeCircle(self, moves: str) -> bool:
        n = len(moves)
        U = 0
        D = 0
        L = 0
        R = 0
        for i in range(n):
            if moves[i] == 'U':
                U+=1
            elif moves[i] == 'D':
                D+=1
            elif moves[i] == 'L':
                L+=1
            else:
                R+=1
        if R==L and U==D:
            return True
        else:
            return False
        