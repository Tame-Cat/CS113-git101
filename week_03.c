#include<stdio.h>
#include<stdlib.h>
char name[20];
char n[5];
int main()
{
    //ต้องชดโน้ตและส่งในweekที่7
    //input ใช้ scanf()แต่ตั้งแต่แลปนี้ถึงแลป4 ห้ามใช้scanf
    //ถ้าจะinput ต้องไปใช้ <stdlib.h> จะรับเป็นchar arrays และค่อยแปลงเป็นตัวเลขและจำนวน
    //ถ้าใช้scanf มันจะมีเรื่องadressเข้ามา มันเลยยุ่งยาก
    //ถ้ามีตัวแปรchar array ต้องกำหนด arrays[ขนาดจำนวนตัวอักษร] ใช้แทนstr
    // printf("Enter name : "); gets(name);
    // **fgets(name, 20, stdin);//standard buffer fgets สามารถกำหนดขนาดของbufferได้ 
    // //buffer เป็นเหมือนmemory
    // **printf("name = %s\n", name);

    // fgets(n, 5, stdin);//การรับstr ทุกครั้ง จะต้องเก็บstr+1 เพราะตัวสุดท้ายเป็นตัวบอกว่าstrจบแล้ว(\0 หรือ ค่า null)
    // array ใน ภาษา c ไม่สามารถเปลี่ยนarray ได้ตลอดการ
    // int i = atoi(n);
    //getchar(c);//ไม่ว่าเราพิมพ์ยาวขนาดไหน มันจะเอาตัวแรกมาใช้ตัวเดียว
    // printf("n = %s , i = %d",n, i);
    //n = 123
    // , i = 123 ทำไมถึงขึ้นบรรทัดใหม่เพราะ bufferมันเก็บ 123\n\0 มันเก็บการกดenterไว้ด้วย หมายเหตุ ขนาดของbuffer ต้องคำนึงถึงจำนวนของstr และ \0

    // double d = atof(n);
    // long l = atol(n);
    // puts(n);
    // putchar(100); // putchar('h') เลข100 คือ d **strเท่านั้น datatypeอื่นไม่ได้

    //ภาษาc ไม่มีboolean จะใช้datatypeอื่นแทน
    // int found = 0;
    // float isIn = 0.0;
    // char isExist = '\0'; // 3 ตัวแปรที่กล่าวมา เป็น Falseทั้งหมด
    // //boolean นำไปใช้กับการตัดสินใจบางอย่าง เช่น 
    // fgets(n, 5, stdin);
    // int i = atoi(n);
    // if (i>0 && i<20){
    //     printf("if\n");
    // }else if (i<100 || !found && isExist){
    //     printf("else if\n");
    // }else if (i > 'A' && i < 'z'){
    //     printf("else if 2\n");
    // }else{
    //     printf("else\n");// printf("%d\n", i>0); มันจะได้ค่า int ที่เป็น 0 หรือ 1 ออกมา
    // }

    fgets(n,5,stdin);
    int i = atoi(n);
    int count = 0;
    // while (count<i/*operator*/)
    // {
    //     printf("%d\n", count);
    //     count++; // unary operator
    //     // ถ้าสมมติมันเกิดinf loopและอยากให้terminal หยุดการทำงาน ให้ctrl + c
    // }
    //state 1 > state2 คือการเช็กเงื่อนไขว่าเป็นจริงมั้ย > statement สุดท้ายจะทำทีหลังหลังจากทำลูปรอบนั้นเสร็จแล้ว
    for (int j = 0; j < i; j++)
    {
        printf("%d\n",j);

    }
    //function ในภาษาc มีการreturn ค่าเสมอ แต่ไม่ค่อยมีคนทำเพราะว่ามันดูยาก เข้าใจยาก
    //for (;;){} แบบนี้ก็คือการทำinf loop
    
    
    
    
    //0<i<20 แบบนี้ใช้ได้กับ python เท่านั้น
}