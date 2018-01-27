import re
s='abc.xyz@d.com'
p=re.search('\w+\.*\w*@\w+\.\w+',s)
if p:
	print 'found email:',p.group()
else:
	print 'not found'
