#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien {
    char name[100]; 
    int age;        
    int score;      
};

int main() {
    int N;
    int i;
    
    if (scanf("%d", &N) != 1 || N <= 0) {
        return 0;
    }

    struct SinhVien* ds_sinh_vien = (struct SinhVien*)malloc(N * sizeof(struct SinhVien));
    
    if (ds_sinh_vien == NULL) {
        return 1;
    }

    for (i = 0; i < N; i++) {
        if (scanf("%s %d %d", 
                  ds_sinh_vien[i].name, 
                  &ds_sinh_vien[i].age, 
                  &ds_sinh_vien[i].score) != 3) {
            free(ds_sinh_vien);
            return 1;
        }
    }

    struct SinhVien sv_cao_nhat = ds_sinh_vien[0];

    for (i = 1; i < N; i++) {
        if (ds_sinh_vien[i].score > sv_cao_nhat.score) {
            sv_cao_nhat = ds_sinh_vien[i];
        }
    }

    printf("Name: %s\n", sv_cao_nhat.name);
    printf("Age: %d\n", sv_cao_nhat.age);
    printf("Score: %d\n", sv_cao_nhat.score);

    free(ds_sinh_vien);

    return 0;
}