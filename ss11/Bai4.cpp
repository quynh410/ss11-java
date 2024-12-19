#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int score;
} Student;

int main() {
    int n;

    printf("Nhập số lượng sinh viên: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Không có sinh viên nào.\n");
        return 0;
    }

    Student students[n];

    printf("Nhập thông tin sinh viên (tên và điểm):\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh viên %d:\n", i + 1);
        printf("  Tên: ");
        scanf(" %[^\n]", students[i].name);
        printf("  Điểm: ");
        scanf("%d", &students[i].score);
    }

    char searchName[50];
    printf("Nhập tên sinh viên cần tìm: ");
    scanf(" %[^\n]", searchName);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Điểm của %s là: %d\n", students[i].name, students[i].score);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Không tìm thấy sinh viên.\n");
    }

    return 0;
}
