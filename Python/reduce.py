l=[1,2,3,4,5]
#reduce(binary_function, sequence)
#p=reduce(lambda x,y : x*y,l)
#or
def sqr(x,y):
	return x*y
p=reduce(sqr,l)
print p
