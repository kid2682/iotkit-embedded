#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cJSON.h"
#include "iot_import.h"
#define BUFFER_SIZE 1024
// void send(){
//     cJSON *usr;

//     usr=cJSON_CreateObject();   //创建根数据对象
//     cJSON_AddStringToObject(usr,"name","fengxin");  //加入键值，加字符串
//     cJSON_AddStringToObject(usr,"passwd","123");
//     cJSON_AddNumberToObject(usr,"num",1);  //加整数

//     char *out = cJSON_PrintUnformatted(usr);   //将json形式打印成正常字符串形式
//     printf("%s\n",out);
//     // 释放内存  
//     cJSON_Delete(usr);  
//     free(out); 

// }

int main()
{
    char* host = "127.0.0.1";
    char buf[BUFSIZ];
    uint16_t port = 8088;
    printf("out of demo!\n");
    uintptr_t tcp = HAL_TCP_Establish(host,port);
    HAL_TCP_Read(tcp,buf,BUFSIZ,10000);
    printf("%s\n",buf);
    HAL_TCP_Write(tcp,"1",1,10000);
    // send();
    return 0;
}
