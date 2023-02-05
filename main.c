#include <stdio.h>
#include <string.h>

void loginAccount();
void addBookMark();
void deleteBookMark();
void filter();
void menu();
void checkUser(char check[]);

const char userName[] = "ThanhDat2505";
const char passWord[] = "ThanhDat8235";
char login[20];


void loginAccount(){
    checkUser(login);
}


void checkUser(char check[]){
    if (strlen(check) != strlen(userName)){
        printf("Account does not exist!");
    }
    for (int i = 0; i < strlen(login) ; i++) {
        if (check[i] != userName[i]) {
            printf("Wrong Username or Password!");
            break;
        };
    }
}



int main()
{
    fgets(login, sizeof(login), stdin);


    return 0;
}
