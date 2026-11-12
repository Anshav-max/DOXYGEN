# Doxygen Assignment Project

## Compile and run (g++)

```bash
g++ -std=c++17 main.cpp Logger.cpp CalculationEngine.cpp -o calculator
./calculator
```

On Windows PowerShell, run:

```powershell
g++ -std=c++17 main.cpp Logger.cpp CalculationEngine.cpp -o calculator.exe
.\calculator.exe
```

## Generate documentation

Make sure Doxygen is installed, then run this command from this folder:

```bash
doxygen Doxyfile
```

HTML documentation:
`docs/html/index.html`

PDF:
1. Go to `docs/latex`.
2. Run `make` on Linux/WSL with a LaTeX toolchain installed.
3. The generated PDF is usually `refman.pdf`.

This is a generated learning example that follows the topics requested by the assignment. The provided assignment sheet names Logger.h, CalculationEngine.h, main.cpp, and a Doxyfile template; since the original source files were unavailable, this project includes matching `.cpp` implementation files as well.
