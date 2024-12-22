#include <stdio.h>
int main(){
    int arr[100],n, currentlength;
    printf("Nhập số phần tử muốn nhập vào mảng: ");
    scanf("%d", &n);
    currentlength=n;
    for (int i=0;i<n;i++){
        printf("Phần tử của arr[%d]: ", i);
        scanf("%d", &arr[i]);

    }
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    int del;
    printf("Nhập vị trí phần tử muốn xóa(0-%d): ", currentlength);
    scanf("%d", &del);
    if (del<0||del>currentlength){
        printf("Vị trí không hợp lệ");
    }
    else {
        for (int i=del;i<currentlength-1;i++){
            arr[i]=arr[i+1];
        }
        currentlength-=1;
    }
    for (int i=0;i<currentlength;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}