from tkinter import*

cuaSo = Tk()
cuaSo.title("Button trong Tkinter")
cuaSo.geometry("300x200")

#Hàm gọi đến khi nhấn nút
def hienThiLoiChao():
	print("Xin chao Tan Sinh Vien Khoa DTVT")

#Khai báo nút nhấn để hiển thị lời chào
btnHienThiLoiChao = Button(cuaSo, bg='black', fg='yellow',font=('Arial',15,'bold'),
							text='Click \n de hien thi loi chao', command=hienThiLoiChao)
#Đặt nút nhấn vào cửa sổ với pack
btnHienThiLoiChao.pack(side=TOP)
cuaSo.mainloop()