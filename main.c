#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 typedef struct sinhvien{
    char ten[50];
    char email[50];
    char sodienthoai[20];
    int tuoi[10];
} ;
void removestdchar(char array[]){
    if(strchr(array, '\n')==NULL){
        while (fgetc(stdin) != '\n');
    }
}
int main(){
     struct sinhvien sinhviens[2] ;
    for (int i = 0; i <2 ; ++i) {
        printf("vui long nhap ten sinh vien thu %d:", i + 1);
        fgets(sinhviens[i].ten,sizeof(sinhviens[i].ten)*sizeof(char) ,stdin);
        removestdchar(sinhviens[i].ten);
        printf("vui long nhap email sinh vien thu %d:", i + 1);
        fgets(sinhviens[i].email,sizeof(sinhviens[i].email)*sizeof(char) ,stdin);
        removestdchar(sinhviens[i].email);
        printf("vui long nhap so dien thoai sinh vien thu %d:", i + 1);
        fgets(sinhviens[i].sodienthoai,sizeof(sinhviens[i].sodienthoai)*sizeof(char) ,stdin);
        removestdchar(sinhviens[i].sodienthoai);
        printf("vui long nhap tuoi sinh vien thu %d:", i + 1);
        scanf("%d",&sinhviens[i].tuoi);
        getchar();

    }
    for (int j = 0; j < 2; ++j) {

        printf("ten vua nhap la:%s\n",sinhviens[j].ten);
        printf("email vua nhap la:%s\n",sinhviens[j].email);
        printf("so dien thoai vua nhap la:%s\n",sinhviens[j].sodienthoai);
        printf("tuoi vua nhap la:%d\n",sinhviens[j].tuoi);
    }
    return 0;
}