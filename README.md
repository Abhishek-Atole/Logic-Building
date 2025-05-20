# Logic Building in C

Welcome to the **Logic Building in C** repository!  
This repository contains a comprehensive collection of C,C++,Java programs, exercises, and documentation designed to help learners build strong programming logic and problem-solving skills using the C,C++,Java language.

---

## 📁 Repository Structure

- [`src/`](src/)  
  All C source code files for logic-building exercises and examples.

- [`docs/`](docs/)  
  Course notes, templates, and additional documentation.  
  See [01 - How to Write the code .md](docs/01%20-%20How%20to%20Write%20the%20code%20.md) for a general C program template.

- [`bin/`](bin/)  
  Compiled binaries (created by the build process, not tracked in git).

- [`.github/workflows/`](.github/workflows/)  
  GitHub Actions workflows for automated CI builds.

- [`.vscode/`](.vscode/)  
  Visual Studio Code configuration for debugging and development.

- [`organize_repo.bat`](organize_repo.bat)  
  Script to organize and clean up the repository.

- [`setup_repo.bat`](setup_repo.bat)  
  Script to initialize all standard files and folders for a professional setup.

---

## 🚀 Getting Started

### Prerequisites

- GCC or any C compiler
- `make` (for build automation, optional but recommended)

### Build All Programs

```sh
make
```

This will compile all `.c` files in [`src/`](src/) and place the executables in [`bin/`](bin/).

### Run an Example

```sh
./bin/program01
```

Replace `program01` with the desired program name.

---

## 📝 Documentation

- General C program template and logic-building steps:  
  [docs/01 - How to Write the code .md](docs/01%20-%20How%20to%20Write%20the%20code%20.md)
- Additional documentation and notes are available in the [`docs/`](docs/) folder.

---

## 🤖 Continuous Integration

This repository uses [GitHub Actions](.github/workflows/c-cpp.yml) to automatically build all C programs on every push and pull request.

---

## 🤝 Contributing

Pull requests are welcome!  
If you have suggestions for improvements or new exercises, feel free to open an issue or submit a PR.

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

Happy Coding! 🚀