from tkinter import *
import tkinter.messagebox
q = ["Capital of India", "South most city of India"]
options = [["Delhi", "Mumbai", "Kolkata", "Chennai"], ["Delhi", "Mumbai", "Channai", "Kanyakumari"]]
a = [1,4]

class Quiz:
	def __init__(self, master):
		self.opt_selected = IntVar()
		self.qn = 0
		self.correct = 0
		self.ques = self.create_q(master, self.qn)
		self.opts = self.create_options(master, 4)
		self.display_q(self.qn)
		self.status_bar = self.create_status_bar(master)
		self.button = Button(master, text="Back", command=self.back_btn)
		self.button.pack(side=BOTTOM)
		self.button = Button(master, text="Next", command = self.next_btn)
		self.button.pack(side=BOTTOM)

	def create_status_bar(self, master):
		status_bar = Label(master, text="Click an answer...", bd=1, relief=SUNKEN, anchor=W)
		status_bar.pack(side=BOTTOM, anchor=W)
		return status_bar
	
	def create_q(self, master, qn):
		w = Label(master, text="Herllo")
		w.pack(side=TOP)
		return w

	def create_options(self, master, n):
		b_val = 0
		b = []
		while b_val < n:
			btn = Radiobutton(master, text ="text..." ,variable = self.opt_selected, value = b_val+1)
			b.append(btn)
			btn.pack(side=TOP, anchor="w")
			b_val += 1
		return b

	def display_q(self, qn):
		b_val = 0
		self.opt_selected.set(0)
		self.ques['text'] = q[qn]
		for op in options[qn]:
			self.opts[b_val]['text'] = op #i dont't know
			b_val += 1

	def check_q(self, qn):
		if self.opt_selected.get() == a[qn]:
			return True
		return False

	def print_results(self):
		print("Score:",self.correct,"/",len(q))
		result = "Score:",self.correct,"/",len(q)
		tkinter.messagebox.showinfo("Final Result:",result)
		self.status_bar['text']=result

	def back_btn(self):
		print("GO Back")

	def next_btn(self):
		if self.check_q(self.qn):
			print("Correct")
			self.status_bar['text']="Correct"	
			self.correct += 1
		else:
			print("Wrong")
			self.status_bar['text']="Correct"
		self.qn += 1
		if self.qn >= len(q):
			self.print_results()
		else:
			self.display_q(self.qn)

root = Tk()
root.geometry("500x300")
app = Quiz(root)
root.mainloop()			
	
	
		
