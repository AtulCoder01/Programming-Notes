import re
s='abc.xyz@gmail.com'
p=re.search('\w+\.*\w*\w+\.*\w*\w+\.*\w*@\w+\.\w+',s)
print 'email:',p.group()
