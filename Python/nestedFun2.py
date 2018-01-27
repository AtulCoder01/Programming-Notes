#nested function
def f():
	x=10
	def g():	
		return x*x
	print ('x*x =',g())

f()
