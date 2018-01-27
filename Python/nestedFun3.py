#nested function
x=5
def f():
	x=10#nonlocal
	def g():
		global x 	
		return x*x
	print ('x*x =',g())

f()
print x
