#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int age;
    float gpa;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin >> age; 
    cout << "Enter your gpa: " <<endl;
    cin >> gpa;
    ofstream fout("studentData.txt");
    
    fout << name << endl;
    fout << age << endl;
    fout << gpa << endl;
    fout.close();

    // Read data from file
    ifstream fin("studentData.txt");
    
    while (fin >> name >> age >> gpa) {
        cout << "Name:  " << name << "     Age:" << " " << age << "     GPa: " << " " << gpa << endl;
    }
    fin.close();

    return 0;
}
