#include <stdio.h> 



int main(){
  struct user
  {
    int id;
    char name[50];
    char password[30];
    int user_num;
  }user_1;
  
  printf("Ingrese su nombre: ");
  scanf("%s", user_1.name);
  printf("Ingrese su contraseña: ");
  scanf("%s", user_1.password);
  printf("Ingrese su id: ");
  scanf("%d", &user_1.id);
  user_1.user_num=1;
  
  FILE *fp; 
  fp = fopen("user_data", "r+");
  fwrite( user_1.name, sizeof(char), sizeof(user_1.name), fp );
  
  fclose(fp);



  return 0;
}



