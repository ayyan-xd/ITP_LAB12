#include <iostream>
#include <string>
using namespace std;
struct Address {
    string street, city, state, zip;
};
struct Course {
    string name;
    float gpa;
};
struct Student {
    float cgpa;
    Address addr;
    Course courses[5]; 
};
int main() {
    Student s[2];
    int n;
cout << "Enter number of courses (max 5) : ";
    cin >> n;
for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << "\n";
        cout << "Enter CGPA : ";
        cin >> s[i].cgpa;
        cin.ignore(); 
        cout << "Enter Street, City, State, Zip : \n";
        getline(cin, s[i].addr.street);
        getline(cin, s[i].addr.city);
        getline(cin, s[i].addr.state);
        getline(cin, s[i].addr.zip);
        for (int j = 0; j < n; j++) {
            cout<<"Course " << j + 1 << " Name: ";
            getline(cin, s[i].courses[j].name);
            cout<<"Course " << j + 1 << " GPA: ";
            cin>>s[i].courses[j].gpa;
            cin.ignore();
        }
    }
    cout << "\nResults\n";
    if (s[0].cgpa > s[1].cgpa) 
        cout << "Highest CGPA: Student 1 (" << s[0].cgpa << ")\n";
    else if (s[1].cgpa > s[0].cgpa) 
        cout << "Highest CGPA: Student 2 (" << s[1].cgpa << ")\n";
    else 
        cout << "Both have equal CGPA.\n";
for (int j = 0; j < n; j++) {
        cout << "Course: " << s[0].courses[j].name << " : ";
        if (s[0].courses[j].gpa > s[1].courses[j].gpa)
            cout << "Student 1 is higher\n";
        else if (s[1].courses[j].gpa > s[0].courses[j].gpa)
            cout << "Student 2 is higher\n";
        else
            cout << "Equal\n";
    }

    return 0;
}
