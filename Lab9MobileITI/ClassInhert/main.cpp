#include <iostream>
#include <cstring>
using namespace std;

class Person{
  protected:
     int id;
     char name[50];

  public:
      Person(int id = 0, char name[] = ""){
        this->id = id;
        strcpy(this->name, name);
      }

      void setId(int id){this->id = id;}
      int getId(){return id;}

      void setName(char name[]){strcpy(this->name, name);}
      char* getName(){return name;}

      void print(){
        cout << "Person ID : " << id << endl;
        cout << "Person Name : " << name << endl;
      }
};

class Student : public Person{
   int grades[5];
   public:
       Student(int id = 0, char name[] = "", int grades[] = {}) : Person(id, name){
          for(int i = 0; i < 5; i++) this->grades[i] = grades[i];
       }

       void setGrades(int grades[]){
            for(int i = 0; i < 5; i++) this->grades[i] = grades[i];
       }

       int* getGrades(){return grades;}

       void print(){
         cout << "Student ID : " << id << endl;
         cout << "Student Name : " << name << endl;
       //grades
       }
};

class Instructor : public Person{
   char subject[20];

   public:
       Instructor(int id = 0, char name[] = "", char subject[] = {}) : Person(id, name){
          strcpy(this->subject, subject);
       }

       void setSubject(char subject[]){
            strcpy(this->subject, subject);
       }

       char* getSubject(){return subject;}

       void print(){
         cout << "Instructor ID : " << id << endl;
         cout << "Instructor Name : " << name << endl;
       //subject
       }
};

int main(){
  Person p(1, "Abdullh");
  Instructor inst(13,"Mahmoud", "C++ OOP");


  cout << "===Student Data===" << endl;
  p.print();

  cout << "\n===Instrctor Data===" << endl;
  inst.print();

  return 0;
}
