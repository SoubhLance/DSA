// Write a C program that calculates the sum of even and odd numbers from 0 to 50 using do-while loops.

#include<stdio.h>

 int main()
 {
    int sum_even=0,sum_odd=0;
    int number=0;
    do{
        if(number%2==0)
        {
            sum_even+=number;
        }
        else{
            sum_odd+=number;
        }
        number++;
    }while(number<=50);
    printf("Odd SUM: %d\n", sum_odd);
    printf("EVEN SUM: %d", sum_even);
 }


//  // Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops.

// #include<stdio.h>

//  int main()
//  {
//     int sum_even=0,sum_odd=0;
//     int number=0;
//     do{
//         if(number%2==0)
//         {
//             sum_even+=number;
//         }
//         else{
//             sum_odd+=number;
//         }
//         number++;
//     }while(number<=50);
//     printf("Odd SUM: %d\n", sum_odd);
//     printf("EVEN SUM: %d", sum_even);
//  }