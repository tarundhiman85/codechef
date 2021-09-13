//even odd
//#include "stdio.h"
//int main(){
//    int n;
//    printf("Enter a number=");
//    scanf("%d",&n);
//    if(n%2!=0){
//        printf("Odd");
//    }
//    else{
//        printf("Even");
//    }
//}
//prime or not
//#include "stdio.h"
//int main() {
//    int n;
//    printf("Enter a number=");
//    scanf("%d", &n);
//    int flag=0;
//    for(int i=2;i<n/2; i++){
//        if(n%i==0){
//            flag=1;
//            break;
//        }
//    }
//    if (n==1){
//        printf("not prime not composite");
//    }
//    else if(flag==1){
//        printf("Composite");
//    }
//    else{
//        printf("Prime");
//    }
//    return 0;
//}

//check palindrome
//#include "stdio.h"
//int main() {
//    int n;
//    printf("Enter a number=");
//    scanf("%d", &n);
//    int original=n;
//    int lastdigit=0;
//    int reverse=0;
//    while (n!=0){
//        lastdigit = n%10;
//        reverse = reverse * 10 + lastdigit;
//        n=n/10;
//    }
//    if(reverse==original){
//        printf("Palindrome");
//    }
//    else{
//        printf("Not Palindrome");
//    }
//    return 0;
//}
//Check For Perfect Number
//perfect means sum of proper divisor==number
//eg-> 6 1,2,3
//#include "stdio.h"
//int main() {
//    int n;
//    printf("Enter a number=");
//    scanf("%d", &n);
//    int sum=0;
//    for (int i = 1; i < n; i++) {
//        if(n%i==0){
//            sum+=i;
//        }
//    }
//    if(sum==n){
//        printf("Perfect Number");
//    }
//    else{
//        printf("Not perfect");
//    }
//    return 0;
//}

//Check Armstrong Number
//sum of power(no of digits) of digits==number
//#include "stdio.h"
//int toThePower(int n,int pow){
//    int number=n;
//    for (int i = 0; i < pow-1; i++) {
//        number*=n;
//    }
//    return number;
//}
//int noOfDigits(int n){
//    int number=0;
//    if (n<10){
//        return 1;
//    }
//    else{
//        while (n!=0){
//            n/=10;
//            number+=1;
//        }
//        return number;
//    }
//}
//int main() {
//    int n;
//    printf("Enter a number=");
//    scanf("%d", &n);
//    int original=n;
//    int lastdigit=0;
//    int sum=0;
//    int pow=noOfDigits(n);
//    while (n!=0){
//        lastdigit=n%10;
//        sum+=toThePower(lastdigit,pow);
//        n/=10;
//    }
//    if(sum==original){
//        printf("Armstrong");
//    } else{
//        printf("Not Armstrong");
//    }
//    return 0;
//}
//Strong Number
//sum of factorial digit==number
//#include "stdio.h"
//int fact(int n){
//    int number=1;
//    for (int i = 1; i <=n ; i++) {
//        number*=i;
//    }
//    return number;
//}
//int main() {
//    int n;
//    printf("Enter a number=");
//    scanf("%d", &n);
//    int sum = 0;
//    int original=n;
//    int lastdigit=0;
//    while (n!=0){
//        lastdigit=n%10;
//        sum+=fact(lastdigit);
//        n=n/10;
//    }
//    if(sum==original){
//        printf("Strong");
//    } else{
//        printf("Not Strong");
//    }
//    return 0;
//}
//Fibonnaci series print
//#include "stdio.h"
//int fib(int n){
//    if (n==0){
//        return 0;
//    }
//    if(n==1){
//        return 1;
//    }
//    return fib(n-1)+fib(n-2);
//}
//int main(){
//    int n;
//    printf("Enter a limit=");
//    scanf("%d", &n);
//    int b=fib(n);
//    printf("%d",b);
//}
//Ways to run program
//1)Using IDE
//2)By double click
//3)Using command Line

//Arguments in main()
//Take something nature of function
//Actual and formal arguments
//main() may take arguments
//who calls main()?
#include "stdio.h"
#include "conio.h"
// 3 arguments we pass number of arguments
//argc means number of arguments
//*argv is a array of pointers that is char type
main(int argc,char *argv[]){
    int i;
    for (int j = 0; j < argc; j++)
    {
     printf("\n%s",argv[j]);
    }
   // printf("hello");
    getch();
}