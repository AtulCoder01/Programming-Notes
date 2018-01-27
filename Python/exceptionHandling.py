#Exception handling
x,y=11,0
try:
	z=x/y
	print 'value of z =',z
except ZeroDivisionError:
	print 'divide by zero'
