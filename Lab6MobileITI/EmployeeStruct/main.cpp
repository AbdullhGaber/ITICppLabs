#include <iostream>
#include <cstring>
using namespace std;

struct Student{
  int id;
  char name[50];
  int grades[5];
};

void fillStudent(Student& stu){
   cout << "Enter Student ID : " << endl;
   cin >> stu.id;

   cout << "Enter Student Name : " << endl;
   cin >> stu.name;

   for(int i = 0; i < 5; i++){
     cout << "Enter Student Grade :" << (i+1) << endl;
     cin >> stu.grades[i];
   }
}

void printStudent(Student stu){
    cout << "Student ID : " << stu.id << endl;
    cout << "Student Name : " << stu.name << endl << endl;

    cout << "Student Grades : " << endl;
    cout << "=================" << endl;
   for(int i = 0; i < 5; i++){
     cout << "Student Grade " << (i+1) << " : " << stu.grades[i] << endl;
   }
}

void printSum(Student stu){
    int sum = 0;
    for(int i = 0; i < 5; i++){
     sum+= stu.grades[i];
   }
   cout << "sum of student grades = " << sum << endl;
}

int main() {
   //One student
   cout << "=== 1 Student ===" << endl;
   Student student;
   fillStudent(student);
   printStudent(student);
   printSum(student);

   //5 students
   cout << "=== 5 Students ===" << endl;
   Student students5[5];
   for(int i = 0; i < 5; i++) {
       cout << "Student " << i + 1 << ":" << endl;
       fillStudent(students5[i]);
   }

   for (int i = 0; i < 5; i++)
        printStudent(students5[i]);

   for(int i = 0; i < 5; i++) {
       cout << "Student " << i + 1 << ":" << endl;
       printSum(students5[i]);
   }

    //N students
    int n;
    cout << "Enter number of students : " << endl;
    cin >> n;
    Student *studentsN = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        fillStudent(studentsN[i]);
    }
    for (int i = 0; i < n; ++i)
        printStudent(studentsN[i]);

    for(int i = 0; i < 5; i++) {
       cout << "Student " << i + 1 << ":" << endl;
       printSum(studentsN[i]);
    }

    delete studentsN;
   return 0;
}
