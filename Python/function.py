def greatest(a, b, c):
	greatest = -1
	if a>b:
		if a>c:
			greatest=a
		else:
			greatest=c
	elif b>c:
		greatest=b
	else:
		greatest=c
	return greatest
p=1
q=10
r=100
s=greatest(r, q, p)
print s,'is greates'
