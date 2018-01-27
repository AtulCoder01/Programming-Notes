#encapsulation :> data hiding
class Speed:
	def __init__(self):
		self.speed=10#public member
		self.__limit_speed=20#private member//encapsulation
	def get_speed(self):
		return self.speed
	def get_speed_limit(self):
		return self.__limit_speed
	def set_speed_limit(self, new_speed_limit):
		self.__limit_speed=new_speed_limit
s=Speed()
s.speed=100
s.__limit_speed=50# no effect
s.set_speed_limit(50)
print (s.get_speed(),s.get_speed_limit())
