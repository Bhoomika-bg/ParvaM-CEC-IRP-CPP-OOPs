#include <iostream>
#include <fstream> // Header File for Handling the Files(Read/write)
using namespace std;

int main()
{
    // fstream headerfile provides 3 classes:
    // fstreambase
    // ifstream(it is derived by fstreambase)
    // ofstream(it is derived by fstreambase)
    // writing in the file
    ofstream out("sample.txt");
    string name;
    int age;

    cout << "Enter your name and age: ";
    cin >> name >> age;
    out << "Hello " << name << "!" << endl;
    cout << "You're " << age << "years old. " << endl;
    out.close();

    ifstream read("abc.txt");
    string line;
    cout << "File contains: " << line << endl;
    while (getline(read, line))
    {
        cout << line << endl;
    }
    getline(read, line);
    cout << "File Contains: " << line << endl;
    read.close();
}