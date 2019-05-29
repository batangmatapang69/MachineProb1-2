/************************************************************************************************
Nowadays, software companies are producing classroom management software in order to aid school
instructors or professors in assessing their students’ academic performances in class.
As a newly built software company, you’ve decided to create your own version of a classroom
management software in a form of an electronic class record that will suit the given
specifications:
A. The program will let the instructor to input 50 student names and their respective scores for
each grade component.
B. The students’ raw grades will be computed according to the following grade components:
EXPERIMENTS (4) (20%): Each experiment is equal to 100 points and has a weight of 5%.
SKILLS TEST (4) (20%): Each experiment is equal to 100 points and has a weight of 5%.
MACHINE PROBLEMS (2) (20%): Each machine problem is equal to 100 points and has a weight
of 10%.
MAJOR EXAMINATIONS (2) (20%): Preliminary and Final Examinations are both equivalent to
100 points and are divided into two parts:
 Written Examination = Score / 30
 Practical Examination = Score / 70

************************************************************************************************/
#include <iostream>
#include <conio.h>
#include <iomanip> // Header file providing parametric manipulators, enables the use of setprecision() and setw()
using namespace std; // Invalidates the need to include an "std::" prefix
int main()
{
// Variable declarations
string students[50], name;
double grade[50], transGrade[50], score;
double Experiment[4], SkillsTest[4], MachineProblem[2], MajExam[2];
double ExperimentTot, SkillsTestTot, MPTot, MajorExamTot, PWritten, FWritten, PPract,
FPract;
double sumExperiment, sumSkillsTest, sumMachineProblem, aveExperiment, aveSkillsTest,
aveMachineProblem, sumPrelims, sumFinals;
// Loop statement to enable the user to input 50 names of students
for(int i = 0; i < 50; i++) //The number of name inputs can be modified by changing the number '50' in this statement
{
sumExperiment = 0, sumSkillsTest = 0, sumMachineProblem = 0, sumPrelims = 0,
sumFinals = 0; //Declaration of the floor limits of each variable needed for the computation of'the students' grades
//No negative values are accepted
cout << "\nEnter the name of Student\n " << i + 1 << ": "; cin >> students[i];
cout << endl;
for(int a = 0; a < 4; a++) { // Loop statement to enable the user to input the respective grades of the student in the four experiments
cout << "Enter Experiment " << a + 1 << " grade (out of 100): "; cin >>
Experiment[a];
sumExperiment += Experiment[a];
aveExperiment = sumExperiment / 4; //Formula in getting the average scores of the 4 experiments
}
cout << endl;
for(int b = 0; b < 4; b++) { // Loop statement to enable the user to input the respective grades of the student in the four skills tests
cout << "Enter Skills Test " << b + 1 << " grade (out of 100): "; cin >>
SkillsTest[b];
sumSkillsTest += SkillsTest[b];
aveSkillsTest = sumSkillsTest / 4; //Formula in getting the average scores of the 4 skills tests
}
cout << endl;
for(int c = 0; c < 2; c++) { // Loop statement to enable the user to input the respective grades of the student in the two machine problems
cout << "Enter Machine Problem " << c + 1 << " grade (out of 100): ";
cin >> MachineProblem[c];
sumMachineProblem += MachineProblem[c];
aveMachineProblem = sumMachineProblem / 2; //Formula in getting the average scores of the 2 machine problems
}
cout << endl;
cout << "Enter Preliminary Written Examination grade out of 30: "; cin >>
PWritten;
cout << "Enter Preliminary Practical Examination grade out of 70: "; cin >>
PPract;
sumPrelims = PWritten + PPract; //Summation of the prelim scores
cout << "Enter Final Written Examination grade out of 30: "; cin >>
FWritten;
cout << "Enter Final Practical Examination grade out of 70: "; cin >> FPract;
sumFinals = FWritten + FPract; //Summation of the finals scores
// Formula used:
ExperimentTot = ((aveExperiment * 100) / 100) * 0.20; // Formula in getting the weighted score of the experiments
SkillsTestTot = ((aveSkillsTest * 100) / 100) * 0.20; // Formula in getting the weighted score of the skills test
MPTot = ((aveMachineProblem * 100) / 100) * 0.20; // Formula in getting the weighted score of the machine problems
MajorExamTot = (((sumPrelims * 100) / 100) * 0.20) + (((sumFinals * 100) / 100) *
0.20); // Formula in getting the weighted score of the major exams
grade[i] = ExperimentTot + SkillsTestTot + MPTot + MajorExamTot; // An array storing the raw grade of the corresponding student
cout << "\nFinal Raw Grade: " << grade[i] << endl; // Outputting the raw and transmuted grade of the student
// Grade ranging from: 95.57 - 100
if(grade[i] <= 100 && grade[i] >= 95.57) {
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 1.00;
transGrade[i] = 1.00;
}
// Grade ranging from: 91.12 - 95.56
else if(grade[i] <= 95.56 && grade[i] >= 91.12) {
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 1.25;
transGrade[i] = 1.25;
}
// Grade ranging from: 86.68 - 91.11
else if(grade[i] <= 91.11 && grade[i] >= 86.68) {
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 1.50;
transGrade[i] = 1.50;
}
// Grade ranging from: 82.23 - 86.67
else if(grade[i] <= 86.67 && grade[i] >= 82.23) {
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 1.75;
transGrade[i] = 1.75;
}
// Grade ranging from: 77.79 - 82.22
else if(grade[i] <= 82.22 && grade[i] >= 77.79) {
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 2.00;
transGrade[i] = 2.00;
}
// Grade ranging from: 73.34 - 77.78
else if(grade[i] <= 77.78 && grade[i] >= 73.34) {
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 2.25;
transGrade[i] = 2.25;
}
// Grade ranging from: 68.90 - 73.33
else if(grade[i] <= 73.33 && grade[i] >= 68.90) {
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 2.50;
transGrade[i] = 2.50;
}
// Grade ranging from: 68.89 - 64.45
else if(grade[i] <= 68.89 && grade[i] >= 64.45) {
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 2.75;
transGrade[i] = 2.75;
}
// Grade ranging from: 60.00 - 64.44
else if(grade[i] <= 64.44 && grade[i] >= 60.00) {
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 3.00;
transGrade[i] = 3.00;
}
else { // Grade that is less than 60
cout << "Grade Point Average (GPA): " << fixed << setprecision(2) << 5.00;
transGrade[i] = 5.00;
}
}
cout << endl << endl;
//Outputs the name of the students and their respective grades in the different grade components as well as their raw ang transmuted grades in a form of a table
cout << "Name" << "\t\t" << "Final Grade" << "\t\t" << "Transmuted Grade" << "\t"
<< "Pass / Fail" << endl;
for (int i=0; i<50; i++)
{
cout << fixed << setprecision(2) << left;
cout << students[i] << "\t\t" << grade[i] << "\t\t\t" << transGrade[i] <<
"\t\t\t"; // Responsible in putting the values stored in the arrays to the table
if (transGrade[i] <= 3.0){
cout << "PASSED." << endl;
}
else
{
cout << "FAILED." << endl;
}
}
// Selection sorting, responsible for ranking the students
for(int i = 0; i < 50; i++) {
for(int j = i + 1; j < 50; j++) {
if(grade[i] < grade[j]) {
score = grade[i];
grade[i] = grade[j];
grade[j] = score;
name = students[i];
students[i] = students[j];
students[j] = name;
}
}
}cout << "\nTop Performing Students:\n" << endl; // Outputting the top 10 performing students 
for(int i = 0; i < 10; i++) { // Responsible in looping the output up until the 10th student
cout << "Top " << i + 1 << ": " << students[i] << endl;
}
cout << "\nCongratulations!" << endl;
_getch();
return 0;
}

