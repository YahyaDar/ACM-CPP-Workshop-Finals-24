#include <iostream>
#include <fstream>  // For file operations

using namespace std;

int main() {
    // File name
    string filename = "example.txt";

    // 1. Writing to a file (creates the file if it doesn't exist)
    ofstream outFile;
    outFile.open(filename);  // Open for writing (overwrites the file if it exists)
    if (outFile.is_open()) {
        outFile << "Hello, this is a test file.\n";  // Writing to the file
        outFile << "This is the second line.\n";
        outFile.close();  // Close the file after writing
        cout << "File written successfully!" << endl;
    } else {
        cout << "Failed to open the file for writing!" << endl;
    }

    // 2. Reading from a file
    ifstream inFile;
    inFile.open(filename);  // Open the file for reading
    if (inFile.is_open()) {
        string line;
        cout << "Reading the file content:\n";
        while (getline(inFile, line)) {  // Read the file line by line
            cout << line << endl;
        }
        inFile.close();  // Close the file after reading
    } else {
        cout << "Failed to open the file for reading!" << endl;
    }

    // 3. Appending to the file (if the file already exists, it adds content at the end)
    ofstream appendFile;
    appendFile.open(filename, ios::app);  // Open in append mode
    if (appendFile.is_open()) {
        appendFile << "This line is appended to the file.\n";  // Append text
        appendFile.close();  // Close the file after appending
        cout << "Text appended to file successfully!" << endl;
    } else {
        cout << "Failed to open the file for appending!" << endl;
    }

    // 4. Reading the updated file content
    inFile.open(filename);  // Re-open the file for reading again
    if (inFile.is_open()) {
        string line;
        cout << "Reading the updated file content:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();  // Close the file after reading
    } else {
        cout << "Failed to open the file for reading!" << endl;
    }

    return 0;
}
