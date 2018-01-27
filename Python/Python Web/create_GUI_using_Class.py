from tkinter import *
class CreateButtons:
	def __init__(self, parent):
		f = Frame(parent)
		f.pack()
		self.print_button = Button(f, text="Print", command=self.print_list)
		self.print_button.pack()
		self.quit_button = Button(f, text="Quit", command=f.quit)
		self.quit_button.pack()
		
	def print_list(self):
		print("Print button was clicked")

root = Tk()
c = CreateButtons(root)
root.mainloop()
