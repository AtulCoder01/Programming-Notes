#nested function
def f():
	x=10
	def g(a):	
		return a*a
	print ('x*x =',g(x))

f()
