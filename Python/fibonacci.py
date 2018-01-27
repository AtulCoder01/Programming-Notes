def fibonacci(n):
	n1=1
	n2=1
	i=0
	while (i < n):
		print n1
		temp=n2
		n2=n1+n2
		n1=temp
		i+=1

fibonacci(8)
		
