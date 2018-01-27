import re
s='Today is Wednesday and tomarrow is Thursday'
p=re.match('Today.*(and) (.*Thursday)',s)
if p:
	print 'found match:',p.group()
	print 'found match:',p.group(1)
	print 'found match:',p.group(2)
else:
	print 'no match'
