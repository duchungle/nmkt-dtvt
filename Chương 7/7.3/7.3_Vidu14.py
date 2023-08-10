from tkinter import*

cuaSo = Tk()
cuaSo.title("Label trong tkinter")
cuaSo.geometry("500x200")

labelLoiChao = Label(cuaSo,bg='purple',fg='white',font=('Arial',20, 'bold'),text='Xin chao Tan Sinh Vien Khoa DTVT')
labelLoiChao.place(x=20,y=80)
                     
cuaSo.mainloop()

    
