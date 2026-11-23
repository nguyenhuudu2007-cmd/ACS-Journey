# Module 02 — STM32 HAL (`Mini-SCADA STM32 + Qt6 ServoHMI`)

Dự án thực hành trọng tâm của chặng **STM32 HAL** đã được tách thành repository độc lập để trình bày hoàn chỉnh mã nguồn, tài liệu kỹ thuật và GitHub Actions CI:

👉 **[nguyenhuudu2007-cmd/mini-scada-stm32](https://github.com/nguyenhuudu2007-cmd/mini-scada-stm32)**

## Tóm tắt nội dung đã hoàn thành
- **Firmware (`STM32F103C8T6` HAL):** Điều khiển Servo SG90 qua `TIM2_CH2` (`50 Hz`), ngắt ngoài `PA0` cho E-Stop cứng, giao tiếp LCD 1602 (`I2C1`) + DS1307 RTC (`I2C2`), và nhận lệnh ngắt `USART1` qua RS232 (`MAX3232`).
- **Desktop HMI (`Qt6 C++17`):** `ServoHMI` tách riêng lớp giao thức `ServoProtocol` (`Qt::Core` only) với `13` ca unit test `QtTest` / `CTest`, hỗ trợ `Manual Slider`, `Auto Sweep`, `Hardware Test` (Bring-Up 4 bước + đo `RTT ms`) và `Event Log`.
