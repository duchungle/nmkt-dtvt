#Khai báo hàm in kết quả phép cộng có 2 tham số đầu vào là a và b
#Trong đó b mặc định bằng 0
def inKetQuaPhepCong(a,b=0):
    print("Phep tinh: ", a, ' + ', b)
    print("Ket qua: ", a + b)

#Gọi hàm
inKetQuaPhepCong(5)     #Không truyền giá trị cho tham số b
inKetQuaPhepCong(5,10)  #Truyền giá trị cho tham số b=10




