# Introduction

Bài này sẽ bàn về các cấp độ của vá file nhị phân. Từ đây ta sẽ có một cái nhìn tổng thể về RE.

# Levels Of Cracking

Có một loại quy tắc bất thành văn của RE(và đặc biệt cracking) về những loại khác nhau của vá tệp nhị phân. Có 4 levels cơ bản của vá tệp nhị phân. 

## Level 1 - LAME

Phương thức LAME, _Localized Assembly Manipulation and Enhancing_. Nó có nghĩa là tìm vị trí đầu tiên trong code mà ta có thể tìm thấy quyết định compare/jump và NOP nó hoặ buộc nó nhảy. Phương thức này hoạt động cho những bài đơn giản. Nhưng hầu hết các appp thì không hoàn toàn dễ. Có nhiều điều có thể xảy ra với phương pháp LAME :

1. Nhiều app dùng nhiều hơn 1 lần kiểm tra nếu chương trình đã được đăng ký, luôn từ những phần khác nhau của app, vì thế ta vá 1 không có nghĩa là sẽ không còn nhiều nữa. Và thỉnh thoảng những kiểm tra này sẽ không hoàn thành cho tới khi 1 số sự kiện khác xảy ra, vì vậy ta sẽ thấy ta quay lại cùng một ứng dụng để tìm kiếm các thay thế khác để vá

2. Nhiều chương trình cũng có nhiều thủ thuật đặc biệt để tránh kết hợp compare/jump 1 cách rõ ràng. Dù nó được thực hiện trong DLL, thực hiện trong một luồng khác, Có nhiều các để kàn nó trở nên rõ ràng.

3. Thỉnh thoảng ta kết thúc việc vá rất nhiều cốt. Có thể ta vá 7 check nếu  ta đã đăng kí. NOP bỏ qua các kiểm tra khác. Điều này có thể gây nhầm lần.

4. Ta không học được nhiều nếu chỉ học phương pháp này

Đây là giải pháp đơn giản nhất, là 1 bản vá trên combo compare/jump.