#include <stdio.h>
#include <string.h>
struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};
void displayAll(struct Patient p[], int n) {
    printf("%-5s %-15s %-5s %-10s %-20s\n", "ID", "Name", "Age", "Blood", "Diagnosis");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-5d %-10s %-20s\n",
               p[i].patientID, p[i].name, p[i].age, p[i].bloodType, p[i].diagnosis);
    }
}
void searchByID(struct Patient p[], int n, int id) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].patientID == id) {
            printf("\nPatient Found:\n");
            printf("Name: %s\nAge: %d\nBlood Type: %s\nDiagnosis: %s\n",
                   p[i].name, p[i].age, p[i].bloodType, p[i].diagnosis);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nPatient not found.\n");
    }
}
int main() {
    struct Patient records[5];
    int searchID;
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Patient %d\n", i + 1);

        printf("iD: ");
        scanf("%d", &records[i].patientID);
        getchar(); // clear newline

        printf("Name: ");
        fgets(records[i].name, 50, stdin);
        records[i].name[strcspn(records[i].name, "\n")] = 0; // remove newline

        printf("Age: ");
        scanf("%d", &records[i].age);
        getchar();

        printf("blood Type: ");
        scanf("%s", records[i].bloodType);
        getchar();
        printf("diagnosis: ");
        fgets(records[i].diagnosis, 100, stdin);
        records[i].diagnosis[strcspn(records[i].diagnosis, "\n")] = 0;
    }
    displayAll(records, 5);
    printf("\nEnter Patient ID to search: ");
    scanf("%d", &searchID);
    searchByID(records, 5, searchID);
}
