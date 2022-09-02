//Hello World! 출력하시오
// #include<stdio.h>
// int main(void)
// {
// 	printf("Hello World!");
// 	return 0;
// }

//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// #include<stdio.h>
// int main(void)
// {
//     int A=0,B=0;
//     scanf("%d %d",&A,&B);
//     printf("%d",A+B);
//     return 0;
// }

//두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.
// #include<stdio.h>
// int main(void)
// {    int A=0,B=0;
//     scanf("%d %d",&A,&B);
//      printf("%d",A-B);
//     return 0;
// }

//두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.
// #include<stdio.h>
// int main(void)
// {    
//     int A=0,B=0;
//     scanf("%d %d",&A,&B);
//     printf("%d",A*B);
//     return 0;
// }

//두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
// #include<stdio.h>
// int main(void)
// {    
//     double A=0,B=0;
//     scanf("%lf %lf",&A,&B);
//     printf("%.12f",A/B);
//     return 0;
// }

// 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
// #include<stdio.h>
// int main(void)
// {    
//     int A=0,B=0,c=0;
//     scanf("%d %d\n",&A,&B);
//     printf("%d\n",A+B);
//     printf("%d\n",A-B);
//     printf("%d\n",A*B);
//     printf("%d\n",A/B);
//     printf("%d\n",A%B);
//     return 0;
// }

/* 준하는 사이트에 회원가입을 하다가 joonas라는 아이디가 이미 존재하는 것을 보고 놀랐다. 
준하는 놀람을 ??!로 표현한다. 준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어졌을 때, 
놀람을 표현하는 프로그램을 작성하시오. */
// #include <stdio.h>
// int main(void) 
// {
// 	char arr[51];
// 	int i;
//     scanf("%s",arr);
// 	for(i=0;i<51;i++)
// 	{
// 		if(arr[i]==0)
// 		{
// 			break;
// 		}
//         else
//         {
//             printf("%c",arr[i]);
//         }
		
// 	}
// 	printf("?\?!");
	
// }

/*서기 연도를 알아보고 싶은 불기 연도 y가 주어진다. (1000 ≤ y ≤ 3000)
불기 연도를 서기 연도로 변환한 결과를 출력한다.*/
// #include <stdio.h>
// int main(void)
// {
//     int y=0;
//     scanf("%d",&y);
//     if(y>=1000 && y<=3000)
//     {
//         y-=543;
//     }
//     printf("%d",y);
//     return 0;
// }

/*첫째 줄에 동혁이가 찾은 흰색 킹, 퀸, 룩, 비숍, 나이트, 폰의 개수가 주어진다. 
이 값은 0보다 크거나 같고 10보다 작거나 같은 정수이다.
첫째 줄에 입력에서 주어진 순서대로 몇 개의 피스를 더하거나 빼야 되는지를 출력한다.
만약 수가 양수라면 동혁이는 그 개수 만큼 피스를 더해야 하는 것이고, 음수라면 제거해야 하는 것이다.*/
// #include <stdio.h>
// int main(void)
// {
//     int che[10];
//     int i;
//     for (i = 0; i < 6; i++)
//     {
//         scanf("%d", &che[i]);
//     }
//     for(i=0;i<6;i++)
//     {
//         if (che[i] >= 0 & che[i] <= 10)
//         {
//             if (i == 0)
//                 printf("%d", 1-che[i]);
//             else if (i == 1)
//                 printf("%d", 1-che[i]);
//             else if (i == 2)
//                 printf("%d", 2-che[i]);
//             else if (i == 3)
//                 printf("%d", 2-che[i]);
//             else if (i == 4)
//                 printf("%d", 2-che[i]);
//             else
//                 printf("%d",8-che[i]);
//         }
//         if(i==5)
//         break;
//         printf(" ");
//     }
//     return 0;
// }

/*(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.*/
// #include<stdio.h>
// int main (void)
// {
//     int a=0,b=0,c=0;
//     scanf("%d %d %d",&a,&b,&c);
//     printf("%d\n",(a+b)%c);
//     printf("%d\n",((a%c)+(b%c))%c);
//     printf("%d\n",(a*b)%c);
//     printf("%d\n",((a%c)*(b%c)%c));
//     return 0;
// }

//3자리수 3자리수 곱셈
// #include<stdio.h>
// int main (void)
// {
//     int a,b;
//     int result[3]; 
//     scanf("%d %d",&a,&b);//곱하는 숫자들
//     result[0]=a*((b%100)%10);//a와b의 1의자리 곱 
//     result[1]=a*((b%100)/10);//a와b의 10의자리 곱 
//     result[2]=a*(b/100);//a와b의 100의자리 곱 
//     printf("%d\n%d\n%d\n",result[0],result[1],result[2]);
//     printf("%d",a*b);
//     return 0;
// }

//고양이 만들기
// #include<stdio.h>
// int main (void)
// {
//     printf("\\    /\\\n )  ( ')\n(  /  )\n \\(__)|");
//     return 0;
// }
