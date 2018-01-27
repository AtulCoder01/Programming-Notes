#Default argument
def add(a, b=5):#b is default value of zero
	return a+b

print (add(2))
#####################################################################################################

def foo(i, a=[0]):
	a.append(i)
	return a
'''
z=[]
print (foo(1,z))
print (foo(2,z))
print (foo(3,z))'''

print (foo(1))
print (foo(2))
print (foo(3))
