#include<stdio.h>
void addTen(int *numbers, int n)//ค่าn เป็นค่าที่pass by value 
{
    for (int i = 0; i< n; i++)
    {
        printf("number + %d addr = %p, %d\n", i ,numbers + i, *(numbers + i));//number+i คือ address + ขนาดของ i(datytype)
        *(numbers + i) += 10;
        //(numbers+i) คือการเพิ่มaddres หรือ ขยับaddressไปตามของขนาดข้อมูลที่เก็บ
        // โดย array นั้นเป็น int ซึ่งก็มีการจองaddress 4 byte
    }
}
int addTwenty(int *n)
{
    *n += 20;//คือการเอาค่าที่อยู่ในแอดเดรสนั้น มาบวกกับ20
    return 1;
}
int main()
{
    int numbers[] = {5, 6, 7, 8, 9, 0};
    int n = 6;
    int *ptr = &n; //*ptr จะรับค่าที่อยู่ตรงตำแหน่งaddresที่ตัวแปร n
    addTen(&numbers[0], n);

    for(int i = 0; i< 6;i++)
    {
        printf("number[%d] = %d\n",i , numbers[i]);
    }
    addTwenty(ptr);//ส่งค่าโดย pass by referenc
    printf("n = %d\n", *ptr);
}