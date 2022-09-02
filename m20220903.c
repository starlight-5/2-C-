/*A가 B보다 큰 경우에는 '>'를 출력한다.
A가 B보다 작은 경우에는 '<'를 출력한다.
A와 B가 같은 경우에는 '=='를 출력한다.*/
// #include <stdio.h>
// int main(void)
// {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if (A > B)
//         printf(">");
//     else if (A < B)
//         printf("<");
//     else if (A == B)
//         printf("==");

//     return 0;
// }

/*시험 점수를 입력받아
90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.*/
// #include <stdio.h>
// int main(void)
// {
//     int A;
//     scanf("%d", &A);
//     switch (A/10)
//     {
//     case 10 :
//     case 9 :
//         printf("A");
//         break;
//     case 8 :
//         printf("B");
//         break;
//     case 7 :
//         printf("C");
//         break;
//     case 6 :
//         printf("D");
//         break;

//     default:
//         printf("F");
//         break;
//     }
//     return 0;
// }

/*연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.
예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다.
1900년은 100의 배수이고 400의 배수는 아니기 때문에 윤년이 아니다.
하지만, 2000년은 400의 배수이기 때문에 윤년이다.*/
// #include <stdio.h>
// int main(void)
// {
//     int year;
//     scanf("%d", &year);

//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//         printf("%d", 1);
//     else
//         printf("%d", 0);

//     return 0;
// }

/*흔한 수학 문제 중 하나는 주어진 점이 어느 사분면에 속하는지 알아내라.*/
// #include <stdio.h>
// int main(void)
// {
//     int x = 0, y = 0;
//     scanf("%d %d", &x, &y);
//     if (x > 0 & x != 0)
//     {
//         if (y > 0 && y != 0)
//             printf("%d", 1);
//         else if (y < 0 && y != 0)
//             printf("%d", 4);
//     }
//     else if (x < 0 && x != 0)
//     {
//         if (y > 0 && y != 0)
//             printf("%d", 2);
//         else if (y < 0 && y != 0)
//             printf("%d", 3);
//     }
//     return 0;
// }

/* "45분 일찍 알람 설정하기"*/
// #include <stdio.h>
// int main(void)
// {
//     int h = 0, m = 0;
//     scanf("%d %d", &h, &m);
//     if ((h >= 0 && h <= 23) & (m >= 0 && m <= 59))
//     {
//         if (m < 45)
//         {
//             if (h == 0)
//             {
//                 h = 23;
//                 m = 60 + (m - 45);
//                 printf("%d %d", h, m);
//             }
//             else
//             {
//                 h=h-1;
//                 m = 60 + (m - 45);
//                 printf("%d %d", h, m);
//             }
//         }
//         else
//         {
//             m -= 45;
//             printf("%d %d", h, m);
//         }
//     }

//     return 0;
// }

/*인공지능 오븐은 오븐구이가 끝나는 시간을 분 단위로 자동적으로 계산한다.
또한, KOI 전자의 인공지능 오븐 앞면에는 사용자에게 훈제오리구이 요리가 끝나는 시각을 알려 주는 디지털 시계가 있다.
훈제오리구이를 시작하는 시각과 오븐구이를 하는 데 필요한 시간이 분단위로 주어졌을 때,
오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.*/
// #include <stdio.h>
// int main(void)
// {
//     int a, b, c; //a는 현재 시간, b는 현재 분, c는 요리하는데 필요한 시간
//     scanf("%d %d", &a, &b);
//     scanf("%d", &c);
//     if ((a >= 0 && a <= 23) & (b >= 0 && b <= 59))
//     {
//         if (c >= 0 && c <= 1000)
//         {
//             if (c >= 60) //c가 60분을 넘으면
//             {

//                 b += c % 60;//c를 시간으로 바꾸고 남은 것을 b에 합치는 과정  
//                 c = c / 60; // c를 시간으로 바꾸는 과정

//                 if (b >= 60)//b가 60분이 넘어가면 1시간으로 바꾸기
//                 {
//                     b -= 60;
//                     a += 1;
//                     a += c;
//                     if (a >= 24)//24시간이 넘게 된다면 24시간 빼기
//                         a -= 24;
//                     printf("%d %d", a, b);
//                 }
//                 else//b가 60분이 안 넘으면 
//                 {
//                     a += c;
//                     if (a >= 24)
//                         a -= 24;
//                     if (a < 24)
//                         printf("%d %d", a, b);
//                 }
//             }
//             else //c가 60분을 안넘으면
//             {
//                 b += c;
//                 if (b >= 60)
//                 {
//                     b = b - 60;
//                     a += 1;
//                     if (a == 24)
//                         a = 0;
//                     printf("%d %d", a, b);
//                 }
//                 else
//                     printf("%d %d", a, b);
//             }
//         }
//     }
//     return 0;
// }

/*상금 게임
같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다. 
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다. 
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.  
*/
// #include <stdio.h>
// int main(void)
// {
//     int a, b, c; //주사위 눈 개수
//     scanf("%d %d %d", &a, &b, &c);
//     if (a == b && b == c)// 다 같을 때
//         printf("%d", 10000 + a * 1000);
//     else if (a != b & a != c & b != c) //다 안 같을 때
//         if (a > b)
//         {
//             if (a > c)
//                 printf("%d", a * 100);
//             else if (a < c)
//                 printf("%d", c * 100);
//         }
//         else if (a < b)
//         {
//             if (b > c)
//                 printf("%d", b * 100);
//             else if (b < c)
//                 printf("%d", c * 100);
//         }
//     if (a == b && a!=c) // 셋중 두개만 같을 때
//         printf("%d", 1000 + a * 100);
//     else if (b == c && a!=b)
//         printf("%d", 1000 + b * 100);
//     else if (a == c && a!=b)
//         printf("%d", 1000 + a * 100);

//     return 0;
// }

