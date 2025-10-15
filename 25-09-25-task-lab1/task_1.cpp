#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id; 
    string name;
    string email;
};

int main() {
    const int MAX = 500;  
    Student student[MAX];
    int count; 

    cout << "How many students are there? MAX("<< MAX << "): ";
    cin >> count;

    if (count > MAX || count <= 0) {
        cout << "Invalid number of students. Try again.";
        return -1; 
    }

    cin.ignore(); 

    for (int i = 0; i < count; i++) {
        cout << "\n Student Information " << i + 1 << " ---\n";

        cout << "Student ID: ";
        cin >> student[i].id;
        cin.ignore();

        cout << "Student Name: ";
        getline(cin, student[i].name);

        cout << "Student Email: ";
        getline(cin, student[i].email);
    }

    // Display entered students
    cout << "\n==== Student Records ====\n";
    for (int i = 0; i < count; i++) {
        cout << "Student no. " << i + 1 << ":\n";
        cout << "  ID: " << student[i].id << "\n";
        cout << "  Name: " << student[i].name << "\n";
        cout << "  Email: " << student[i].email << "\n\n";
    }

    return 0;
}
