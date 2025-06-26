# FILE-MANAGEMENT-TOOL

COMPANY: CODTECH IT SOLUTIONS

NAME: PRACHI

INTERN ID: CT04DN1815

DOMAIN:  C++ 

DURATION: 4 WEEKS

MENTOR: NEELA SANTOSH

> The File Management Tool developed in C++ is a simple yet effective application that demonstrates the fundamental concepts of file handling using standard C++ libraries. This project is a part of the internship deliverables for CodTech and focuses on showcasing how to perform essential file operations like reading, writing, and appending text data in a C++ environment.

-> File handling is a crucial part of software development. It allows programs to store, retrieve, and manipulate data across sessions. In C++, file operations are handled through a set of standard library classes such as ifstream (input file stream), ofstream (output file stream), and fstream (file stream for both input and output). This tool combines all these classes to provide an interactive menu-based program that allows users to manage a file called data.txt.

-> The core functionality of the tool is divided into three main operations:

-> Write to File: This operation allows the user to enter text data that will be written to the file. If the file already exists, this option will overwrite the existing contents. It uses the ofstream class to perform the write operation.

-> Append to File: This option lets the user add new text at the end of the file without erasing the current content. This is handled using ofstream with the append (ios::app) mode.

-> Read from File: This feature reads and displays the contents of the file line by line using the ifstream class. It helps the user verify what data is currently stored in the file.

-> The user interface is entirely text-based and runs in the console. When the program is executed, the user is presented with a simple menu to choose any of the three options. Based on the user’s input, the corresponding file operation is performed. The file data.txt is created automatically in the project directory if it doesn’t exist already.

-> The project follows a clean and modular approach where each operation is encapsulated in its own function. This makes the code easy to read, understand, and maintain. Additionally, proper error handling is implemented to check whether the file was opened successfully before performing any operations. This prevents unexpected crashes and enhances the user experience.

-> This tool is designed to work on any platform that supports a C++ compiler, such as g++, and is ideal for running in Visual Studio Code or any other modern development environment. It serves as a basic yet powerful introduction to file management in C++ and can be expanded further to include features like file deletion, search, or line-wise editing.

-> Overall, this File Management Tool is a strong demonstration of practical file handling skills in C++. It meets the expectations of the internship task by providing a functional and interactive application that showcases core file I/O concepts in a real-world scenario. It also helps in strengthening the understanding of how persistent data storage works in programming.

OUTPUT :

