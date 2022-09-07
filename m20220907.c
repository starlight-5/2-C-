/*알파벳 소문자, 대문자, 숫자 -9중 하나가 주어졌을 때,
 주어진 글자의 아스키 코드값을 출력하는 프로그램을 작성하시오.*/
// #include<stdio.h>
// int main (void)
// {
//     char num;
//     scanf("%c",&num);
//     if(num>='' && num<='9')
//     printf("%d",num);
//     else if(num>='A' && num<='Z')
//     printf("%d",num);
//     else if(num>='a' && num<='z')
//     printf("%d",num);
//     return ;
// }

/*N개의 숫자가 공백 없이 쓰여있다.
 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
*/
// #include <stdio.h>
// int main(void)
// {
//     char arr[1];
//     int i;
//     int n;
//     int sum=;
//     scanf("%d",&n);
//     scanf("%s",arr);
//     for(i=;arr[i]!='\';i++)
//     {
//         if(arr[i]=='')
//         sum += ;
//         else if(arr[i]=='1')
//         sum += 1;
//         else if(arr[i]=='2')
//         sum += 2;
//         else if(arr[i]=='3')
//         sum += 3;
//         else if(arr[i]=='4')
//         sum += 4;
//         else if(arr[i]=='5')
//         sum += 5;
//         else if(arr[i]=='6')
//         sum += 6;
//         else if(arr[i]=='7')
//         sum += 7;
//         else if(arr[i]=='8')
//         sum += 8;
//         else if(arr[i]=='9')
//         sum += 9;
//     }
//     printf("%d",sum);
//     return ;
// }

/*알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서,
 단어에 포함되어 있는 경우에는 처음 등장하는 위치를,
 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.*/
// #include <stdio.h>
// int main(void)
// {
//     char arr[1];
//     char abc[1] = "abcdefghijklmnopqrstuvwxyz";
//     int i;
//     int j;
//     int count = ;
//     scanf("%s", arr);
//     for (i = ; abc[i] != '\'; i++)
//     {
//         for (j = ; arr[j] != '\'; j++)
//         {
//             if (abc[i] == arr[j])
//             {
//                 printf("%d ", count);
//                 break;
//             }
//             else if (abc[i] != arr[j])
//                 count++;
//         }
//         if (arr[count] == '\')
//             printf("%+d ", -1);
//         count = ;
//     }
//     return ;
// }

/*문자열 S를 입력받은 후에, 각 문자를 r번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오.
 즉, 첫 번째 문자를 r번 반복하고,
 두 번째 문자를 r번 반복하는 식으로 arr1를 만들면 된다.
 첫째 줄에 테스트 케이스의 개수 n(1 ≤ T ≤ 1,)가 주어진다.
 각 테스트 케이스는 반복 횟수 r(1 ≤ R ≤ 8),
 문자열 arr가 공백으로 구분되어 주어진다.
  arr의 길이는 적어도 1이며, 2글자를 넘지 않는다.
*/

// #include <stdio.h>
// int main(void)
// {
//     int n; //테스트 케이스
//     int r; // 문자열의 각각의 문자 반복수
//     int i;
//     int w;
//     int k = ;
//     char arr[2];  // 처음 문자열
//     char count[2]; // 문자열의 문자가 r번 반복한 후 문자열
//     scanf("%d", &n);
//     for (w = ; w < n; w++) // 테스트 케이스
//     {
//         scanf("%d %s", &r, arr);
//         for (i = ; arr[i] != '\'; i++)// 문자열의 문자가 r번 반복한 후 문자열 만드는 중
//         {
//             for (int j = ; j < r; j++)
//             {
//                 count[k] = arr[i];
//                 k++;
//             }
//         }
//         count[k] = '\';
//         for (i = ; count[i] != '\'; i++)
//             printf("%c", count[i]);
//         printf("\n");
//         k=;
//     }

//     return ;
// }
/*알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오.
 단, 대문자와 소문자를 구분하지 않는다.*/
// #include <stdio.h>
// int main(void)
// {
//     char arr[1000001];//문자열
//     int count[100] = {0,};// 문자 횟수
//     scanf("%s", arr);
//     int i;
//     int temp;
//     int num = 0;
//     for (i = 0; arr[i] != '\0'; i++)// 대문자로 만들기
//     {
//         if (arr[i] >= 97 && arr[i] <= 122)
//             arr[i] -= 32;
//     }

//     for (i = 0; arr[i] != '\0'; i++)//문자 횟수 세기
//     {
//         if (arr[i] == 'A')
//         {
//             count[0] += 1;
//         }
//         else if (arr[i] == 'B')
//         {
//             count[1] += 1;
//         }
//         else if (arr[i] == 'C')
//         {
//             count[2] += 1;
//         }
//         else if (arr[i] == 'D')
//         {
//             count[3] += 1;
//         }
//         else if (arr[i] == 'E')
//         {
//             count[4] += 1;
//         }
//         else if (arr[i] == 'F')
//         {
//             count[5] += 1;
//         }
//         else if (arr[i] == 'G')
//         {
//             count[6] += 1;
//         }
//         else if (arr[i] == 'H')
//         {
//             count[7] += 1;
//         }
//         else if (arr[i] == 'I')
//         {
//             count[8] += 1;
//         }
//         else if (arr[i] == 'J')
//         {
//             count[9] += 1;
//         }
//         else if (arr[i] == 'K')
//         {
//             count[10] += 1;
//         }
//         else if (arr[i] == 'L')
//         {
//             count[11] += 1;
//         }
//         else if (arr[i] == 'M')
//         {
//             count[12] += 1;
//         }
//         else if (arr[i] == 'N')
//         {
//             count[13] += 1;
//         }
//         else if (arr[i] == 'O')
//         {
//             count[14] += 1;
//         }
//         else if (arr[i] == 'P')
//         {
//             count[15] += 1;
//         }
//         else if (arr[i] == 'Q')
//         {
//             count[16] += 1;
//         }
//         else if (arr[i] == 'R')
//         {
//             count[17] += 1;
//         }
//         else if (arr[i] == 'S')
//         {
//             count[18] += 1;
//         }
//         else if (arr[i] == 'T')
//         {
//             count[19] += 1;
//         }
//         else if (arr[i] == 'U')
//         {
//             count[20] += 1;
//         }
//         else if (arr[i] == 'V')
//         {
//             count[21] += 1;
//         }
//         else if (arr[i] == 'W')
//         {
//             count[22] += 1;
//         }
//         else if (arr[i] == 'X')
//         {
//             count[23] += 1;
//         }
//         else if (arr[i] == 'Y')
//         {
//             count[24] += 1;
//         }
//         else if (arr[i] == 'Z')
//         {
//             count[25] += 1;
//         }
//     }

//     temp = count[0];

//     for (i = 0; i <= 25; i++) // 제일 큰 횟수 찾기
//     {
//         if (temp > count[i])
//             continue;
//         else if (temp < count[i])
//         {
//             temp = count[i];
//             num = i; //제일 큰 횟수의 인덱스를 1)))에서 이용할거임.
//         }
//     }
//     for (i = 0; i <= 25; i++)
//     {
//         if (temp == count[i]) // 자신을 포함한 횟수를 셈
//         {
//             if (num != i) //1)))그래서 여기서 인덱스를 이용하여 자신을 다시 세지않도록 함.
//             {
//                 printf("%c", '?');
//                 i=i+100; 
//                 break;
//             }
//         }
//     }
//     if (i == 26) // 서로 다른 문자가 같은 횟수인 것이 없으면 실행
//         printf("%c", num+65);

//     return 0;
// }