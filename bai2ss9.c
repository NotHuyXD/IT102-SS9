#include <stdio.h>
int main(){
    int arr[]={3,5,8,6,9,12,4,7,78}, size=sizeof(arr)/sizeof(arr[0]), n, r;
    printf("Nhập vị trí phần tử cần sửa(0-%d): ",size);
    scanf("%d", &r);
    if (r<0||r>size){
        printf("Vị trí phần tử không hợp lệ");
        return 0;
    }
    printf("Nhập giá trị muốn sửa: ");
    scanf("%d", &n);
    arr[r]=n;
    for (int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 1;


}