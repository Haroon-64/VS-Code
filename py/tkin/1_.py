# widgets basic

import tkinter as tk
#from tkinter import ttk   # more(ttk) widgets
import ttkbootstrap as ttk  # additional styles to ttk

def convert():
    # x = int(field.get()) not efficient
    x = fieldInt.get()
    y = x*x
    out_str.set(y)

# main window 
# win = tk.Tk()
win = ttk.Window(themename='darkly')
win.title('title')
win.geometry('250x150')

# title
title_label = ttk.Label(master=win,text='text',font='Calibri 24')
title_label.pack()   # show in window below others

#frame
input_frame = ttk.Frame(master=win)

fieldInt = tk.IntVar()
field = ttk.Entry(master=input_frame,textvariable=fieldInt)
button = ttk.Button(master=input_frame,text='con',command=convert)

field.pack(side='left',padx=10)
button.pack(side='left',padx=5)
input_frame.pack(pady=10)


out_str = tk.StringVar()
out_label = ttk.Label(master=win,text='out',font='Calibri 24',textvariable=out_str)
out_label.pack(pady=10)


#run
win.mainloop()
