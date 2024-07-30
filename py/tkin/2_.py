import tkinter as tk
import ttkbootstrap as ttk


# getting and changing widgets
def get():
    p = field.get()
    label['text'] = p
    # label.configure(text='new')
    
    
win = ttk.Window(themename='darkly')
win.title('get/set widgets')
win.geometry('500x300')

label = ttk.Label(master=win,text='yttit',font='Calibri 24')
field = ttk.Entry(master=win)
button = ttk.Button(master=win,text='buttt',command=get)



label.pack()
field.pack(side='left',padx=10)
button.pack(side='left',padx=5)



win.mainloop()
