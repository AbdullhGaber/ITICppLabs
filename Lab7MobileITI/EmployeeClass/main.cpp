#include <iostream>
#include <cstring>
using namespace std;

class Student{
  private :
    int id;
    char name[50];
    int grades[5];

  public:
    Student(int id, char name[], int grades[]){
      this->id = id;
      strcpy(this->name, name);
      for(int i = 0; i < 5; i++){
        this->grades[i] = grades[i];
      }
  }

  Student(int id, char name[]){
      this->id = id;
      strcpy(this->name, name);
      for(int i = 0; i < 5; i++){
        this->grades[i] = 0;
      }
  }

  Student(int id){
      this->id = id;
      strcpy(this->name, "");
      for(int i = 0; i < 5; i++){
        this->grades[i] = 0;
      }
  }

  Student(){
      this->id = 1;
      strcpy(this->name, "No Name");
      for(int i = 0; i < 5; i++){
        this->grades[i] = 0;
      }
  }

  void setId(int id){this->id = id;}
  int getId(){return this->id;}

  void setName(char name[]){strcpy(this->name,name);}
  char* getName(){return this->name;}


  void setGrades(int* grades){
    for(int i = 0; i < 5; i++){
        this->grades[i] = grades[i];
    }
  }

  int* getGrades(){return grades;}
};

Student fillStudent(){
   int id;
   char name[50];
   int grades[5];

   cout << "Enter Student ID : " << endl;
   cin >> id;

   cout << "Enter Student Name : " << endl;
   cin >> name;

   for(int i = 0; i < 5; i++){
     cout << "Enter Student Grade :" << (i+1) << endl;
     cin >> grades[i];
   }

   Student s(id, name, grades);

   return s;
}

void printStudent(Student stu){
    cout << "Student ID : " << stu.getId() << endl;
    cout << "Student Name : " << stu.getName() << endl << endl;

    cout << "Student Grades : " << endl;
    cout << "=================" << endl;

   int* grades = stu.getGrades();

   for(int i = 0; i < 5; i++){
     cout << "Student Grade " << (i+1) << " : " << grades[i] << endl;
   }
}

void printSum(Student stu){
    int sum = 0;

    int* grades = stu.getGrades();
    for(int i = 0; i < 5; i++){
     sum+= grades[i];
   }
   cout << "sum of student grades = " << sum << endl;
}

int main() {
   //One student
   cout << "=== 1 Student ===" << endl;
   Student student = fillStudent();
   printStudent(student);
   printSum(student);

   //5 students
   cout << "=== 5 Students ===" << endl;
   Student students5[5];
   for(int i = 0; i < 5; i++) {
       cout << "Student " << i + 1 << ":" << endl;
       students5[i] = fillStudent();
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

    if(studentsN != NULL){
        for(int i = 0; i < n; i++) {
          cout << "Student " << i + 1 << ":" << endl;
          studentsN[i] = fillStudent();
        }
        for(int i = 0; i < n; ++i)
            printStudent(studentsN[i]);

        for(int i = 0; i < n; i++) {
           cout << "Student " << i + 1 << ":" << endl;
           printSum(studentsN[i]);
    }

    delete studentsN;

   }
   return 0;
}
