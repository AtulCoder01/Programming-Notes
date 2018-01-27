i=10
def p():
	print i

def incr():
	global i
	i=11
	print i

p()
incr()
p()
incr()
p()
