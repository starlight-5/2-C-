/*영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오.
단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

문자,널 /문자, 공백, 널 /공백, 문자, 널 /공백, 널 /공백, 문자, 공백, 널/문자,공백,문자
경우의 수 6개임.
*/
// #include <stdio.h>
// int main(void)
// {
//     char arr[1000001];
//     scanf("%[^\n]s", arr); //공백 포함 하여 문자열 입력.
//     int i;
//     int count = 0;
//     for (i = 0; arr[i] != '\0'; i++) // 대문자로 치환.
//     {
//         if (arr[i] != 32)
//         {
//             if (arr[i] >= 97 && arr[i] <= 122)
//             {
//                 arr[i] -= 32;
//             }
//         }
//     }

//     for (i = 0; i <= 1000000; i++)
//     {
//         if (arr[i] == 32)
//         {
//             if (arr[i + 1] >= 65 && arr[i + 1] <= 90) //공백, 문자 나오면 카운트
//             {
//                 count++;
//             }
//             else if (arr[i + 1] == '\0') // 공백,널문자나오면 끝냄
//             {
//                 break;
//             }
//         }
//         else if (arr[i] >= 65 && arr[i] <= 90)
//         {
//             if (arr[i + 1] == '\0')
//             {
//                 if (count == 0) // 문자, 널문자 1개만이 나올때 카운트//공백,문자,널문자 나오면 카운트가 2가 나오는 것 방지
//                     count++;
//                 else if (count != 0) // 문자, 널문자 나올때 끝냄
//                     break;
//             }
//             else if (arr[i + 1] == 32 && count == 0) // 문자, 공백 1개만 일때 카운트 // 공백,문자,공백 나오면 카운트가 2가나오는 것 방지
//             {
//                 count++;
//             }
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

/*상근이의 동생 상수는 수학을 정말 못한다. 상수는 숫자를 읽는데 문제가 있다. 이렇게 수학을 못하는 상수를 위해서 상근이는 수의 크기를 비교하는 문제를 내주었다. 상근이는 세 자리 수 두 개를 칠판에 써주었다. 그 다음에 크기가 큰 수를 말해보라고 했다.

상수는 수를 다른 사람과 다르게 거꾸로 읽는다. 예를 들어, 734와 893을 칠판에 적었다면, 상수는 이 수를 437과 398로 읽는다. 따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.

두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.
*/
// #include <stdio.h>
// int main(void)
// {
//     int num1, num2;
//     scanf("%d %d", &num1, &num2);
//     int temp;

//         temp = num1 / 100;
//         num1 = (((num1 % 100) % 10) * 100) + ((num1 % 100) - (num1 % 100) % 10) + temp;

//         temp = num2 / 100;
//         num2 = (((num2 % 100) % 10) * 100) + ((num2 % 100) - (num2 % 100) % 10) + temp;
//         if(num1>=num2)
//         printf("%d",num1);
//         else
//         printf("%d",num2);
//     return 0;
// }

/*상근이의 할머니는 아래 그림과 같이 오래된 다이얼 전화기를 사용한다.
전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다.
숫자를 하나 누르면 다이얼이 처음 위치로 돌아가고, 다음 숫자를 누르려면 다이얼을 처음 위치에서 다시 돌려야 한다.

숫자 1을 걸려면 총 2초가 필요하다.
1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.

상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다.
즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다.
예를 들어, UNUCIC는 868242와 같다.
할머니가 외운 단어가 주어졌을 때,
이 전화를 걸기 위해서 필요한 최소 시간을 구하는 프로그램을 작성하시오.
*/
// #include <stdio.h>
// int main(void)
// {
//     char arr[15];
//     int sum = 0;
//     scanf("%s", arr);
//     int i;
//     for (i = 0; i < 15; i++)
//     {
//         if (arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C')
//             sum += 3;
//         else if (arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F')
//             sum += 4;
//         else if (arr[i] == 'G' || arr[i] == 'H' || arr[i] == 'I')
//             sum += 5;
//         else if (arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'L')
//             sum += 6;
//         else if (arr[i] == 'M' || arr[i] == 'N' || arr[i] == 'O')
//             sum += 7;
//         else if (arr[i] == 'P' || arr[i] == 'Q' || arr[i] == 'R' || arr[i] == 'S')
//             sum += 8;
//         else if (arr[i] == 'T' || arr[i] == 'U' || arr[i] == 'V')
//             sum += 9;
//         else if (arr[i] == 'W' || arr[i] == 'X' || arr[i] == 'Y' || arr[i] == 'Z')
//             sum += 10;
//     }
//     printf("%d",sum);
//     return 0;
// }

/*
크로아티아 알파벳 문제
*/
// #include <stdio.h>
// int main(void)
// {
//     char arr[102];
//     scanf("%s", arr);
//     int i=0;
//     int count = 0;
//     while (1)
//     {
//         if (arr[i] == '\0')
//             break;

//         if (arr[i] == 'c' && arr[i + 1] == '=')
//         {
//             count++;
//             i++;
//         }
//         else if (arr[i] == 'c' && arr[i + 1] == '-')
//         {
//             count++;
//             i++;
//         }
//         else if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=')
//         {
//             count++;
//             i=i+2;
//         }
//         else if (arr[i] == 'd' && arr[i + 1] == '-')
//         {
//             count++;
//             i++;
//         }
//         else if (arr[i] == 'l' && arr[i + 1] == 'j')
//         {
//             count++;
//             i++;
//         }
//         else if (arr[i] == 'n' && arr[i + 1] == 'j')
//         {
//             count++;
//             i++;
//         }
//         else if (arr[i] == 's' && arr[i + 1] == '=')
//         {
//             count++;
//             i++;
//         }
//         else if (arr[i] == 'z' && arr[i + 1] == '=')
//         {
//             count++;
//             i++;
//         }
//         else
//         {
//             count++;
//         }
//         i++;
//     }
//     printf("%d", count);
//     return 0;
// }

#include <stdio.h>
int main(void)
{
    int set;
    int i, j = 0;
    scanf("%d", &set); //테스트 케이스 수
    int count = set;
    char arr[set][1000]; //이차원 배열
    char arrco[1000];

    for (i = 0; i < set; i++)
    {
        scanf("%s", arr[i]); //테스트케이스 입력
    }
    int temp;
    int n = 0;
    for (i = 0; i < set; i++) // 2차원 배열 비교
    {
        temp = arr[i][0];

        for (j = 1; arr[i][j-1] != '\0'; j++) // 다른거 나올때 그 전꺼 모으기 반복
        {
            if (temp != arr[i][j])
            {
                arrco[n++] = temp; //나온거 모아놓기
                temp = arr[i][j];
            }
            else if (temp == arr[i][j])
            {
                continue;
            }

        }
        int r;
        arrco[n] = '\0'; //마지막에 널문자 넣기
        n=0;
        temp = arrco[0];
        for (int k = 1; arrco[k] != '\0'; k++) //중복되는 것 있으면 차감하고 나가기
        {
            for (r = k; arrco[r] != '\0'; r++)
            {
                if (temp == arrco[r])
                {
                    count--;
                    break;
                }
            }
            if (temp == arrco[r])
            {
                break;
            }
            temp = arrco[k];
        }
    }
    printf("%d", count);
    return 0;
}