from progressbar import *
import time
pbar=ProgressBar()
widgets=['Loading:',Percentage(),' ', Bar(), ' ', ETA(), ' ', FileTransferSpeed()]
for i in range(20000):
	pbar.update(i)
	time.sleep(.005)
pbar.finish()
