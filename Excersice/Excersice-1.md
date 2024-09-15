## **Bài tập 1 – Hệ Điều Hành**

Bùi Nguyễn Hoàng Thọ - 2333017

## **Câu 1.12**

Khác nhau giữa **hệ thống cụm** và **hệ thống đa xử lý :**

**Hệ thống cụm (clustered systems)**

- Chúng được xây dựng bằng cách kết hợp nhiều máy tính với nhau để thực hiện tác vu phân tán

**Hệ thống đa xử lý (multiprocessor systems)**

- Một thực thể nhiều CPU, giao tiếp qua bộ nhớ chia sẻ và có kết nối chặt chẽ hơn.
- Trong **hệ thống cụm** , điều kiện để hai máy tính có
thể hỗ trợ lẫn nhau để cung cấp các dịch vụ cao hơn là : chúng nên được phép thay thế và được cập nhật liên tục.

Khi một bên gặp trục trặc, bên còn lại có thể tiếp quản chức năng bên bị lỗi.

## **Câu 1.13**

Có hai phương án phân cụm không đối xứng (asymmetric clustering) và phân cụm song song (parallel clustering).

Với phương án phân cụm không đối xứng : khi một máy chủ chạy ứng dụng cơ sở dữ liệu thì máy kia sẽ monitoring (theo dõi) chúng.

Nhưng điều này sẽ không làm tận dụng hết được tiềm năng sức mạnh xủ lý của cả hai máy chủ.

**Ngược lại,** với phương án chạy phân cụm song song thì ứng dụng cơ sở dữ liệu có thể chạy song song trên cả hai máy chủ.

## **Câu 1.14**

- **Ngắt (Interrupt)** có mục đích thông báo các sự
kiện từ các thiết bị ngoại vi . Còn trap (hay exception) – lỗi được tạo
ra từ các phần mềm để xử lý lỗi hoặc các yêu cầu đặc biệt trong chương trình…
- Trap có thể được tạo ra một cách chủ đích bởi các chương trình của
người dùng với mục đích chính như : Gọi các hàm hệ thống, xử lý lỗi toán học, gỡ lỗi (**debugging)** hay quản lý tài nguyên…

## **Câu 1.15**

Trong hệ thống Linux, biến **HZ** dùng để chỉ số lần ngắt mỗi giây và nó phụ thuộc vào cách một kernel(nhân) được điều chỉnh , cũng như kiểu máy và cấu trúc của nó.

**Ví dụ:** HZ= 250 tức là 250 lần được ngắt trong mỗi giây hay là ngắt mỗi 4 milliseconds.

**jiffies:** Là biến toàn cục trong kernel đếm số lần ngắt đã xảy ra từ khi hệ thống khởi động.

## **Câu 1.16**

1. Làm thế nào một CPU giao tiếp với một thiết bị để thực hiện tuyền tải?
- Cpu sẽ thiết lập các thanh ghi **DMA(Direct Memory Access)** về các thông tin như nguồn, đích đến và số bytes cần truyền tải
- Bộ điều kiện của của **DMA** sẽ thực hiện truyền tải dữ liệu trên bus trong khi CPU có thể làm việc khác.
- Khi tiến trình chuyển giao kết thúc, nó sẽ gửi tín hiệu ngắt đến CPU.
- Khi CPU được phép xử lý các chương trình khác trong khi bộ điều khiển DMA đang vận chuyển dữ liệu, chúng có thể gây **xung đột truy cập bộ nhớ** do chúng có thể cùng truy cập vào bộ nhớ.

Khi **DMA** đang hoạt động, bộ nhớ CPU có thể sẽ tạm thời không được phép truy cập. Nếu CPU vẫn truy cập các bộ nhớ đệm trong khi DMA cập nhật bộ nhớ chính, có thể xảy ra vấn đề về đồng bộ hóa dữ liệu.

## **Câu 1.18**

Bộ nhớ nhỏ và nhanh sẽ được lưu cục bộ ( local) cho mỗi CPU , còn các bộ nhớ đệm lớn và nhưng chậm hơn sẽ được chia sẻ giữa các bộ xử lý khác nhau.

## **Câu 1.19**

Sắp xếp hệ thống lưu trữ từ chậm đến nhanh nhất ta có:

1 . Magnetic Tapbes

2. Optical Disks

3. Hard-Disk Drives

4. Nonvolatile Memory (ssd)

5. Main Memory (Ram)

6. Cache

7. Registers

## **Câu 1.21**

- **Hệ thống xử lý đơn**: bộ nhớ cần được cập nhật khi bộ xử lý thực
hiện cập nhật giá trị đã lưu trong bộ nhớ đệm. Những cập nhật này có thể thực hiện ngay lập tức.
- **Hệ thống đa xử lý**: Các bộ xử lý khác nhau có thể cùng một địa chỉ bộ nhớ trong các bộ nhớ đếm cục bộ của chúng. Khi có cập nhật, các địa chỉ bộ nhớ đã được lưu trữ trong các bộ nhớ đệm khác cần phải cập nhật lại
- **Hệ thống phân tán** : Trong hệ thống phân tán, vấn để có thể phát sinh về tính nhất quán có thể phát sinh khi một client lưu trữ dữ liệu tệp
tin vào bộ nhớ đệm.

## **Câu 1.22**

Để bảo vệ bộ nhớ và ngăn chặn chương trình sửa đổi bộ nhớ của chương 
trình khác, bộ xử lý sử dụng các thanh ghi cơ sở và giới hạn theo dõi và
 kiểm tra các địa chỉ bộ nhớ và chương trình có quyền truy cập.

## **Câu 1.23**

1. Lan
2. WAN
3. Lan

## **Câu 1.24**

Thử thách/ giới hạn khi thiết kế hệ điều hành cho thiết bị mobile so với PC truyền thống là:

- **Bộ nhớ:** Do thiết bị mobile có dung lượng bộ nhớ ít
ơn PC, ngoài ra PC còn cho phép người dùng nâng cấp phần cứng bộ nhớ ,
điều đó không cho phép với các thiết bị mobile.
- **Tiêu hao điện:** Thiết bị mobile luôn sử dụng mà không cần cắm điện , điều này ngược lại với PC.

## **Câu 1.25**

Ưu điểm của **peer-to-peer network**:

- Dễ cài đặt và ít tốn kém
- Dễ sử dụng hơn, giúp tiết kiệm thời gian cài đặt và cấu hình
- Nếu một máy tính bị lỗi, nó sẽ không làm gián đoạn bất kỳ phần nào khác của mạng. Điều đó chỉ có nghĩa là những tệp đó không có sẵn cho những người dùng khác vào thời điểm đó.

## **Câu 1.26**:

Một vài ứng dụng phân tán có thể tích hợp hệ thống peer-to-peer là

- File Sharing Network
- Cryptocurrency ( hệ thống tiền tệ ảo)
- Trình duyệt ẩn danh

## **Câu 1.27**

### Ưu điểm

- Độ uy tín cao. Các nhà phát triển khác có thể đóng góp , chỉnh sửa.
    
    **Phù hợp:** cho những nhà phát triển phần mềm, người có
     kĩ thuật cao, và tổ chức yêu cầu phần mềm có độ uy tín cao vào liên tục
     được cập nhật về bảo mật.
    
- Linh hoạt : có thể tùy chỉnh theo yêu cầu và tự do sáng tạo.
    
    **Phù hợp:** Cho các nhà phát triển phần mềm , kỹ sư hệ thống có thể tự điều chỉnh cài đặt phù hợp cho công việc.
    
- Có thể giúp tiết kiệm chi phí khi chúng ta phần là miễn phí (như Ubuntu, Fedora….).
    
    **Phù hợp**: Cá nhân, sinh viên, doanh nghiệp nhỏ và các tổ chức với ngân sách hạn chế
    

### **Nhược điểm:**

- Phức tạp: đòi hỏi phải có hiểu biết cơ bản về công nghệ.
    
    **Không phù hợp:** những người không chuyên về công nghệ, những người không có kinh nghiệm hay cần một giải pháp dễ sử dụng mà 
    không cần cầu kỳ phức tạp.
    
- Rủi ro bảo mật: Vẫn có nguy cơ bị xâm hại vì chúng có quyền truy cập vào mã nguồn
    
    **Không phù hợp:** Các tổ chức , hệ thống có dữ liệu nhạy cảm . Hay các hệ thống không thể được cập nhật liên tục.