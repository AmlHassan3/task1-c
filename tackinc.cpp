#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char name[10][10] = {"aml", "ahmed", "sayed", "rania", "sohaila"};
    int password[10] = {95, 1012, 99, 19, 63};
    int indx=5;
    printf("Will you register or login : ");
    char type[10];
    scanf("%s", type);
    if (strcmp(type, "login") == 0) {
        char name1[10];
        printf("Enter your name : ");
        scanf("%s", name1);
        bool flag1 = false;
        int i=0;
        for (i; i < indx; i++) {
            if (strcmp(name[i], name1) == 0) {
                flag1 = true;
            }
        }
        int password1;
        printf("Enter your password : ");
        scanf("%d", &password1);
        bool flag2 = false;
        int j=0;
        for (j ; j < indx; j++) {
            if (password[j] == password1) {
                flag2 = true;
            }
        }
        if (flag1 && flag2) {
            printf("login successful");
        } else {
            printf("login fail");
        }
    } else {
        char name2[10];
        int password2;
        printf("Enter your name please: ");
        scanf("%s", name2);
        //name[indx][name2.ength()]=name2;
        printf("Enter your password please: ");
        scanf("%d", &password2);
        password[indx]=password2;
        indx++;
        printf("Register successful ");
    }
    return 0;
}
