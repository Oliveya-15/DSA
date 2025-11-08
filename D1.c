// STARTING WITH DSA BASICS :-
//  PATTERNS :-

/* Patter 1:-
1234
1234
1234 */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

/* Patter 1:-
****
****
****
****

#include <stdio.h>
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}    */

/* Patter 3:-
ABCD
ABCD
ABCD
ABCD

#include <stdio.h>
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char c = 'A';
        for(int j=0;j<n;j++){
            printf("%c",c);
            c=c+1;
        }
        printf("\n");
    }
    return 0;
}    */

/* Patter 4:-
123
456
789

#include <stdio.h>
int main() {
    int n;
    int num=1;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}    */

/* Patter 4:-
*
**
***
****

#include <stdio.h>
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}    */

/* Patter 4:-
1
22
333
4444

#include <stdio.h>
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d",i+1);
        }
        printf("\n");
    }
    return 0;
}    */

/* Patter 4:-
1
12
123
1234

#include <stdio.h>
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}    */

/* Patter 4:-
1
21
321
4321

#include <stdio.h>
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}    */

/* Patter 4:-
1
23
456
78910

#include <stdio.h>
int main() {
    int num = 1;
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}    */

/* Patter 4:-
1111
 222
  33
   4

#include <stdio.h>
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
        printf("%d",i+1);
        }
        printf("\n");
    }
    return 0;
}    */

/* Patter 4:-
      1
     121
    12321
   1234321

#include <stdio.h>
int main() {
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
            for(int k=1;k<=i+1;k++){
                printf("%d",k);
            }
                for(int m=i; m>=1;m--){
                    printf("%d",m);
                }
        printf("\n");
    }
    return 0;
}    */


/* Patter 4:-
      *
    *   *
   *     *
  *       *
   *     *
    *  *
     *

#include <stdio.h>

int main() {
    int n;
    int i, j, k;               
    printf("Enter the range: ");
    if (scanf("%d", &n) != 1) return 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            printf(" ");
        }
        printf("*");
        if(i != 0){
            for(j = 0; j < 2*i - 1; j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");          
    }

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < i + 1; j++){
            printf(" ");
        }
        printf("*");
        if (i != n - 2){
            for(k = 0; k < 2*(n - i) - 5; k++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
    */



