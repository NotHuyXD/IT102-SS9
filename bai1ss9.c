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
    int add, addI;
    printf("Hãy nhập giá trị mới muốn thêm vào: ");
    scanf("%d", &add);
    printf("Chọn vị trí muốn thêm vào mảng(0-100): ");
    scanf("%d", &addI);
    if (0>addI || addI>100){
        printf("Vị trí không hợp lệ");
    }
    else if (addI>=currentlength){
        currentlength=addI+1;
        arr[addI]=add;
    }
    else if(addI<currentlength){
        for (int i=currentlength;i>addI;i--){
            arr[i]=arr[i-1];
        }
        arr[addI]=add;
        currentlength+=1;
    }
    for (int i=0;i<currentlength;i++){
        printf("%d ", arr[i]);

    }
    return 0;

}