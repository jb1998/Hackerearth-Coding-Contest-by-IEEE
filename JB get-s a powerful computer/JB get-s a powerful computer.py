'''
by:  https://github.com/goyal-aman
'''
t = int(input()) #test cases
for _ in range(t):
    N = int(input())
    stipend = list(map(int, input().split()))
    
    final_stipend = [0]*N
    final_stipend[0] = stipend[0]
    final_stipend[1] = max(stipend[0], stipend[1])


    for i in range(2,N):
        final_stipend[i] = max(final_stipend[i-1], stipend[i] + final_stipend[i-2])

    

    print(final_stipend[N-1])
