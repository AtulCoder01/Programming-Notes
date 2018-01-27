def sqr(x):
	return x*x

l=[1,2,3,4]
print (list(map(sqr, l)))
#or
print list(map(lambda x : x*x, l))
