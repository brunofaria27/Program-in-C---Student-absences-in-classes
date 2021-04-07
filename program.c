#include <stdio.h>

int main(void) {
  /************************************************
  ************PROGRAM VARIABLES********************
  ************************************************/

  // Variables for class identification
  char set;
  // Number of students enrolled
  int studentnumbers = 0;
  int registration = 0;
  // Absent or present (situation)
  char situation;
  // absentee, attendance and number of classes with absenteeism greater than 5%
  int absentees = 0;
  int current = 0;
  int bigger5 = 0;
  // Percentage of absentees
  double percentage = 0.0;

  /************************************************
  ************REPEAT TIE - 14 CLASSES**************
  ************************************************/

  for (int i = 0; i < 14; i++) { // Start for to do the repetition 14 times (14 classes)
    printf("Class identification: ");
    scanf("%s", &set);
    printf("Number of students enrolled in the class: ");
    scanf("%i", &studentnumbers);

    /************************************************
    **********REPEAT TIE - SPECIFIC CLASSES**********
    ************************************************/

    for(int j = 0; j < studentnumbers; j++) {
    
    if (set == 'A' || set == 'a') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class A get enrollment and absent  
    

    if (set == 'B' || set == 'b') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class B get enrollment and absent  
    

    if (set == 'C' || set == 'c') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class C get enrollment and absent  
    

    if (set == 'D' || set == 'd') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class D get enrollment and absent  
    

    if (set == 'E' || set == 'e') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class E get enrollment and absent  
    

    if (set == 'F' || set == 'f') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class F get enrollment and absent  
    

    if (set == 'G' || set == 'g') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class G get enrollment and absent  
    

    if (set == 'H' || set == 'h') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class H get enrollment and absent  
    

    if (set == 'I' || set == 'i') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class I get enrollment and absent  
    

    if (set == 'J' || set == 'j') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class J get enrollment and absent  
    

    if (set == 'K' || set == 'k') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class K get enrollment and absent  
    

    if (set == 'L' || set == 'l') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class L get enrollment and absent  
    

    if (set == 'M' || set == 'm') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class M get enrollment and absent  
    

    if (set == 'N' || set == 'n') {
    printf("Enter the student's enrollment: ");
    scanf("%i", &registration);
    printf("Enter the status of student A (Absent) or P (Present): ");
    scanf("%s", &situation);
      if (situation == 'A' || situation == 'a') {
        absentees++;
      } // Absent counter end
      else {
        current++;
      } // Current counter end
    } // End if class N get enrollment and absent  
    } // End for to get registration and absent
    
    /************************************************
    *************PERCENTAGE CALCULATION**************
    ************************************************/

    percentage = (100 * absentees)/studentnumbers;
    
    printf("The percentage of students who missed class %c is: %.2lf\n", set, percentage);
    printf("\n\n");

    if (percentage > 5) {
      bigger5++;
    } // End counter classes with absences greater than 5%
  } // End for to do the repetition 14 times (14 classes)

  /************************************************
  *********PRINT CLASSES WITH 5% FAULTS************
  ************************************************/
  
  printf("The number of classes that have a number of absent students greater than 5/100 is: %i", bigger5);

 
  return 0;
}
