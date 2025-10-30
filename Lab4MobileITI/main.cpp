#include <iostream>
using namespace std;

int getStudentsSum(int studentsSubjects[][4], int students, int subjects){
   int studentsSum;

   for(int row = 0; row < students; row++){
     for(int col = 0; col < subjects; col++){
       studentsSum += studentsSubjects[row][col];
     }
   }

   return studentsSum;
}

void printSubjectsAvg(int studentsSubjects[][4]){
   for(int col = 0; col < 4; col++){
     int subjectSum;
     for(int row = 0; row < 3; row++){
       subjectSum += studentsSubjects[row][col];
     }

     cout << "Subject " << col + 1 << " Avg = " << ((double)subjectSum / 3) << endl;
   }
}

void print1stRankedStudent(int studentsSubjects[][4], int students, int subjects){
   int studentsSum;

   int mostSum = -1;
   int numberOf1stRanked = 1;
   for(int row = 0; row < students; row++){

     int studentSum;
     for(int col = 0; col < subjects; col++){
       studentSum += studentsSubjects[row][col];
     }
     if(studentSum > mostSum){
        mostSum = studentSum;
        numberOf1stRanked = row + 1;
     }

     cout << "Student " << row + 1<< " sum = " << studentSum << endl;

     studentsSum += studentSum;
     studentSum = \0;
   }

   cout << "Student Number " << numberOf1stRanked << " is the 1st ranked student with total grades of " << mostSum << endl;
}

int main() {
 int students = 3, subjects = 4;
 int stdSubjects[3][4] ;

 for(int row = 0; row< students; row++){
   cout << "Enter Student " << row + 1 << " subjects grade :" << endl;
   for(int col = 0; col < subjects; col++){
     cout << "\tEnter subject " << (col + 1) << " grade :" << endl;
     cin >> stdSubjects[row][col];
   }
 }

  int studentsTotalSum = getStudentsSum(stdSubjects, students, subjects);

  cout << "total students sum = " << studentsTotalSum << endl;

  printSubjectsAvg(stdSubjects);

  print1stRankedStudent(stdSubjects, students, subjects);

 return 0;
}
