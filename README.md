
# 🧮 Qt Calculator App

A simple desktop calculator built using **C++** and the **Qt Framework**. It supports basic arithmetic operations — addition, subtraction, multiplication, and division — via a user-friendly graphical interface.

---

## ✨ Features

- Add, subtract, multiply, and divide two numbers  
- Clean and simple GUI using Qt Designer  
- Built with CMake and supports both **Qt5** and **Qt6**  
- Localization support via Qt translation system  

---

## 📷 GUI Preview

> *(Include screenshot here if desired)*  
The layout includes:  
- Two input fields for numbers  
- Four buttons for operations: `+`, `-`, `*`, `/`  
- A result field displaying the calculation output  

---

## 📦 Requirements

- Qt 5 or Qt 6  
- CMake ≥ 3.16  
- C++17 compatible compiler  

---

## 🔧 Build & Run Instructions

### 1. Clone the repository

```bash
git clone https://github.com/yourusername/qt-calculator.git
cd qt-calculator
```

### 2. Build using CMake

```bash
mkdir build && cd build
cmake ..
make
./calculator
```

---

## 📁 File Structure

```
.
├── main.cpp               # Application entry point
├── mainwindow.cpp        # Logic for arithmetic operations
├── mainwindow.h          # Main window header
├── mainwindow.ui         # GUI layout from Qt Designer
├── calculator_en_AS.ts   # Translation source (optional)
├── CMakeLists.txt        # Build configuration
└── README.md             # Project documentation
```

---

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).

---

## ✍️ Author

Made with ❤️ using Qt by 
