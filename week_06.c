#include<stdio.h>
#include<stdlib.h>
//เรียนเรื่องpointer
//
int main(){
    int x = 100;
    //cไม่มีเลขฐาน2 เราต้องเขียนฟังก์ชันแทนเอา
    int a = 0144;//ฐาน8
    int b = 0x64;//ฐาน16
    printf("x = %d\n" ,x);
    printf("reference of x = %lu\n",&x);/*&เป็นตัวแสดงค่าaddressของค่าที่เก็บไว้*/
    printf("reference of x = %p\n",&x);/*0x เลขฐาน16 00ตัวเลขฐาน8*/

    //array
    int number[] = {7,8,9,10,11};
    number[3000] = 200;
    // int nubmer[100] = {7, 8, 9, 10, 11};
    // int number[5];
    printf("index 3000 = %d\n", number[3000]);
    printf("reference index 3 = %p\n", number);//addressโดยระบุแค่ชื่อตัวแปร มันเอาaddressของindexที่ 0
    printf("reference index 3 = %p\n", &number[0]);
    printf("reference index 3 = %p\n", number+3);//เป็นการบวกแอดเดรสโดยมันจะบวกไป3เท่าของขนาดข้อมูล นั่นก็คือ 12
    printf("reference index 3 = %p\n", &number[1]);
    printf("reference index 3 = %p\n", &number[2]);
    printf("reference index 3 = %p\n", number + 5000);
}
#include<stdio.h>
#include<stdlib.h>
//เรียนเรื่องpointer
//
int main(){
    int x = 100;
    //cไม่มีเลขฐาน2 เราต้องเขียนฟังก์ชันแทนเอา
    int a = 0144;//ฐาน8
    int b = 0x64;//ฐาน16
    printf("x = %d\n" ,x);
    printf("reference of x = %lu\n",&x);/*&เป็นตัวแสดงค่าaddressของค่าที่เก็บไว้*/
    printf("reference of x = %p\n",&x);/*0x เลขฐาน16 00ตัวเลขฐาน8*/

    //array
    int number[] = {7,8,9,10,11};
    number[3000] = 200;
    // int nubmer[100] = {7, 8, 9, 10, 11};
    // int number[5];
    printf("index 3000 = %d\n", number[3000]);
    printf("reference index 3 = %p\n", number);//addressโดยระบุแค่ชื่อตัวแปร มันเอาaddressของindexที่ 0
    printf("reference index 3 = %p\n", &number[0]);
    printf("reference index 3 = %p\n", number+3);//เป็นการบวกแอดเดรสโดยมันจะบวกไป3เท่าของขนาดข้อมูล นั่นก็คือ 12
    printf("reference index 3 = %p\n", &number[1]);
    printf("reference index 3 = %p\n", &number[2]);
    printf("reference index 3 = %p\n", number + 5000);
}
// address pointer

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     // int x = 100;
//     // int number[] = {7,8,9,10,11};
//     // int *ptr = &x; //ptr ชี้addressของxอยู่
//     // int *arrPrt;
//     // arrPrt = number; // &number[0]
//     // printf("arrPrt = %p, *arrPtr = %d\n", arrPrt,*arrPrt);
//     // arrPrt = arrPrt +1;//ขยับaddressไปหนึ่งช่อง ไปที่indexที่1
//     // //* dereferencing
//     // *arrPrt = *arrPrt + 1;//*ตัวแปร คือจะดึงค่าที่อยู่ในaddressออกมา คือ 8 และ นำ8มาบวก1
//     // // printf("%d\n", arrPrt);//ถ้าปริ้นแบบนี้คือมันจะเก็บค่าaddressไว้
//     // // printf("%d\n",*arrPrt);
//     // printf("arrPrt = %p, *arrPtr = %d\n", arrPrt,*arrPrt);
//     // printf("number[1] %p, number[1] = %d\n", &number[1],number[1]);

//     // //&x = 50; ทำไม่ได้ เปลี่ยนที่อยู่addressไม่ได้
//     // // ptr = x;
//     // // *ptr = 50;//แบบนี้พัง คอมพังแน่นอน
    
//     //การวนloop
//     int number[] = {7,8,9,10,11};
//     char input[50];//ถ้าเป็นแบบนี้ จะให้วนไปถึง"\0"
//     for(int *ptr = number;ptr<=&number[4];ptr++){
//         printf("[%p] = %d\n",ptr,*ptr);
//     }
//     char inputs[50];
//     int count = 0;
//     char c;
//     while((c = getchar()) != '\n')
//     {
//         input[count] = c;
//         ++count;
//     }
//     input[count] = '\0';
//     printf("input = %s\n", input);//%s จะปริ้นตัวอักษรตัวแรกไปจนถึงindexที่'\0'

//     for(char *cPtr = input; *cPtr != '\0';cPtr++)
//     {
//         printf("%c\n", *cPtr);
//     }

//     //การรับค่าโดยใช้scanf
//     int a;
//     char cs;
//     char s[50];
//     scanf("%c-%d-%s", &cs, &a, s);// s เป็นarrayมันเลยเป็นaddressอยู่ละ
//     printf("%c  %d  %s", cs, a, s);
// }
