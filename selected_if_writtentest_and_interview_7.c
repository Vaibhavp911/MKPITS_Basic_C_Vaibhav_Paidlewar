#include <stdio.h>

int main() {
    int writtenTestMarks, interviewMarks;

    printf("Enter marks for the written test: ");
    scanf("%d", &writtenTestMarks);

    if (writtenTestMarks >= 50) {
        printf("Enter marks for the interview: ");
        scanf("%d", &interviewMarks);

        if (interviewMarks >= 50) {
            printf("SELECTED\n");
        } else {
            printf("REJECTED\n");
        }
    } else {
        printf("REJECTED\n");
    }

    return 0;
}
