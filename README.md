# K58KTP_baitap1
K225480106040_Nguyễn Thị Linh
# TÌM HIỂU CÁC PHƯƠNG PHÁP MÃ HOÁ CỔ ĐIỂN
- 1.Caesar
- 2.Affine
- 3.Hoán vị
- 4.Vigenère
- 5.Playfair
# Với mỗi phương pháp, hãy tìm hiểu:
- Tên gọi
- Thuật toán mã hoá, thuật toán giải mã
- Không gian khóa
- Cách phá mã (mà không cần khoá)
- Cài đặt thuật toán mã hoá và giải mã bằng code C++ và bằng html+css+javascript
# BÀI LÀM
## 1.Caesar
### Tên gọi
+ Caesar Cipher, hay Mã hóa dịch chữ cái theo bảng chữ cái.
### Thuật toán
+ Mã Hóa:
+ Dịch mỗi ký tự X trong bản rõ P theo công thức
+         C= (x+k) mod 26
+ Giải mã:
+         P = (C-k +36) mod 26
+ Trong đó k là khóa ( số nguyên từ 0 đến 25), x và c là vị trí chữ cái trong bảng A-Z (0-25)
### Không gian khóa:
+ 26 khả năng (k=0 đến 25)
### Cách phá mã ( không cần khóa):
+ Tấn công Brute-force: Thử tất cả 26 khả năng.
+ Tấn công tần suất: So sánh tần suất chữ cái trong bản mã với tần suất chữ cái phổ biến trong tiếng Anh( E,T,A..)
## Kết quả 
+ C++
+  <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/cd615510-624d-4b61-86bf-e43727560ca0" />
+ Html
+  <img width="548" height="495" alt="image" src="https://github.com/user-attachments/assets/0d9695a3-4903-44f8-8c7b-4b82bb432ef3" />
## 2.Affine
### Tên Gọi
 + Affine Cipher: kết hợp phép nhân và cộng modulo 26.
### Thuật toán
 + Mã hóa: C = (a*P + b) mod 26
 + Giải mã: P = a^-1 * (C - b) mod 26 (a^-1 là nghịch đảo modulo 26)
 + a và 26 phải nguyên tố cùng nhau.
### Không gian khóa
 + 12x26 =312 khóa (12 khả năng cho a,26 khả năng cho b)
### Cách phá mã: 
 + Brute-force 312 khóa
 + Phân tích tần suất
### Kết Quả
 + C++
 +  <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/297dc6d9-4ce9-40b9-9e99-36d4d7bd6424" />
 + HTML
 +  <img width="439" height="493" alt="image" src="https://github.com/user-attachments/assets/f6d66524-6af9-4ac2-a72f-5c83e01c77e1" />
## 3.Hoán vị
### Tên gọi
 + Mã hóa hoán vị sắp xếp lại vị trí các ký tự trong bản rõ theo một quy tắc nhất định
### Thuật toán
 + Mã hoá: Chia bản rõ thành các khối dài n ký tự, sau đó hoán vị theo khóa k (một dãy số xác định vị trí ký tự).
Ví dụ khóa k=[3,1,2], bản rõ "ABCDEF" → chia thành "ABC" "DEF" → hoán vị theo khóa "CAB" "FDE" → kết quả "CABFDE".
 + Giải mã: Dùng cùng khóa k đảo lại vị trí ký tự.
### Không gian khóa:
 + Mọi hoán vị của n ký tự: n! khả năng.
 + Ví dụ n=4 → 4! = 24 khả năng.
### Cách phá mã:
 + Brute force: thử tất cả hoán vị (chỉ khả thi với n nhỏ)
 + Phân tích mẫu: dựa trên cấu trúc ngôn ngữ, các nhóm ký tự phổ biến.
### Kết Quả
 + C++
 +  <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/d3435573-8ea3-4554-bde0-f8ff0599e96e" />
 + HTML
 +  <img width="440" height="444" alt="image" src="https://github.com/user-attachments/assets/8c17db7b-0fb6-4e87-a01a-4a801395442b" />
## 4.Vigenère
### Tên gọi
 + Vigenère Cipher là phương pháp dùng chuỗi khóa lặp lại để dịch chuyển chữ cái, còn gọi là “mã hoá chữ cái đa dạng”.
### Thuật toán
 + Mã hóa:
 +       Ci​=(Pi​+Ki​)mod26
 + P_i: ký tự bản rõ
 + K_i: ký tự khóa (A=0, B=1,…)
 + C_i: ký tự mã hoá
 + Giải mã
 +       Pi​=(Ci​−Ki​+26)mod26
### Không gian khóa:
+ Khóa là chuỗi ký tự, độ dài tùy ý → không gian khóa rất lớn.
### Cách phá mã:
+ Kasiski Test hoặc Friedman Test để tìm độ dài khóa
+ Sau đó phân tích tần suất từng nhóm ký tự.
### Kết Quả
+ C++
+  <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/c1363e29-b695-4131-98ce-359c16e4f0c9" />
+ HTML
+  <img width="429" height="438" alt="image" src="https://github.com/user-attachments/assets/da155a45-9f7a-40cb-b815-fdea20f8f5d6" />
## 5.PlayFair
### Tên gọi
  + Được phát triển bởi Charles Wheatstone (1854) nhưng được Playfair quảng bá, dùng bảng 5x5 mã hoá cặp ký tự.
### Thuần toán
  + Mã hóa:
    + Tạo bảng 5x5 từ khóa (chữ I/J ghép chung)
    + Chia bản rõ thành cặp ký tự (digraph), thêm ký tự filler nếu cần
    + Mã hoá theo 3 quy tắc: cùng hàng, cùng cột, chữ nhật
  + Giải mã: Áp dụng ngược lại các quy tắc
### Không gian khóa
  + 25! khả năng sắp xếp bảng (tuy nhiên thực tế là nhỏ hơn do ràng buộc)
### Cách phá mã:
  + Phân tích digraph: dựa vào tần suất các cặp chữ cái.
## Kết Quả
 + C++
 + <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/51f3c3cd-066c-4dc7-9c59-672a431b2460" />
 + HTML
 + <img width="427" height="443" alt="image" src="https://github.com/user-attachments/assets/f631536b-0006-40d0-a280-025125b04d8f" />



  
