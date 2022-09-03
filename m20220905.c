/*N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.*/
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     int i, j;
//     int temp;
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     temp = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         if (temp >= arr[i])
//             temp = arr[i];
//         else
//             temp = temp;
//     }
//     printf("%d ", temp);
//     temp = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         if (temp >= arr[i])
//             temp = temp;
//         else
//             temp = arr[i];
//     }
//     printf("%d", temp);
//     return 0;
// }

/*9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

예를 들어, 서로 다른 9개의 자연수

3, 29, 38, 12, 57, 74, 40, 85, 61

이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.*/
// #include<stdio.h>
// int main(void)
// {
//     int arr[9];
//     int i;
//     int temp;
//     for(i=0;i<9;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     temp=arr[0];
//     for(i=1;i<9;i++)
//     {
//         if(temp>=arr[i])
//         temp=temp;
//         else
//         temp=arr[i];
//     }
//     printf("%d\n",temp);
//     for(i=0;i<9;i++)
//     {
//         if(temp==arr[i])
//         printf("%d",i+1);
//     }
//     return 0;
// }

/*두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다.

수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.*/
// #include <stdio.h>
// int main(void)
// {
//     int arr[10]; //입력 개수
//     int i, j;
//     int count = 10;
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//         arr[i] = arr[i] % 42;
//     }
//     for (i = 0; i < 9; i++)
//     {
//         for (j = i + 1; j < 10; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count--; //서로 다른 수가 몇 개 있는지 계산중.
//                 arr[j]=42+j; //같은 수는 중복되지 않게 나올수 없는 수로 바꿈.
//             }
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

/*세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다. 일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.

예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.

세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.*/
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int i;
//     int temp;
//     double sum = 0;
//     scanf("%d", &n);
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     temp = arr[0];
//     for (i = 1; i < n; i++)
//     {
//         if (temp >= arr[i])
//             continue;
//         else
//             temp = arr[i];
//     }
//     for (i = 0; i < n; i++)
//     {
//         sum += (double)arr[i] / temp * 100; //형 변환
//     }
//     printf("%f", sum / n);
//     return 0;
// }

/*"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다.
문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.*/
// #include <stdio.h>
// int main(void)
// {

//     int n;
//     int i,j;
//     int count=0;
//     int sum=0;
//     scanf("%d",&n);
//     char arr[81];
//     for(i=0;i<n;i++)
//     {
//         scanf("%s",arr);
//         for(j=0;arr[j]!='\0';j++)
//         {
//             if(arr[j]=='O')
//             {
//                 count++;
//                 sum+=count;
//             }
//             else if(arr[j]=='X')
//             {
//                 count=0;
//             }
//         }
//         printf("%d\n",sum);
//         count=0; //다시 돌기위한 초기화
//         sum=0; // 다시 돌기위한 초기화
//     }
//     return 0;
// }

/*첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고,이어서 N명의 점수가 주어진다.
점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.*/
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int c; //테스트케이스 개수
//     int n; //점수 개수
//     int i, j;
//     int arr[1000];
//     int sum = 0;
//     int v = 0;
//     int count = 0;
//     double hun = 0;
//     scanf("%d", &c);
//     for (i = 0; i < c; i++)
//     {
//         scanf("%d", &n);
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[j]);
//             sum += arr[j];
//         }
//         v = sum / n; //평균
//         for (j = 0; j < n; j++)
//         {
//             if (v < arr[j]) //평균보다 큰수 개수
//             {
//                 count++;
//             }
//             else if (v >= arr[j])
//             {
//                 continue;
//             }
//         }
//         hun = (double)count / n; //평균보다 큰수 개수/총 개수
//         hun = hun * 100; //백분위로 바꾸기
//         hun = hun * 1000; //3번째자리가 안 바뀌도록 함.
//         hun = hun + 0.5; //반올림
//         hun = floor(hun); //floor을 이용하여 소수점 이하 삭제
//         hun = hun / 1000; //다시 원래 백분위로 바꾸기
//         printf("%.3f%c\n", hun, '%', "UTF-8");
//         count = 0; //다시 하기 위한 초기화
//         sum = 0; //다시 하기 위한 초기화
//         v = 0; //다시 하기 위한 초기화
//     }
//     return 0;
// }