import tkinter as tk
w = tk.Tk()
def left(event):
	print("Press Left Button")
def right(event):
	print("Press Right Button")
def middle(event):
	print("Press Middle Button")
#b = tk.Button(w, text="Click", command=clicked)
b = tk.Button(w, text="Click")
b.bind("<Button-1>", left)
b.bind("<Button-2>", middle)
b.bind("<Button-3>", right)
b.pack()
w.mainloop()
