#include <stdio.h>
int main() {
    char id[20], n[50];
    int s;
    float rc, tc, dh;
    printf("Enter Incident ID: ");
    scanf("%s", id);
    printf("Enter Analyst Name: ");
    scanf(" %[^\n]", n);
    printf("Enter Affected Systems: ");
    scanf("%d", &s);
    printf("Enter Recovery Cost: ");
    scanf("%f", &rc);
    printf("Enter Downtime in Hours: ");
    scanf("%f", &dh);
    tc = s * rc;
    printf("\n=================================\n");
    printf("      SECURITY INCIDENT REPORT\n");
    printf("=================================\n");
    printf("Incident ID      : %s\n", id);
    printf("Analyst          : %s\n", n);
    printf("Affected Systems : %d\n", s);
    printf("Recovery Cost    : %.2f\n", rc);
    printf("Total Cost       : %.2f\n", tc);
    printf("Downtime         : %.2f hours\n", dh);
    printf("=================================\n");
    return 0;
}
