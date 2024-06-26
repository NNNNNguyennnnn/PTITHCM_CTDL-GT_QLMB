# **PTITHCM_CTDL-GT_QLMB**
Đây là đồ án năm 2 của môn Cấu trúc dữ liệu & giải thuật khóa D21 của PTITHCM do thầy Lưu Nguyễn Kì Thư phụ trách.
## Thành viên: 
  - [Nguyễn Tấn Nguyên](https://github.com/NNNNNguyennnnn)
  - [Nguyễn Phi Long](https://github.com/NguyenPhiLongIT)
  - [Nguyễn Phúc Minh Khang](https://github.com/NguyenPhucMinhKhang)

## Nội dung đồ án:
Quản lý các chuyến bay nội địa thuộc 1 hãng hàng không: Ta tổ chức các danh sách sau: 
- Máy bay: mảng con trỏ có tối đa 300 máy bay. Mỗi máy bay có các thông tin (Số hiệu MB (C15), loại máy bay (C40), số dãy, số dòng) ;  Mỗi máy bay có 1 số hiệu duy nhất; (số chỗ = số dãy * số dòng ), số chỗ >=20
Nếu số dãy = 5 nghĩa là máy bay có các dãy A, B, C, D, E; Nếu số dòng = 20 nghĩa là máy bay có các hàng ghế được đánh số từ 1 đến 20. Kết hợp dãy và hàng ghế ta sẽ có số vé.
Theo ví dụ trên, ta có 100 vé với các số vé A01, A02, ...., A19, A20, …, E19, E20
- Chuyến bay: danh sách liên kết đơn ( Mã CB (C15),  Ngày giờ khởi hành, sân bay đến , trạng thái, Số hiệu MB, danh sách vé). Mỗi chuyến bay có 1 mã duy nhất; trạng thái chuyến bay bao gồm: 0: hủy chuyến, 1: còn vé, 2: hết vé,3: hoàn tất ; danh sách vé cho biết thông tin vé trên chuyến bay, và số CMND của hành khách đã đặt vé đó.  Danh sách chuyến bay luôn có sẵn thứ tự theo mã chuyến bay.
- Hành khách: cây nhị phân tìm kiếm (Số CMND, Ho, Ten,  Phai)
Chương trình có các chức năng sau: 
a/ Cập nhập danh sách các máy bay (thêm / xóa / hiệu chỉnh)
b/ Cập nhật chuyến bay: cho phép lập chuyến bay mới, hiệu chỉnh ngày giờ khởi hành của chuyến bay, hủy chuyến.
c/Đặt vé: cho phép đặt vé trên 1 chuyến bay; nếu thông tin hành khách chưa có thì tự động cập nhật vào danh sách hành khách, nếu có rồi thì in ra màn hình để kiểm tra. Mỗi vé đều phải ghi nhận số CMND của hành khách; nếu hành khách chưa có số CMND thì yêu cầu nhập thông tin hành khách trước. Trên 1 chuyến bay, mỗi hành khách chỉ được mua 1 vé.
d/ Hủy vé: cho phép hủy vé đã đặt của hành khách.
e/ In danh sách các hành khách thuộc 1 chuyến bay dựa vào mã chuyến bay. Kết xuất:
DANH SÁCH HÀNH KHÁCH THUỘC CHUYẾN BAY ######
Ngày giờ khởi hành: dd/mm/yyyy hh:mm.  Nơi đến : xxxxxxxxxxx

	STT	SỐ VÉ		SỐ CMND	HỌ TÊN	PHÁI
f/ In danh sách các chuyến bay khởi hành trong  ngày dd/mm/yyyy đến nơi XXXX mà còn vé (cho biết cụ thể số lượng các vé còn trống và giờ khởi hành)
g/ In danh sách các vé còn trống của 1 chuyến bay có mã chuyến bay là X. 
h/ Thống kê số lượt thực hiện chuyến bay của từng máy bay theo thứ tự  số lượt thực hiện giảm dần. Kết xuất:
	Số hiệu máy bay		Số lượt thực hiện chuyến bay

Lưu ý: Chương trình cho phép lưu các danh sách vào file; Kiểm tra các điều kiện khi nhập liệu làm dữ liệu bị sai.

Nội dung trên là thông tin sơ bộ của đề tài nhóm mình nhận được từ thầy (mỗi kì có thể có yêu cầu khác nhau nên mọi người dựa vào yêu cầu của thầy mà làm theo)

## Hướng dẫn chạy dự án:
1. Kiểm tra makefile tool:
Đầu tiên bạn cần phải kiểm tra xem bạn đang sử dụng tool makefile nào, ở đây mình cài môi trường bằng [MSYS2](https://www.msys2.org/), nên mình sẽ dùng lun tool make file của nó, nếu bạn chưa có thì vào trang [MSYS2](https://www.msys2.org/) xem hướng dẫn cài như cài _gcc_, nhưng ở đây mình sẽ thay đổi _gcc_ thành _make_ như sau:
Thời điểm mình tải thì nó là:
```bash
pacman -S mingw-w64-x86_64-make
```
Có thể hiện tại nó sẽ khác 1 tí thì nó chỉ khác folder, bạn có thể vào check để rõ hơn.
Sau đó bạn có thể check lại bằng cách mở ***Terminal*** hoặc là ***CMD***
```bash
mingw32-make --version
```
Nếu nó hiển thị được version giống dưới đây thì bạn đã có makefile tool
![image](https://github.com/NNNNNguyennnnn/PTITHCM_CTDL-GT_QLMB/assets/106095525/9f381e5e-5f4c-455e-8b0d-3a5807d6b994)

2. Mở project:
Mở **Terminal** hoặc là **CMD**
```bash
git clone https://github.com/NNNNNguyennnnn/PTITHCM_CTDL-GT_QLMB.git
cd PTITHCM_CTDL-GT_QLMB
```
3. Run code:
```bash
mingw32-make run
```
