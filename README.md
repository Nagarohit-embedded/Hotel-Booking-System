#  Hotel Booking System (C)

##  Overview

A **menu-driven hotel booking system** developed in C that simulates real-world room allocation.
The application allows users to book, view, and cancel room reservations while maintaining dynamic room availability.

---

##  Key Features

*  Book **Single** and **Double** rooms
*  Dynamic room allocation with unique room numbers
*  View all booking records
*  Cancel bookings with automatic room update
*  Input validation for reliable execution
*  Menu-driven interface for better user interaction

---

##  Concepts Used

* Structures (`struct`) for data organization
* Arrays for storing multiple bookings
* Global variables for shared state management
* Functions for modular design
* String handling (`strcmp`, `strcpy`, `fgets`)
* Control statements (`if-else`, `switch`, loops`)

---

##  Tech Stack

* **Language:** C
* **Libraries:** `stdio.h`, `string.h`
* **Platform:** Console-based application

---

##  System Design

* Maintains separate counters for:

  * Single rooms
  * Double rooms
* Assigns:

  * Single rooms → starting from `1`
  * Double rooms → starting from `101`
* Stores customer details:

  * Name
  * Age
  * Room number
  * Room type

---

##  How to Run

### 1. Compile

```bash
gcc hotel.c -o hotel
```

### 2. Execute

```bash
./hotel
```

---

##  Sample Workflow

1. Select room type
2. Enter number of rooms
3. Provide user details
4. System allocates rooms dynamically
5. View or cancel bookings anytime

---

##  Future Enhancements

* File handling (persistent storage)
* Login/authentication system
* GUI-based interface
* Payment integration
* Room availability dashboard

---

##  Learning Outcome

This project demonstrates:

* Practical implementation of **data structures in C**
* Handling **real-world logic using procedural programming**
* Writing **modular and maintainable code**

---

##  Author

**Naga Rohit Anudeep N**
Electronics & Communication Engineering
Aspiring Embedded Systems Engineer

---
