#include <stdio.h>
#include <string.h>

int main() {
    char data[100];
    int a[26];
    int i,j,n,g=0;
    scanf("%d",&n);
    for(n; n--; g += !j){
        scanf("%s",data);
        
        for(i=0;i<26;i++) a[i]=0;
        
        for(i=j=0;data[i];i++){
            if(data[i] != data[i+1]){
                j += a[data[i] - 'a']++;
                printf("%d" , j);
            }
        }
        printf("\n");
    }
    printf("%d",g);
    return 0;
}

//더 천재임 무서운사람 포문하나줄임


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s[101]; // 최대 100자짜리 문자열 저장
//     int t, i, c, k, j, o;

//     scanf("%d", &t); // 테스트 케이스 개수 입력
//     o = t;           // 처음엔 모든 단어가 그룹 단어라고 가정

//     for(i = 0; i < t; i++) {
//         scanf("%s", s); // 문자열 입력

//         for(j = 0; j < strlen(s); j++) {
//             for(k = j; k < strlen(s); k++) {
//                 // 서로 다른 위치에서 같은 문자가 나오는데
//                 // 그 전에 그 문자가 바뀐 적이 있으면 그룹 단어 아님
//                 if(s[j] == s[k] && j != k && s[k - 1] != s[k]) {
//                     o--; // 그룹 단어가 아님 → 개수에서 제외
//                     goto r; // 바깥 for문으로 빠져나감
//                 }
//             }
//         }
//     r:;
//     }

//     printf("%d", o); // 그룹 단어 개수 출력
// }

// //이분은 걍 천재임