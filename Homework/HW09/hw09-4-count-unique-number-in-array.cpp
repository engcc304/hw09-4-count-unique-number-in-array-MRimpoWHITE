/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก

    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/

#include <stdio.h>

int main()
{

    int Element[99] = {0}, N, valuesE[99] = {0};

    printf("input N : ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("Element[%d] : ", i);
        scanf("%d", &Element[i]);
    }

    for ( int i = 0, R = N; i < N ; i++ )
    {
        for ( int i2 = 0 ; i2 < N ; i2++ )
        {
            if ( Element[i] == Element[R - i] )
            {
                valuesE[i] += 1 ;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d -> %d value.\n", valuesE[i] , valuesE[i]);
    }

    return 0;
}