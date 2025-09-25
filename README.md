# 🏘️ Integrated Barangay Management & Information System (IBMIS)

---

This is my first-year Computer Science project — a simple Integrated Barangay Management & Information System (IBMIS) developed in C language.
It simulates a small database system for managing community member records, such as personal details, contact numbers, age, and purok (zone) assignments.

---

## ✨ Features

### ✅ Main Menu

- Add New Data
- Search Data Record
- View All Data
- Exit

### ✅ New Data

- Register a new barangay member
- Checks for duplicate names before registration

### ✅ Search

- Search by Member Name
- Search by Purok (Zone)

### ✅ View All Data

- Displays all registered members grouped by purok (zones 1–7)

---

## 🛠️ Tech Stack

- Language: C
- Libraries Used:
  - <stdio.h> → Input/Output operations
  - <string.h> → String manipulation
  - <stdlib.h> → System utilities
  - <conio.h> → For getch() (Windows-specific, may require changes on Linux/Mac)

---

## ▶️ How to Run

1. Save the code as ibmis.c

2. Open terminal/command prompt and compile:

```bash
    gcc ibmis.c -o ibmis
```

3. Run the program:

```bash
    ./ibmis
```

### ⚠️ Note for Linux/Mac users:

getch() is not available by default. Replace it with getchar() or similar for compatibility.

---

## 📂 Data Structure

The project uses a struct array to store up to 100 members:

```c
struct IBMIS {
    char fullName[50];
    int purok;
    char phoneNumber[11];
    int age;
    char gender[2];
    char birthDay[30];
    int memberNum;
} memberData[100];
```

## 🚀 Future Improvements

- [ ] Replace getch() for better OS compatibility
- [ ] Add file handling (save/load records permanently)
- [ ] Add update & delete functionality
- [ ] Improve input validation (e.g., valid phone number, age, gender)
- [ ] Build a GUI or Web interface version

---

## 📖 Authors

👤 Roland Amoguis

👤 Ryan Jay Polinar

📚 First-Year Computer Science Student

📌 Project: Integrated Barangay Management & Information System

---
