class Vehicles:
	def __init__(self, N):
		self.number=N
	def __add__(self,other):
		return self.number + other.number

v1=Vehicles(10)
v2=Vehicles(20)
print (v1+v2)
class Vehicle:
	def __init__(self, N):
		self.number=N
	def __lt__(self,other):
		return self.number < other.number

v1=Vehicle(10)
v2=Vehicle(20)
print (v1<v2)
