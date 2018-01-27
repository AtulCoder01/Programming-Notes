#nested function
x=5#global
def f():
	x=10#nonlocal
	def g():
		nonlocal x
		x=15#local
		print ('local x =',x)
	g()
	print ('nonlocal x =',x)

f()
print ('global x=',x)
