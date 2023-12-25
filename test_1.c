#include<stdio.h>

int main()
{
char message[100],message1[100], ch;
int i, key,xx;
printf("\nEnter texts  \n");
gets(message);
printf("Enter key: ");
scanf("%d", &key);

printf("1-Encrpt \n 2- Decrypt \n");
scanf("%d",&xx);
switch(xx){
case 1:
for(i = 0; message[i] != '\0'; ++i){
ch = message[i];
if(ch >= 'a' && ch <= 'z')
{
ch = ch + key;
if(ch > 'z')
{
ch = ch - 'z' + 'a' - 1;
}
message[i] = ch;
}

else if(ch >= 'A' && ch <= 'Z'){
ch = ch + key;
if(ch > 'Z'){
ch = ch - 'Z' + 'A' - 1;
}
message[i] = ch;
}
}
printf("Encrypted message: %s", message);
break;

case 2:
for(i = 0; message[i] != '\0'; ++i){
ch = message[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch - key;
if(ch < 'a'){
ch = ch + 'z' - 'a' + 1;
}
message[i] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch - key;
if(ch > 'A'){
ch = ch + 'Z' - 'A' +1;
}
message[i] = ch;
}
}
printf("Decrypted message: %s", message);
break;
    }

return 0;
}
