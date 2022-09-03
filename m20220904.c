/*N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.*/
// #include<stdio.h>
// int main(void)
// {
//     int a = 0;
//     int i;
//     scanf("%d",&a);
//     for(i=1;i<=9;i++)
//         printf("%d * %d = %d\n",a,i,a*i);
//     return 0;
// }

/*두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.*/
// #include<stdio.h>
// int main(void)
// {
//     int a = 0;
//     int num,num1;
//     int i;
//     scanf("%d",&a);
//     for(i=1;i<=a;i++)
//     {
//         scanf("%d %d",&num,&num1);
//         printf("%d\n",num+num1);
//     }
//     return 0;
// }

/*n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.*/
// #include<stdio.h>
// int main(void)
// {
//     int n,i,result=0;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         result += i;
//     }
//     printf("%d",result);
//     return 0;
// }

/*구매한 각 물건의 가격과 개수,
구매한 물건들의 총 금액을 보고,
구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하는지 검사해보자.*/
// #include <stdio.h>
// int main(void)
// {
//     int X, N, a, b;
//     int i, sum = 0;
//     scanf("%d", &X);
//     scanf("%d", &N);
//     for (i = 1; i <= N; i++)
//     {
//         scanf("%d %d", &a, &b);
//         sum += a * b;
//     }
//     if (X == sum)
//         printf("Yes");
//     else
//         printf("No");
//     return 0;
// }

/*더하기 반복*/
// #include <stdio.h>
// int main(void)
// {
//     int T;
//     int i;
//     int a, b;
//     scanf("%d", &T);
//     for (i = 1; i <= T; i++)
//     {
//         scanf("%d %d", &a, &b);
//         printf("%d\n", a + b);
//     }
//     return 0;
// }

/*첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제*/
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int i,j;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제(변형)*/
// #include <stdio.h>
// int main(void)
// {
//     int i,j,k;
//     int n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++) //줄나누기
//     {
//         for(j=n;j>i;j--) //띄어쓰기
//         {
//             printf(" ");
//         }
//         for(k=1;k<=i;k++) //별 입력
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.*/
// #include <stdio.h>
// int main(void)
// {
//     int n,x;
//     int i;
//     int arr[10000];
//     scanf("%d %d",&n,&x);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         if(arr[i] < x)
//         {
//             printf("%d ",arr[i]);
//         }
//     }
//     return 0;
// }

/*두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. 0이 들어오면 끝*/
// #include <stdio.h>
// int main(void)
// {
//     int a, b;
//     while (1)
//     {
//         scanf("%d %d", &a, &b);
//         if (a == 0 & b == 0)
//             break;
//         printf("%d\n", a + b);
//     }
//     return 0;
// }

/*두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오. 오류 나면 끝*/
// #include <stdio.h>
// int main(void)
// {
//     int a, b;
//     while (scanf("%d %d", &a, &b) == 2) //scanf가 오류가 나면 -1 오류가 안나면 2가 반환된다. EOF로 바꿀수도 있다.
//     {
//         printf("%d\n", a + b);
//     }
//     return 0;
// }

/*0보다 크거나 같고, 99보다 작거나 같은 정수가 주어질 때 다음과 같은 연산을 할 수 있다. 먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다. 그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면 새로운 수를 만들 수 있다. 다음 예를 보자.

26부터 시작한다. 2+6 = 8이다. 새로운 수는 68이다. 6+8 = 14이다. 새로운 수는 84이다. 8+4 = 12이다. 새로운 수는 42이다. 4+2 = 6이다. 새로운 수는 26이다.

위의 예는 4번만에 원래 수로 돌아올 수 있다. 따라서 26의 사이클의 길이는 4이다.

N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성하시오.*/
// #include <stdio.h>
// int main(void)
// {
//     int a, re_a;
//     int ch = 0, ch1 = 0;
//     int sum = 0;
//     int i = 0;
//     scanf("%d", &a); //처음 수
//     re_a = a;
//     while (1)
//     {

//         ch1 = a / 10;               //십의자리
//         ch = a % 10;                //일의자리
//         sum = ch + ch1;             //합한 수
//         a = (ch * 10) + (sum % 10); // 새로운 수
//         i++;
//         if (re_a == a)
//             break;
//     }
//     printf("%d", i);
//     return 0;
// }