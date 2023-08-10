from tkinter import*

cuaSo = Tk()
cuaSo.title('Button trong Tkinter')
cuaSo.geometry('600x200')

#Hàm gọi đến khi nhấn nút
def hienThiLoiChao():
    vanBanHienThi.set('Xin chao Tan Sinh Vien Khoa DTVT')

#Khai báo biến vanBanHienThi là StringVar để có thể thay đổi giá trị
vanBanHienThi = StringVar()
#Khai báo nút nhấn để hiển thị lời chào
btnHienThiLoiChao = Button(cuaSo,bg='black', fg='yellow',font=('Arial',15,'bold'),
                           text='Click \n de hien thi loi chao',command=hienThiLoiChao)
#Đặt nút nhấn vào cửa sổ với pack
btnHienThiLoiChao.pack(side=TOP)
#Khai báo label để hiển thị văn bản
labelHienThi = Label(cuaSo,width=30, bg='purple',fg='white',font=('Arial',20,'bold'),textvariable=vanBanHienThi)
labelHienThi.pack(side=BOTTOM)
cuaSo.mainloop()


    
