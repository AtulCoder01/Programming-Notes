from argparse import ArgumentParser
def main():
	ap=ArgumentParser()
	ap.add_argument('-v', '--verbose', default=False, action='store_true', help='Increase verbosity')
	ap.add_argument('-n', '--number', type=int, default=1, help="The number of times to greet NAME")
	ap.add_argument('name', help="The Person to greet", nargs='?')
	ap.add_argument("branch", help="Enter your branch i.e. cse,me,ecc", nargs='?')
	args=ap.parse_args()
	for index in range(args.number):
		print ("Hello,", args.name or 'Atul Kumar', "!")
	if args.verbose:
		print ("I've finished now",args.branch or "Agriculture")

main()
