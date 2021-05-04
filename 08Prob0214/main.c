#include <stdio.h>

void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}
int main() {
    int num;
    char speg;
    char fpeg;
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("Enter the starting peg (A, B, or C): ");
    scanf("%c", &speg);
    printf("Enter the final peg (A, B, or C): ");
    scanf("%c", &fpeg);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    if ((speg =='A' || speg =='C') && (fpeg =='A' || fpeg =='C')){
        towers(num, speg, fpeg, 'B');
    }
    else if ((speg =='A' || speg =='B') && (fpeg =='A' || fpeg =='B')){
        towers(num, speg, fpeg, 'C');
    }
    else{
        towers(num, speg, fpeg, 'A');
    }
    return 0;
}
