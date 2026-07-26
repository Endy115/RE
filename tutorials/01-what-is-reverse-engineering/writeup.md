# RE là gì ?

Lấy mã nhị phân để tái tạo lại để hiểu cách hoạt động của chương trình.

# RE dùng để làm gì ?

Áp dụng nhiều lĩnh vực :

+ Có thể dùng mã nguồn cũ khả thi nếu như không có mã nguồn gốc
+ Phá vỡ bản quyền
+ Phân tích mã độc và phần mềm
+ Đánh giá chất lượng phần mềm
+ Bổ sung chức năng cho phần mềm

__Các loại RE:__

Loại đầu tiên là khi không có mã nguồn gốc thì phải làm việc với tệp nhị phân

Loại thứ hai là phá bản quyền của các ứng dụng để dùng miễn phí

Loại thứ ba là nghiên cứu virus và phần mềm độc hại. Bởi vì ta không biết code của virus và mục đích của cái code độc hại và cách thực hiện

Loại thứ tư là đánh giá bảo mật của phần mềm và lỗ hổng

Loại cuối cùng là thêm chức năng cho phần mềm

# Kiến thức cần biết 

Cần nhiều kiến thức. Hiểu cách hoạt động của chương trình. 

Thứ hai là phải quen với ASM và biết là chương trình ASM đang làm gì. 

Thứ ba là phải biết các dùng các công cụ.

Cuối cùng là phải biết cách thử nghiệm với đóng gói, bảo vệ, mã hóa, tìm hiểu các cách code của các lập trình viên, các kỹ thuật chống đảo ngược của lập trình

# Các loại công cụ cần dùng

Cần nhiều công cụ khác nhau. Trong đó gồm có :

## Disassemblers 

Trình dịch ngược là lấy mã máy trong tệp nhị phân và hiển thị ở định dạng dễ đọc dễ hiểu với con người nhờ vào việc trích xuất dữ liệu như các lệnh gọi hàm, các biến được truyền và chuỗi văn bản

Tiêu biểu là IDA

## Debuggers

Trình gỡ lỗi là giúp phân tích mã nhị phân, cho phép chạy từng dòng lệnh và kiểm tra kết quả. Việc này giúp cho hiểu chương trình hoạt động. Đặc biệt, một số trình còn cho phép thay đổi 1 số lệnh đặc biệt trong mã và chạy chương trình với những thay đổi này.

Ví dụ là Windbg và Ollydbg

## Hex editors

Trình sửa hex cho phép xem các byte trong tệp nhị phân và thay đổi, cung cấp các chức năng tìm kiếm các byte cụ thể.

## PE and resource viewers/editors

Mỗi tệp nhị phân được thiết kế để chạy trên Windows và Linux đều có 1 phần dữ liệu cho biết cách thiết lập và khởi tạo. Cho biết cần bao nhiêu bộ nhớ, cần mượn mã từ thư viện nào, hộp thoại... Gọi là tập thực thi PE.

Cấu trúc byte rất quan trọng vì cung cấp các thông tin cần thiết. Thường thì ta sẽ cố thay đổi các thông tin này để giúp cho các chương trình chạy với mục đích khác mục đích ban đầu

Có nhiều trình để làm việc này, tiêu biểu là CFF Explorer và LordPE

## System Monitoring tools

Vì khi phân tích đặc biệt là virus thì có thể tạo ra các tệp lạ, cần theo dõi để biết xem có tệp đặc biệt nào được tạo ra không, tệp .ini 

Một số công cụ là procmon regshot và process hacker

## Miscellaneous tools and information

Một số công cụ script, unpacker, packer, identifier, các API của Windows.

