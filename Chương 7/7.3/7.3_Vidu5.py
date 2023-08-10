def inSoChan(*daySoNguyen):
    for soNguyen in daySoNguyen:
        if (soNguyen%2 == 0):
			print(soNguyen)
            
#Dãy số: 1, 2, 5, 9, 10, 15, 16, 0, 12
#Gọi hàm in ra các số chẵn
print("Cac so chan trong day so day cho:")
inSoChan(1,2,5,9,10,15,16,0,12)
