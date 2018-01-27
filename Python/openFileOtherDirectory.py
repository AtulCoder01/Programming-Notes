#open file in other directry
import os
d=os.getcwd()
d1=os.path.join(d, 'file')
fname=os.path.join(d1, 'atul.txt')
print (fname)

f=open(fname, "r")
for l in f:
	print(l, end="")
