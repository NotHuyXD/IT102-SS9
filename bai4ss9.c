#include <stdio.h>
int main(){
    int choice, n, currentlength=0;
    printf ("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    while(choice!=6){
    printf("MENU\n");
    printf("\n");
    printf("\n1.Nhập vào mảng\n");
    printf("2.Hiển thị mảng\n");
    printf("3.Thêm phần tử\n");
    printf("4.Sửa phần tử\n");
    printf("5.Xóa phần tử\n");
    printf("6.Thoát\n");
    printf("\nLựa chọn của bạn: ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
        int num;
        printf("Số phần tử muốn nhập: ");
        scanf("%d", &num);
        currentlength=num;
        if (num>n){
            printf("Số phần tử muốn nhập lớn hơn với số phần tử của mảng");
        }
        else {
        for (int i=0;i<num;i++){
            printf("arr[%d]:",i);
            scanf("%d", &arr[i]);
        }
        }
        continue;
    
case 2:
    if (currentlength==0){
        printf("Mảng chưa tồn tại\n");
    }
    else {
        for (int i=0;i<currentlength;i++){
            printf("%d ", arr[i]);
        }
    }
    continue;
case 3:
int add, addI;
    printf("Hãy nhập giá trị mới muốn thêm vào: ");
    scanf("%d", &add);
    printf("Chọn vị trí muốn thêm vào mảng(0-%d): ", currentlength);
    scanf("%d", &addI);
    if (0>addI || addI>n){
        printf("Vị trí không hợp lệ\n");
    }
    else if (addI>=currentlength){
        arr[addI]=add;
        currentlength=addI;
    }
    else if(addI<currentlength){
        for (int i=currentlength;i>addI;i--){
            arr[i]=arr[i-1];
        }
        arr[addI]=add;
        currentlength+=1;
    }
    continue;
    case 4:
    int r, x;
    printf("Nhập vị trí phần tử cần sửa(0-%d): ",currentlength-1);
    scanf("%d", &r);
    if (r<0||r>currentlength){
        printf("Vị trí phần tử không hợp lệ\n");
        return 0;
    }
    printf("Nhập giá trị muốn sửa: ");
    scanf("%d", &x);
    arr[r]=n;
    continue;
    case 5:
    int del;
    printf("Nhập vị trí phần tử muốn xóa(0-%d): ", currentlength);
    scanf("%d", &del);
    if (del<0||del>currentlength){
        printf("Vị trí không hợp lệ\n");
    }
    else {
        for (int i=del;i<currentlength-1;i++){
            arr[i]=arr[i+1];
        }
        currentlength-=1;
    }
    continue;
    case 6:break;
    default: printf("Lựa chọn không hợp lệ\n");
    continue;
    }
    }
    return 0;
}