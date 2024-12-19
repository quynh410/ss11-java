#include <stdio.h>

int main() {
    int n; // Số lượng phần tử trong mảng

    // Nhập số lượng phần tử của mảng
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    // Kiểm tra nếu số lượng phần tử <= 0
    if (n <= 0) {
        printf("Không có giá trị lớn nhất\n");
        return 0;
    }

    int arr[n]; // Khai báo mảng

    // Nhập các phần tử cho mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tìm phần tử lớn nhất trong mảng
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // In ra phần tử lớn nhất
    printf("Phần tử lớn nhất là: %d\n", max);

    return 0;
}
