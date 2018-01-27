class HelloWorld:
	def __init__(self):#contracter
		self.i=10
		print "Hello"
	
	def print_i(self):
		print 'i =',self.i

obj=HelloWorld() 
obj.print_i()
