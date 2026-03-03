# User Authentication System (Qt C++)

A professional, modular user authentication system built with C++ and the Qt Framework. This project demonstrates modern software design patterns and a clean separation of concerns, making it suitable for integration into larger applications.

## 🚀 Features

- **User Registration**: Securely create new user accounts.
- **Login System**: Authenticate users with credential validation.
- **Session Management**: Handle window transitions seamlessly using a dedicated Window Manager.
- **Data Persistence**: Local storage of user data in JSON format.
- **Modern UI**: Clean and intuitive user interface with password visibility toggling.
- **Architecture**: Implements the **Singleton** pattern for global managers (`WindowManager`, `DataManager`).

## 🛠 Tech Stack

- **Language**: C++17
- **Framework**: Qt 6 (compatible with Qt 5)
- **Build System**: CMake
- **Storage**: JSON-based flat file persistence

## 📂 Project Structure

```text
MyApp/
├── include/           # Header files (.h)
├── src/               # Source files (.cpp)
├── ui/                # Qt Designer UI files (.ui)
├── CMakeLists.txt     # Build configuration
└── users.json         # Local data store (generated at runtime)
```

## 🏗 Key Components

### 1. Window Manager (Singleton)
Centralized control for navigating between the Login, Registration, and Main windows. It ensures that only one primary window is active at a time, preventing memory leaks and managing window lifecycles efficiently.

### 2. Data Manager (Singleton)
Handles all I/O operations related to user data. It encapsulates the logic for reading from and writing to the `users.json` file, providing a clean API for registration and authentication.

### 3. Modular UI Design
Each window is a self-contained module consisting of a UI description, a header, and a source file. This allows for easy maintenance and scalability.

## ⚙️ Building the Project

### Prerequisites
- Qt SDK (6.x recommended)
- CMake 3.16+
- A C++17 compatible compiler (MSVC, GCC, or Clang)

### Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/UserAuthSystem.git
   ```
2. Create a build directory:
   ```bash
   mkdir build && cd build
   ```
3. Configure and build:
   ```bash
   cmake ..
   cmake --build .
   ```

## 📝 Future Enhancements
- Password hashing (e.g., using BCrypt or Argon2).
- SQLite integration for more robust data handling.
- Input validation with regex for emails and password strength.
- Internationalization support (i18n).

---
*Developed for my professional portfolio to demonstrate expertise in C++, Qt, and software architecture.*
