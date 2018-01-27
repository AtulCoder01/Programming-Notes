#reading file
#open(filename,mode)

f = open("atul.txt", "r")
#file is asequnce of line

for i in f:
	print (i,end='')

f.close()

