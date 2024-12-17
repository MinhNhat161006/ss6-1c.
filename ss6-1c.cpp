#include <stdio.h>

int main() {
    int number;     
    int i;         
    int sum = 0;       

    printf("Nhap vao 5 so nguyen:\n");
    for (i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0) {
            sum += number;
        }
    }

    printf("Tong cac so le la: %d\n", sum);

    return 0;
}
