/*
  mssv 110124107
  ho ten nguyen tan loc
  lop DA24TTA
  */
#include <stdio.h>
#define so_ngay 7


void nhapthoigianhoc(float thoigian[so_ngay]);
void xuatthoigianhoc(float thoigian[so_ngay]);
float tongthoigianhoc(float thoigian[so_ngay]);
float trungbinhthoigianhoc(float thoigian[so_ngay]);
void xacdinhngayhoc(float thoigian[so_ngay]);

int main(){
    float thoigian[so_ngay], tong, trungbinh;

    
    nhapthoigianhoc(thoigian);

   
    xuatthoigianhoc(thoigian);

   
    tong = tongthoigianhoc(thoigian);
    printf("Tong thoi gian hoc ca tuan: %.2f gio\n", tong);

    
    trungbinh = trungbinhthoigianhoc(thoigian);
    printf("Trung binh so gio hoc moi ngay: %.2f gio\n", trungbinh);

    
    xacdinhngayhoc(thoigian);
}


void nhapthoigianhoc(float thoigian[]) {
    for (int i = 0; i < so_ngay; i++) {
        do {
            printf("Nhap thoi gian hoc trong ngay %d: ", i + 1);
            scanf("%f", &thoigian[i]);
            if (thoigian[i] < 0 || thoigian[i] > 15) {
                printf("Thoi gian khong hop le. Vui long nhap lai.\n");
            }
        } while (thoigian[i] < 0 || thoigian[i] > 15);
    }
}


void xuatthoigianhoc(float thoigian[]) {
    printf("Thoi gian hoc cua tung ngay:\n");
    for (int i = 0; i < so_ngay; i++) {
        printf("Thu %d: %.2f gio\n", i + 1, thoigian[i]);
    }
}


float tongthoigianhoc(float thoigian[]) {
    float tong = 0;
    for (int i = 0; i < so_ngay; i++) {
        tong += thoigian[i];
    }
    return tong;
}


float trungbinhthoigianhoc(float thoigian[]) {
    return tongthoigianhoc(thoigian) / so_ngay;
}


void xacdinhngayhoc(float thoigian[]) {
    float max = thoigian[0], min = thoigian[0];
    int day_max = 0, day_min = 0;
    
    for (int i = 1; i < so_ngay; i++) {
        if (thoigian[i] > max) {
            max = thoigian[i];
            day_max = i;
        }
        if (thoigian[i] < min) {
            min = thoigian[i];
            day_min = i;
        }
    }

    printf("Ngay hoc nhieu nhat: Thu %d voi %.2f gio\n", day_max + 1, max);
    printf("Ngay hoc it nhat: Thu %d voi %.2f gio\n", day_min + 1, min);
}




	

