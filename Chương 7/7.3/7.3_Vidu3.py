#Khai báo hàm in kết quả phép cộng có 2 tham số đầu vào là a và b
def inKetQuaPhepCong(a,b):
	print("Phep tinh: ", a, '+', b)
	print("Ket qua :", a + b)

#Khai báo một list 2 phần tử và gọi hàm tính tổng
listSoNguyen=[5,10]
inKetQuaPhepCong(*listSoNguyen)