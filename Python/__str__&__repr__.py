# __str__ & __repr__

class A:
	def __init__(self):
		self.val=10
	def __str__(self):
		return 'class A: __self__'
	#def __repr__(self):
	#	return 'class A : __repr__'
	__repr__=__str__#memeber function assign
a=A()
print (a)
print (repr(a))#builtin function
