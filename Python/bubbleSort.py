l=[8, 2, 1, 4]
print 'length =',len(l)
print 'Before Sorting'
print l
i=0
while (i < len(l)):
	j=0
	while(j < i):
		if l[i] < l[j]:
			temp=l[i]
			l[i]=l[j]
			l[j]=temp
		j+=1
	i+=1

print "After Sorting"
print l
			
