from argparse import ArgumentParser
def main():
	ap = ArgumentParser()
	ap.add_argument('name', nargs='?')
	ap.add_argument('roll', nargs='?')
	args=(ap.parse_args())
	name=(args.name or 'worls')
	roll=(args.roll or 'nhi pta')
	print ("Hello,",name,"!",roll)
	print (name+roll)


main()
