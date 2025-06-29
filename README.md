# CPP-VSC-Sample

A sample C++ project configured for Visual Studio Code with build tasks and debugging support.

## Project Structure

```
CPP-VSC-Sample/
├── main.cpp            # Main C++ source file
├── VoltageCalc.cpp     # Voltage calculation program
...                     # Add your own cpp files
├── README.md           # This file
└── .vscode/            # VS Code configuration files
    └── tasks.json      # Build tasks configuration for windows environment
```

## Prerequisites

### Required Software
- **MSYS2/MinGW-w64**: C++ compiler toolchain
  - Installation path: `C:\msys64\ucrt64\bin\g++.exe`
  - Download from: [MSYS2 Official Website](https://www.msys2.org/)
- **Visual Studio Code**: Code editor
  - Download from: [VS Code Official Website](https://code.visualstudio.com/)

### Required VS Code Extensions

Install the following extensions for the best C++ development experience:

1. **C/C++ Extension Pack** (`ms-vscode.cpptools-extension-pack`)
   - Includes C/C++ IntelliSense, debugging, and code browsing
   - Essential for C++ development in VS Code

2. **C/C++** (`ms-vscode.cpptools`)
   - Core C++ language support
   - Syntax highlighting, IntelliSense, and debugging

3. **C/C++ Themes** (`ms-vscode.cpptools-themes`)
   - Enhanced syntax highlighting themes for C++

4. **CMake Tools** (`ms-vscode.cmake-tools`) - Optional
   - For projects using CMake build system

### Installation Commands

You can install the required extensions using VS Code's command palette or terminal aassuming your have installed visual studio code correctly:

```bash
# Install C/C++ Extension Pack (includes core C++ extension)
code --install-extension ms-vscode.cpptools-extension-pack

# Install additional extensions
code --install-extension ms-vscode.cpptools-themes
```

## Building and Running

### Method 1: Using VS Code Build Task (Recommended)

1. Open the project in VS Code
2. Open the C++ file you want to compile (e.g., `main.cpp`)
3. Use the build task:
   - Press `Ctrl+Shift+P` to open Command Palette
   - Type "Tasks: Run Build Task" and select it
   - Choose "C/C++: g++.exe build active file"

### Method 2: Using Terminal

Open the integrated terminal in VS Code (`Ctrl+`` ` `) and run:

```powershell 
# Compile main.cpp or the corresponding name of the cpp file
g++ -fdiagnostics-color=always -g main.cpp -o main.exe

# Run the executable or the corresponding name of the cpp file
.\main.exe
```

## Configuration

The project includes a `.vscode/tasks.json` file with pre-configured build tasks:

- **Task**: "C/C++: g++.exe build active file"
- **Compiler**: `C:\msys64\ucrt64\bin\g++.exe`
- **Flags**: 
  - `-fdiagnostics-color=always`: Colored compiler output
  - `-g`: Include debugging information

## Troubleshooting

### Common Issues

1. **Compiler not found**
   - Ensure MSYS2 is installed and `g++.exe` is in your PATH
   - Verify the compiler path in `.vscode/tasks.json`

2. **VS Code doesn't recognize C++ syntax**
   - Install the C/C++ extension pack
   - Reload VS Code window

3. **Build task not available**
   - Ensure you have a C++ file open in the editor
   - Check that `.vscode/tasks.json` exists and is properly configured

### Useful VS Code Shortcuts

- `Ctrl+Shift+B`: Run build task
- `F5`: Start debugging
- `Ctrl+F5`: Run without debugging
- `Ctrl+`` ` `: Open integrated terminal

## Getting Started

1. Clone or download this repository
2. Install the required VS Code extensions
3. Open the project folder in VS Code
4. Open `main.cpp` and press `Ctrl+Shift+B` to build
5. Run the generated `.exe` file

## Learning Resources

- [VS Code C++ Documentation](https://code.visualstudio.com/docs/languages/cpp)
- [C++ Reference](https://cppreference.com/)
- [MSYS2 Documentation](https://www.msys2.org/docs/)
 
