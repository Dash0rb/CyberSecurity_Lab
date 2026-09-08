#include <stdio.h>
int main() {
    char n[50], id[20];
    int cl, tl;
    float q, a, p, lp, ts;
    printf("Enter Student Name: ");
    scanf(" %[^\n]", n);
    printf("Enter Student ID: ");
    scanf("%s", id);
    printf("Enter Completed Labs: ");
    scanf("%d", &cl);
    printf("Enter Total Labs: ");
    scanf("%d", &tl);
    printf("Enter Quiz Marks: ");
    scanf("%f", &q);
    printf("Enter Assignment Marks: ");
    scanf("%f", &a);
    printf("Enter Project Marks: ");
    scanf("%f", &p);
    lp = ((float)cl / tl) * 100;
    ts = q + a + p;
    printf("\n========================================\n");
    printf("       CYBERSECURITY TRAINING REPORT\n");
    printf("========================================\n");
    printf("Student Name         : %s\n", n);
    printf("Student ID           : %s\n", id);
    printf("Completed Labs       : %d\n", cl);
    printf("Total Labs           : %d\n", tl);
    printf("Lab Completion       : %.2f%%\n", lp);
    printf("Quiz Marks           : %.2f\n", q);
    printf("Assignment Marks     : %.2f\n", a);
    printf("Project Marks        : %.2f\n", p);
    printf("Total Academic Score : %.2f\n", ts);
    printf("========================================\n");
    return 0;
}
