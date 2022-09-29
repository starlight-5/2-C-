/*손익분기점*/

// #include<stdio.h>
// int main(void)
// {
//     int a,b,c,i=1;//a는 컴퓨터 개수 상관없는 고정비용, b는 컴퓨터1대 가변비용, c는 컴퓨터 1대 판매액
//     scanf("%d %d %d",&a,&b,&c);

//         if(c>b)
//         {
//             printf("%d",(a/(c-b))+1);
//         }
//         else
//         {
//             printf("%d",-1);
//         }
//     return 0;
// }
/*아래문제 규칙찾기위한 코딩*/
// #include <stdio.h>
// int main(void)
// {
//     unsigned int n;
//     int i = 1, j = 2;
//     scanf("%u", &n);
//     if (n == 1)
//     {
//         printf("%d", 1);
//     }
//     else if (n >= 2 && n <= 7) // 6
//     {
//         printf("%d", 2);
//     }
//     while (1)
//     {
//         if (n >= 2 + 6 * i && n <= 7 + 6 * j)
//             printf("%d", j);
//         i++;
//         j++;
//     }
//     if (n >= 2 && n <= 7) // 6
//     {
//         printf("%d", 2);
//     }
//     else if (n >= 8 && n <= 19) // 12
//     {
//         printf("%d", 3);
//     }
//     else if (n >= 20 && n <= 37) // 18
//     {
//         printf("%d", 4);
//     }
//     else if (n >= 38 && n <= 61) // 24
//     {
//         printf("%d", 5);
//     }
//     else if (n >= 62 && n <= 70) //
//     {
//         printf("%d", 6);
//     }
//     return 0;
// }

/*위의 그림과 같이 육각형으로 이루어진 벌집이 있다. 
그림에서 보는 바와 같이 중앙의 방 1부터 시작해서 이웃하는 방에 돌아가면서 1씩 증가하는 번호를 주소로 매길 수 있다. 
숫자 N이 주어졌을 때, 벌집의 중앙 1에서 N번 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나가는지(시작과 끝을 포함하여)를 계산하는 프로그램을 작성하시오. 
예를 들면, 13까지는 3개, 58까지는 5개를 지난다.*/
// #include <stdio.h>
// int main(void)
// {
//     unsigned int n;
//     int i = 1, j = 2;
//     int num=2;
//     int num1=3;
//     scanf("%u", &n);
//     if (n == 1)
//     {
//         printf("%d", 1);
//     }
//     else if (n >= 2 && n <= 7) // 6
//     {
//         printf("%d", 2);
//     }
//     else
//     {
//         while (n>7)
//         {
//             if (n >= 2 + 6 * i && n <= 7 + 6 * j)
//             {
//                 printf("%d", num+1);
//                 return 0;
//             }
//             i+=num;
//             num++;
//             j+=num1;
//             num1++;
          
//         }
//     }
//     return 0;
// }