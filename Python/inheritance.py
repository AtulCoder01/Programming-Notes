#Inheritance
#use python 3
#is a OR like a extends other programming language

class Vehicle:
	def __init__(self, name):
		self.vehicle_name=name
	def getName(self):
		return self.vehicle_name

class Car(Vehicle):# Car inherite to Vehicle
	def __init__(self):
		super().__init__('Nano Car')

class MotorCycle(Vehicle):
	def __init__(self):
		super().__init__('MotorCycle')

c=Car();
print (c.getName())
m=MotorCycle()
print (m.getName())

