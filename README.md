# OOPS – Real-Time Examples 

This repository contains C++ programs developed as part of the **Object-Oriented Programming with C++ (OOPs)** course. The programs demonstrate important Object-Oriented Programming concepts using simple and practical real-time examples.

The repository covers **Unit I, Unit II, and Unit III**, including classes, objects, encapsulation, inheritance, abstraction, polymorphism, virtual functions, operator overloading, smart pointers, and input validation.

---

## 👨‍🎓 Student Details

| Details              | Information                            |
| -------------------- | -------------------------------------- |
| **Student Name**     | Om Raju Gosavi                         |
| **Roll No.**         | AD2122                                 |
| **Class / Division** | SY-B.Tech – Div A                      |
| **Department**       | Artificial Intelligence & Data Science |
| **Course Name**      | Object Oriented Programming with C++   |
| **Units Covered**    | Unit I, Unit II & Unit III             |

---

# 📘 Unit I – Programs

### 1. Smart Farm Sensor Monitor

A farm monitoring program that stores soil moisture readings from multiple field sensors. Each sensor contains its ID, moisture level, and recording time. Readings can be updated when new data arrives.

**Concepts Used:** Classes and Objects, Encapsulation, Private Data Members, Constructors, Constant Member Functions, STL Vector.

### 2. Student Attendance Tracker

A student attendance program that records attendance and calculates the attendance percentage based on total classes and attended classes.

**Concepts Used:** Classes and Objects, Encapsulation, Constructors, Constant Member Functions, Attendance Percentage Calculation.

### 3. Product Inventory Manager

An inventory management program that stores product ID, name, price, and stock. It maintains the total number of products using static members.

**Concepts Used:** Classes and Objects, Constructors and Destructors, Getter Functions, Static Data Members, Static Member Functions, Constant Member Functions.

### 🏠 Mini Project: Smart Home Manager

A menu-driven smart home management system that controls **Smart Light, Thermostat, Security Camera, and Door Lock**. Users can view the dashboard, turn devices ON/OFF, and change device status using the device ID.

**Concepts Used:** Inheritance, Protected Members, Virtual Functions, Function Overriding, Runtime Polymorphism, Virtual Destructor, Dynamic Memory Allocation, Menu-Driven Programming.

---

# 📗 Unit II – Programs

### 1. Employee Payroll System

A payroll system based on an abstract `Employee` class with **Full-Time Employee, Part-Time Employee, and Intern** types. Each type calculates salary differently.

**Concepts Used:** Classes and Objects, Inheritance, Encapsulation, Constructors with Initializer Lists, Abstract Classes, Pure Virtual Functions, Function Overriding, Salary Calculation.

### 2. Payment Gateway System

A payment gateway simulation supporting **Credit Card, UPI, and Net Banking**. Different payment methods are managed using smart pointers.

**Concepts Used:** Abstraction, Abstract Classes, Pure Virtual Functions, Inheritance, Function Overriding, Runtime Polymorphism, Virtual Destructor, Smart Pointers, STL Vector.

### 3. Vehicle Fleet Management

A fleet management system containing **Truck, Delivery Van, and Delivery Bike**. Each vehicle displays its own details through overridden functions.

**Concepts Used:** Inheritance, Protected Members, Virtual Functions, Function Overriding, Runtime Polymorphism, Virtual Destructor, Smart Pointers, STL Vector.

### 🏦 Mini Project: Banking System

A menu-driven banking system supporting **Savings, Current, and Fixed Deposit Accounts**. Users can enter account details, deposit money, withdraw money, display account information, and calculate interest.

| Account Type    |    Interest |
| --------------- | ----------: |
| Savings Account |          4% |
| Current Account | No Interest |
| Fixed Deposit   | 7% per year |

**Concepts Used:** Inheritance, Abstraction, Abstract Classes, Pure Virtual Functions, Virtual Functions, Runtime Polymorphism, Virtual Destructor, Dynamic Memory Allocation, Menu-Driven Programming.

---

# 📕 Unit III – Programs

### 1. Shape Area System

A shape area calculator using an abstract `Shape` class and derived classes **Circle, Rectangle, and Triangle**. Each shape calculates its area using runtime polymorphism.

**Concepts Used:** Abstraction, Abstract Classes, Pure Virtual Functions, Inheritance, Function Overriding, Runtime Polymorphism, Virtual Destructor, Smart Pointers, STL Vector.

### 2. Complex Number Operations

A complex number program that uses operator overloading to perform addition, subtraction, multiplication, and comparison.

Example:

```cpp
num1 + num2
```

**Concepts Used:** Operator Overloading `+`, `-`, `*`, `==`, Constructors with Default Arguments, Constant Member Functions, Returning Objects by Value.

### 3. Data Checker

A validation utility that checks real-life input rules such as marks between 0 and 100, valid transaction amounts, and names containing only letters and spaces.

**Concepts Used:** Classes and Objects, Input Validation, String Handling, `isalpha()`, Range-Based For Loop, Constant Member Functions.

### 🎵 Mini Project: Media Player

A media player simulation containing **Audio, Video, and Image** types derived from a common `Media` base class. Each type implements its own **play, pause, stop, and show-details** operations.

**Concepts Used:** Inheritance, Protected Members, Virtual Functions, Function Overriding, Runtime Polymorphism, Virtual Destructor, Dynamic Memory Allocation, STL Vector of Base-Class Pointers.

---

# 📚 Concepts Covered

### Unit I

* Classes and Objects
* Encapsulation
* Constructors and Destructors
* Constant Member Functions
* Static Data Members and Static Member Functions
* Inheritance and Protected Members
* Virtual Functions and Function Overriding
* Dynamic Memory Allocation
* STL Vector

### Unit II

* Inheritance
* Abstraction
* Abstract Classes
* Pure Virtual Functions
* Function Overriding
* Runtime Polymorphism
* Virtual Destructors
* Smart Pointers
* STL Vector
* Dynamic Memory Allocation

### Unit III

* Abstract Classes
* Pure Virtual Functions
* Runtime Polymorphism
* Operator Overloading
* Default Arguments
* Input Validation
* String Handling
* Smart Pointers
* Dynamic Memory Allocation
* Real-Time Applications of OOP

---

# 📂 Repository Structure

```text
OOPS-Real-Time-Examples-I-II-III/
│
├── README.md
├── .gitignore
│
├── Unit_1/
│   ├── Program_01/
│   ├── Program_02/
│   ├── Program_03/
│   └── mini_project/
│
├── Unit_2/
│   ├── Program_01/
│   ├── Program_02/
│   ├── Program_03/
│   └── mini_project/
│
└── Unit_3/
    ├── Program_01/
    ├── Program_02/
    ├── Program_03/
    └── mini_project/
```

Each program folder contains its corresponding **C++ source code** and related files.

---

# ⚙️ How to Run

### 1. Clone the Repository

```bash
git clone <your-repository-url>
```

### 2. Open the Project

Open the repository in **Visual Studio Code, Code::Blocks, Visual Studio, or another C++ IDE**.

### 3. Compile the Program

```bash
g++ program.cpp -o program
```

### 4. Run the Program

**Windows:**

```bash
program.exe
```

**Linux/macOS:**

```bash
./program
```

---

# 🎯 Purpose

The purpose of this repository is to **learn, implement, and understand Object-Oriented Programming concepts in C++ through real-time examples**.

These programs demonstrate how OOP concepts can be applied to practical systems such as:

* 🌱 Smart Farming
* 🎓 Student Attendance
* 📦 Product Inventory , etc.
---
