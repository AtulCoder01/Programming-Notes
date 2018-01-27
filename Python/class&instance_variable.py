class HelloWorld:
	name="learner"
	def __init__(self, i):#constractor
		self.i=i
	
	def printer(self):
		print self.i, self.name

obj1=HelloWorld(10)
obj2=HelloWorld(20)
obj1.printer()
obj2.printer()
HelloWorld.name='python'
obj1.printer()
obj2.printer()
