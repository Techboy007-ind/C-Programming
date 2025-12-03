// #include <stdio.h>
// int main(){
    // for(int i = 1;i <= 5; i++){
    //     for(int j = 1; j <= i; j++){
    //         printf("*");
            
        
    //     }
    //     printf("\n");
    // }
    // return 0;
// }
// #include <stdio.h>
// int main() {
//     for (int i = 5; i >= 1; i--) {          // start from 5 stars down to 1
//         for (int j = 1; j <= i; j++) {      // print stars equal to i
//             printf("*");
//         }
//         printf("\n");   // next line
//     }
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     for (int i = 5; i >= 1; i--) {          // start from 5 stars down to 1
//         for (int j = 1; j <= i; j++) {      // print stars equal to i
//             printf("*");
//         }
//         printf("\n");   // next line
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n = 4,num = 0;                   

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", i + j );
            num++;  
        }
        printf("\n");
    }

    return 0;
}
