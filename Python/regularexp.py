#regular expretion
import re
s='Today is Wednesday and tomarrow is Thursday'
p=re.search('(.*)Wednesday and (.*) Thursday',s);
if p:
	print 'found:',p.group()
	print 'group1:',p.group(1),p.group(1).capitalize()s
	print 'group2:',p.group(2),p.group(2).capitalize()
else:
	print 'not found'
