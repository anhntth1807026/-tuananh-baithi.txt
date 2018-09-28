#include<stdio.h>
#include <string.h>
#include <stdlib.h>

// cách đẹp: "%-10s%-20s%-10s%-20s%-10s%-20s%"

typedef struct {
    char ma_sinh_vien[5];
    char ten_sinh_vien[50];
    char so_dien_thoai_sinh_vien[15];
} sinhvienes;

void themMoiHocSinh(){
    sinhvienes sinhvien[10];
    printf("vui lòng nhập mã của sinh viên: \n");
    fgetc(stdin);
    fgets(sinhvien->ma_sinh_vien, 5, stdin);
    if (sinhvien->ma_sinh_vien != 5){

    }
    printf("Vui lòng nhập tên sinh viên: \n");
    fgetc(stdin);
    fgets(sinhvien->ten_sinh_vien, 50, stdin);

    printf("Vui lòng nhập số điện thoại sinh viên: \n");
    fgetc(stdin);
    fgets(sinhvien->so_dien_thoai_sinh_vien, 15, stdin);
    }

void hienThiSinhvien() {
    sinhvienes sinhvien[10];
    printf("%-10s%-20s%-10s%-20s%-10s%-20s", "Số thứ tự", "|" "Mã sinh viên", "|", "Tên sinh viên", "|", "Số điện thoại" "\n");
    for (int i = 0; i < 10; ++i) {
        printf("\n");
        printf("%-10d%-20s%-10s%-20s%-10s%-20s", i + 1, sinhvien->ma_sinh_vien, "|", sinhvien[i].ten_sinh_vien, "|", sinhvien[i].so_dien_thoai_sinh_vien);
    }
}

void menu(){
    int a;
    while (1==1) {
        printf("Vui lòng nhập lựa chọn của bạn:\n");
        printf("1.Thêm mới sinh viên.\n");
        printf("2.Hiển thị dánh sách sinh viên.\n");
        printf("3.Lưu danh sách sinh viên ra file.\n");
        printf("4.Đọc danh sách sinh viên từ file.\n");
        printf("5.Thoát chương trình");
        printf("Vui lòng nhập lựa chọn của bạn:");
        scanf("%d", &a);
        switch (a){
            case 1:
                themMoiHocSinh();
                break;
            case 2:
                hienThiSinhvien();
                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            default:
                printf("Bạn đã nhập sai vui lòng nhập từ 1-5.\n");
        }
        break;
    }
}

int main(){
//    int x;
//    printf("Vui lòng nhập số lượng sinh viên: \n");
//    scanf("%d", &x);
//    if(x < 1 || x > 50){
//        printf("vui lòng nhập lại: \n");
//    }
    menu();
    //Ghi File.
//    FILE *fp = fopen("danhsachsinhvien.txt", "w+");
//    sinhvien danhsach;
//
//    strcpy(danhsach.ten_sinh_vien, "");
//    strcpy(danhsach.ma_sinh_vien, "");
//    strcpy(danhsach.so_dien_thoai_sinh_vien, "");
//
//    printf("Tên sinh viên là: %d\n", danhsach.ten_sinh_vien);
//    printf("Mã sinh viên là: %d\n", danhsach.ma_sinh_vien);
//    printf("Số điện thoại của sinh viên là: %d", danhsach.so_dien_thoai_sinh_vien);

    return 0;
}

