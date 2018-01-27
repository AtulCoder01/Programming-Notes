#bank account
'''class Customer:
	def __init__(self, name):
		self.name=name
	def set_balance(self, b):
		self.balance=b
	
	def get_name(self):
		return self.name
	def get_balance(self):
		return self.balance

c1=Customer('A')
c2=Customer('B')
c1.set_balance(100)
c2.set_balance(200)
print (c1.get_name(),c1.get_balance())
print (c2.get_name(),c2.get_balance())'''
class Customer:
	def __init__(self, name,b):
		self.name=name
		self.balance=b
	def get_name(self):
		return self.name
	def get_balance(self):
		return self.balance

c1=Customer('A',100)
c2=Customer('B',200)
print (c1.get_name(),c1.get_balance())
print (c2.get_name(),c2.get_balance())
