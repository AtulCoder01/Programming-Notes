import tkinter as tk
from tkinter import filedialog
def clicked_new():
	print("You Clicked: New")
def clicked_open():
	print("You Clicked: Open...")
	filename = filedialog.askopenfilename(filetypes=(("File","*.py"), ("All Files","*.*")))
	path_label.config(text=filename)	
def clicked_save():
	print("You Clicked: Save")
def clicked_save_as():
	print("You Clicked: Save As...")
def clicked_print_preview():
	print("You Clicked: Print Preview")
def clicked_print():
	print("You Clicked: Print...")
def clicked_quit():
	print("You Clicked: Quit")
def clicked_undo():
	print("You Clicked: Undo")
def clicked_redo():
	print("You Clicked: Redo")
def clicked_cut():
	print("You Clicked: Cut")
def clicked_copy():
	print("You Clicked: Copy")
def clicked_paste():
	print("You Clicked: Paste")
def clicked_delete():
	print("You Clicked: Delete")
def clicked_select_all():
	print("You Clicked: Select All")
def clicked_find():
	print("You Clicked: Find...")
def clicked_find_next():
	print("You Clicked: Find Next")
def clicked_find_previous():
	print("You Clicked: Find Previous")
def clicked_replace():
	print("You Clicked: Replace...")
def clicked_jump_to():
	print("You Clicked: Jump To...")
def clicked_font():
	print("You Clicked: Font...")
def clicked_word_wrap():
	print("You Clicked: Word Wrap")
def clicked_line_numbers():
	print("You Clicked: Line Numbers")
def clicked_auto_indent():
	print("You Clicked: Auto Indent")
def clicked_about():
	print("You Clicked: About")

w = tk.Tk()
w.geometry("500x300")
m=tk.Menu(w)
w.config(menu=m)
submenu_file = tk.Menu(m)
submenu_edit = tk.Menu(m)
submenu_search = tk.Menu(m)
submenu_option = tk.Menu(m)
submenu_help = tk.Menu(m)
m.add_cascade(label="File", menu=submenu_file)
m.add_cascade(label="Edit", menu=submenu_edit)
m.add_cascade(label="Search", menu=submenu_search)
m.add_cascade(label="Option", menu=submenu_option)
m.add_cascade(label="Help", menu=submenu_help)
submenu_file.add_command(label="New", command=clicked_new)
submenu_file.add_command(label="Open...", command=clicked_open)
submenu_file.add_command(label="Save", command=clicked_save)
submenu_file.add_command(label="Save As...", command=clicked_save_as)
submenu_file.add_separator()
submenu_file.add_command(label="Print Preview", command=clicked_print_preview)
submenu_file.add_command(label="Print...", command=clicked_print)
submenu_file.add_separator()
submenu_file.add_command(label="Quit", command=clicked_quit)

submenu_edit.add_command(label="Undo", command=clicked_undo)
submenu_edit.add_command(label="Redo", command=clicked_redo)
submenu_edit.add_separator()
submenu_edit.add_command(label="Cut", command=clicked_cut)
submenu_edit.add_command(label="Copy", command=clicked_copy)
submenu_edit.add_command(label="Paste", command=clicked_paste)
submenu_edit.add_command(label="Delete", command=clicked_delete)
submenu_edit.add_separator()
submenu_edit.add_command(label="Select All", command=clicked_select_all)

submenu_search.add_command(label="Find", command=clicked_find)
submenu_search.add_command(label="Find Next", command=clicked_find_next)
submenu_search.add_command(label="Find Previous", command=clicked_find_previous)
submenu_search.add_command(label="Replace...", command=clicked_replace)
submenu_search.add_separator()
submenu_search.add_command(label="Jump To...", command=clicked_jump_to)

submenu_option.add_command(label="Font...", command=clicked_font)
submenu_option.add_command(label="Word Wrap", command=clicked_word_wrap)
submenu_option.add_command(label="Line Numbers", command=clicked_line_numbers)
submenu_option.add_separator()
submenu_option.add_command(label="Auto Indent", command=clicked_auto_indent)

submenu_help.add_command(label="About", command=clicked_about)

text=''
path_label = tk.Label(w,text=text)
path_label.pack()

w.mainloop()
