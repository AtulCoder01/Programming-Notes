A=['a', 'b']
C=[1,2]
B=[(x+y) for x in A for y in A]
D=[(x,y) for x in A for y in C]
print B
print D
