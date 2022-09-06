/*정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.*/
// long long sum(int *a, int n) {
// 	long long ans = 0;
//     int i;
//     for(i=0;i<n;i++)
//     {
//         ans +=a[i];
//     }
// 	return ans;
// }

/*셀프 넘버 구하기*/
// #include <stdio.h>
// int arr[10000]; // 셀프 넘버 아닌게 들어갈 배열.
// void nsn(void) // 셀프넘버가 아닌 수를 배열에 넣는 함수.
// {
//     int i;
//     int result = 0;
//     for (i = 1; i < 10000; i++)
//     {

//             if (i < 10)
//                 result = i + i;
//             else if (i >= 10 && i < 100)
//                 result = i + (i % 10) + (i / 10);
//             else if (i >= 100 && i < 1000)
//                 result = i + (i / 100) + ((i % 100) / 10) + ((i % 100) % 10);
//             else if (i >= 1000 && i < 10000)
//                 result = i + (i / 1000) + ((i % 1000) / 100) + (((i % 1000) % 100) / 10) + (((i % 1000) % 100) % 10);
//             if (result < 10000)
//             arr[result-1] = result; //각 인덱스 자리에 그거 보다 1큰수 넣음.
//     }
// }
// int main(void)
// {
//     int i;
//     int arr2[10000]; // 셀프 넘버가 들어갈 배열.
//     nsn();
//     for(i=0;i<9999;i++) // 각 인덱스에 1만큼 큰 수를 넣음 .
//     {
//         arr2[i]=i+1;
//     }
//     for (i = 0; i < 10000;i++) // 비교하여 셀프 넘버 출력.
//     {
//         if(arr2[i] != arr[i])
//         printf("%d\n",arr2[i]);
//     }

//         return 0;
// }

/*
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면,
그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
*/
// #include <stdio.h>
// int arr[1000]; // 한수일때 1넣음. 아님 0.
// void hansutest(int n)
// {
//     int i;
//     int x=1;
//     for (i = 0; i < n; i++) // n번까지 한수인지 파악하기. 한수면 배열에 1넣기, 아니면 0넣기.
//     {
//         if (x > 0 && x < 10)
//         {
//             arr[i] = 1;
//         }
//         else if (x >= 10 && x < 100)
//         {
//             arr[i] = 1;
//         }
//         else if (x >= 100 && x < 1000)
//         {
//             if ((x / 100) - ((x % 100) / 10) == ((x % 100) / 10) - ((x % 100) % 10))
//             {
//                 arr[i] = 1;
//             }
//             else
//                 arr[i] = 0;
//         }
//         else if (x == 1000)
//         {
//             arr[i] = 0;
//         }
//         x++;
//     }
// }
// int main(void)
// {
//     int N;
//     int i;
//     int count = 0;
//     scanf("%d", &N);//횟수.

//     hansutest(N);

//     for (i = 0; i < N; i++)
//     {
//         if (arr[i] == 1) // 한수 개수 파악.
//             count++;
//         else
//             continue;
//     }
//     printf("%d", count);
//     return 0;
// }