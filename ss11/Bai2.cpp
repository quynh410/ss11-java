#include <stdio.h>

int main() {
    int n; // Số lượng phần tử trong mảng

    // Nhập số lượng phần tử của mảng
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    // Kiểm tra nếu số lượng phần tử <= 0
    if (n <= 0) {
        printf("Không có phần tử nhỏ nhất\n");
        return 0;
    }

    int arr[n]; // Khai báo mảng

    // Nhập các phần tử cho mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tìm phần tử nhỏ nhất trong mảng
    int min = arr[0]; // Giả sử phần tử đầu tiên là nhỏ nhất
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // In ra phần tử nhỏ nhất
    printf("Phần tử nhỏ nhất là: %d\n", min);

    return 0;
}
