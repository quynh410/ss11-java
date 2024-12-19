#include <stdio.h>

int main() {
    int n; // Số lượng phần tử của mảng

    // Nhập số lượng phần tử của mảng
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    // Kiểm tra nếu số lượng phần tử <= 0
    if (n <= 0) {
        printf("Mảng không có phần tử đối xứng\n");
        return 0;
    }

    int arr[n]; // Khai báo mảng

    // Nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Biến để kiểm tra có phần tử đối xứng hay không
    int hasSymmetric = 0;

    // Kiểm tra các phần tử đối xứng
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - 1 - i]) {
            printf("Cặp đối xứng: (%d, %d)\n", arr[i], arr[n - 1 - i]);
            hasSymmetric = 1; // Có ít nhất một cặp đối xứng
        }
    }

    // Nếu không có cặp đối xứng nào
    if (!hasSymmetric) {
        printf("Không có phần tử đối xứng trong mảng\n");
    }

    return 0;
}
