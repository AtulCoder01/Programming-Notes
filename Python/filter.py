l=[1,2,3,4,5,6,7,8]
#filter(function, sequence)
#p=filter(lambda x : x%2==0, l)
#or
def sqr(x):
	return x%2!=0
p=filter(sqr, l)
print (list(p))
