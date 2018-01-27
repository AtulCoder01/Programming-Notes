l=[1,2,3,4,5]
def sqr(x):
	return x*x

print ([sqr(x) for x in l])
#or
print (list(map(sqr, l)))
