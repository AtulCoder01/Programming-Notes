from progressbar import *
import time
pb=ProgressBar()
for i in pb(range(80)):
	time.sleep(0.01)

