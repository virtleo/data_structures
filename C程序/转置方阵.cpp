
#include <stdio.h>  
  
void Transpose(int a[][11], int n) {  
    int i, j;  
    for (i = 0; i < n; i++) {  
        for (j = i; j < n; j++) {  
            int temp = a[i][j];  
            a[i][j] = a[j][i];  
            a[j][i] = temp;  
        }  
    }  
}  
  
int main() {  
    int n, i, j;  
    int a[11][11];  
    scanf("%d", &n);  
    for (i = 0; i < n; i++) {  
        for (j = 0; j < n; j++) {  
            scanf("%d", &a[i][j]);  
        }  
    }  
    Transpose(a, n);  
    for (i = 0; i < n; i++) {  
        for (j = 0; j < n; j++) {  
            printf("%d ", a[i][j]);  
        }  
        printf("\n");  
    }  
    return 0;  
}