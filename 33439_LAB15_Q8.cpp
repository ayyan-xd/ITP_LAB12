#include <iostream>
#include <string>
using namespace std;
struct Address { string street, city, state, zip; };
struct Course { string name; float gpa; };
struct Student { 
    int id; 
    float cgpa; 
    Address addr; 
    Course courses[3]; 
};
int main() {
    int n;
    cout << "Enter number of students (max 50): ";
    cin >> n;
    Student s[50];
    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i+1 <<"\n";
        cout << "ID: "; 
        cin >> s[i].id;
        cout << "Overall CGPA: ";
        cin >> s[i].cgpa; 
        cin.ignore();
        cout << "Address (Street, City, State, Zip): " << endl;
        getline(cin, s[i].addr.street); getline(cin, s[i].addr.city);
        getline(cin, s[i].addr.state); getline(cin, s[i].addr.zip);
for(int j = 0; j < 3; j++) {
            cout << "Course " << j+1 << " Name: "; getline(cin, s[i].courses[j].name);
            cout << "GPA: "; cin >> s[i].courses[j].gpa; cin.ignore();
        }
    }
    cout << "STUDENT RECORD\n";
   for(int i = 0; i < n; i++) {
        cout << "Student ID: " << s[i].id << " | CGPA: " << s[i].cgpa << "\n";
        cout << "Location: " << s[i].addr.city << ", " << s[i].addr.state << "\n";
    }
return 0;
}