#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string& filename) {
    ofstream outFile(filename); // overwrite mode
    if (!outFile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    cin.ignore(); // clear input buffer
    string line;
    cout << "Enter text to write (end with a blank line):\n";
    while (true) {
        getline(cin, line);
        if (line.empty()) break;
        outFile << line << endl;
    }

    outFile.close();
    cout << "File written successfully.\n";
}

void appendToFile(const string& filename) {
    ofstream outFile(filename, ios::app); // append mode
    if (!outFile) {
        cerr << "Error opening file for appending.\n";
        return;
    }

    cin.ignore(); // clear input buffer
    string line;
    cout << "Enter text to append (end with a blank line):\n";
    while (true) {
        getline(cin, line);
        if (line.empty()) break;
        outFile << line << endl;
    }

    outFile.close();
    cout << "File appended successfully.\n";
}

void readFromFile(const string& filename) {
    ifstream inFile(filename); // read mode
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    string line;
    cout << "\nContents of " << filename << ":\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

int main() {
    string filename = "data.txt";
    int choice;

    do {
        cout << "\n===== File Manager =====\n";
        cout << "1. Write to file\n";
        cout << "2. Append to file\n";
        cout << "3. Read from file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
