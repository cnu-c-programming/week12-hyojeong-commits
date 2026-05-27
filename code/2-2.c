#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[64];
    int score;
} Student;

int main(int argc, const char* argv[]) {
    FILE* fp = fopen("student.txt", "r");
    if (fp == NULL) return 0;

    int count = 0;
    Student students[64];

    while (fscanf(fp, "%s %d", students[count].name, &students[count].score) != EOF) {
        count++;
        if (count >= 64) break; // 배열 범위 초과 방지
    }

    if (count == 0) {
        fclose(fp);
        return 0;
    }

    int ma
    float avg = 0;
    int sum = 0;

    for (int i = 0; i < count; i++) {
        if (students[i].score > max) {
            max = students[i].score;
        }
        sum += students[i].score;
    }
    avg = (float)sum / count;

    printf("max: %d\n", max);
    printf("avg: %.2f\n", avg);

    fclose(fp);
    return 0;
}
