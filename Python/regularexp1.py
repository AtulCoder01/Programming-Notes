import re
s='Today is wednesday and tomorrow is Thursday'
s1='and'
p=re.search('.*AnD.*',s1,re.I)
if p:
	print 'pattern found:',p.group()
else:
	print 'no match'
