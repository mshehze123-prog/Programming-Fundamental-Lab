#include <stdio.h>
#include <string.h>
struct Department {
    char deptCode[10];
    char deptName[50];
};
struct Course {
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};
void findByDept(struct Course catalog[], int size, char searchCode[]) {
    int found = 0;
    printf("\ncourses in department %s:\n", searchCode);
    for (int i = 0; i < size; i++) {
        if (strcmp(catalog[i].dept.deptCode, searchCode) == 0) {
            printf("- %s: %s (%d credit Hours)\n",
                   catalog[i].courseCode, catalog[i].courseName, catalog[i].creditHours);
            found = 1;
        }
    }
    if (!found) {
        printf("No courses found for this department.\n");
    }
}

int main() {
    struct Course catalog[3];
    char searchCode[10];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Course %d\n", i + 1);

        printf("Course Code: ");
        scanf("%s", catalog[i].courseCode);
        getchar();

        printf("Course Name: ");
        fgets(catalog[i].courseName, 60, stdin);
        catalog[i].courseName[strcspn(catalog[i].courseName, "\n")] = 0;

        printf("Credit Hours: ");
        scanf("%d", &catalog[i].creditHours);

        printf("Dept Code: ");
        scanf("%s", catalog[i].dept.deptCode);
        getchar();

        printf("Dept Name: ");
        fgets(catalog[i].dept.deptName, 50, stdin);
        catalog[i].dept.deptName[strcspn(catalog[i].dept.deptName, "\n")] = 0;
    }
    for (int i = 0; i < 3; i++) {
        printf("Course: %s | Name: %s | Credits: %d | Dept: %s (%s)\n",
               catalog[i].courseCode,
               catalog[i].courseName,
               catalog[i].creditHours, 
               catalog[i].dept.deptName,
               catalog[i].dept.deptCode);
    }

    printf("\nEnter Department Code to search: ");
    scanf("%s", searchCode);
    findByDept(catalog, 3, searchCode);
}
