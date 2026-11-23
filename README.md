<div align="center">
  <h1>🚀 ACS Journey: Advanced Computing Systems</h1>
  <p><i>"A system is more than the sum of its parts." — Hành trình 4 năm định hình tư duy và kỹ năng.</i></p>
  
  [![HCMUT](https://img.shields.io/badge/HCMUT-EngCom-blue?style=for-the-badge&logo=google-scholar)](#)
  [![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](#)
  [![STM32](https://img.shields.io/badge/STM32-03234B?style=for-the-badge&logo=stmicroelectronics&logoColor=white)](#)
  [![FreeRTOS](https://img.shields.io/badge/FreeRTOS-7A2D5A?style=for-the-badge&logo=amazon&logoColor=white)](#)
  [![ESP32](https://img.shields.io/badge/ESP32-E7352C?style=for-the-badge&logo=espressif&logoColor=white)](#)
  [![Linux Embedded](https://img.shields.io/badge/Linux_Embedded-FCC624?style=for-the-badge&logo=linux&logoColor=black)](#)
  <br>
  ![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=flat-square)
  ![Last Commit](https://img.shields.io/github/last-commit/nguyenhuudu2007-cmd/ACS-Journey?style=flat-square)
</div>

<hr>

## 💡 Về Repository Này

Đây là **Hub trung tâm** lưu trữ nền tảng lý thuyết, bài tập cơ sở và sổ nhật ký học tập của một sinh viên Kỹ thuật Máy tính (Computer Engineering - EngCom) tại Đại học Bách Khoa TP.HCM, hướng tới **Embedded & Edge Computing Systems**.

> **Nguyên tắc tổ chức:** Repository này chỉ chứa **bài tập nền tảng** ([`01_FOUNDATION/`](./01_FOUNDATION/)) và **nhật ký kỹ thuật** ([`PROGRESS_JOURNAL/`](./PROGRESS_JOURNAL/)). Các **dự án hoàn chỉnh** từ Giai đoạn 02 trở đi được tách thành **repository độc lập** (có CI, README và tài liệu phần cứng riêng) và liên kết trực tiếp tại bảng lộ trình bên dưới.

## 🗺️ Lộ Trình Hệ Thống & Danh Sách Dự Án

| Giai đoạn | Module | Trọng tâm Kiến thức | Sản phẩm / Repository | Tiến độ |
| :---: | :--- | :--- | :--- | :---: |
| **01** | [`01_FOUNDATION`](./01_FOUNDATION/) | **Cơ sở hạ tầng:** C++, STL, mạch số Verilog HDL & Testbench. | Bài tập C++ & Verilog trong repo này | 🔄 |
| **02** | [`02_STM32_HAL`](./02_STM32_HAL/) | **STM32 HAL & Host HMI:** PWM, EXTI, I2C (LCD + DS1307), USART1 RS232, Qt6 C++17 & CTest. | [**`mini-scada-stm32`**](https://github.com/nguyenhuudu2007-cmd/mini-scada-stm32) *(Repo độc lập)* | ✅ |
| **03** | `STM32_REGISTER` | **Deep Dive:** Giao tiếp phần cứng ở mức thanh ghi (Register). | *Tách repo khi triển khai* | ⏳ |
| **04** | `STM32_BAREMETAL` | **Bare-metal & CMSIS:** Driver không phụ thuộc HAL. | *Tách repo khi triển khai* | ⏳ |
| **05** | `RTOS_DMA` | **Đa nhiệm:** FreeRTOS (Task, Queue, Mutex) & DMA. | **P3:** Smart Multi-tasking Station *(dự kiến)* | ⏳ |
| **06** | `ESP32` | **IoT & Connectivity:** ESP-IDF, MQTT SSL, OTA. | **P4:** IoT Industrial Node *(dự kiến)* | ⏳ |
| **07** | `OPENCV` | **Computer Vision:** Xử lý ảnh OpenCV thời gian thực. | **P5:** Vision-Guided Tracker *(dự kiến)* | ⏳ |
| **08** | `LINUX_EMBEDDED` | **Embedded Linux:** Yocto/Buildroot, POSIX Socket, Driver cơ bản. | *Tách repo khi triển khai* | ⏳ |
| **09** | `CAPSTONE` | **Masterpiece:** Đồ án tốt nghiệp. | Hệ thống nhúng full-stack (STM32 + Linux/Edge) | ⏳ |

## 📓 Progress Journal (Sổ tay Kỹ sư)

> "Kỷ luật là cầu nối giữa mục tiêu và sự hoàn thành."

📁 **[Xem nhật ký chi tiết tại đây](./PROGRESS_JOURNAL/)**

Ghi chép quá trình học tập, các lỗi thực tế và cách truy vết nguyên nhân gốc khi làm việc với vi điều khiển và Linux.
