i=10

def func():
	global i
	j=i
	i=20
	print j


def func():
	global i
	i=i+1
	print i

func()
print i
