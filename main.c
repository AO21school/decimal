#include <stdio.h>
#include <string.h>
typedef struct {
    int bite[4];
} s21_decimal;
void s21_dec_print(s21_decimal a){
    printf("%d,%d,%d,%d\n",a.bite[3],a.bite[2],a.bite[1],a.bite[0]);
}
void s21_dec_init(s21_decimal * a, char* str){
    printf("%s",str);
}
int main(){
    s21_decimal a = {132, 123, 123, 13};
    s21_dec_print(a);
    s21_dec_init(&a,"567");
    return 0;
}
