//
// Created by Joker on 2020/8/27.
//

#include "../jni.h"
#include <stdio.h>
#include <string.h>


JNIEXPORT jstring JNICALL Java_jni1_StringTest_sayHello
        (JNIEnv *env, jobject jobject, jstring jstr) {
    const char *c_str = NULL;
    jboolean isCopy;
    c_str = (*env)->GetStringUTFChars(env, jstr, &isCopy);
    if (c_str == NULL)return NULL;

//    //第一种方式 char *拼接
//    //1.malloc 分配空间
//    //2.初始化
//    //3.拼接
//    char buff[128] = {0};
//    sprintf(buff, "Hello 你好%s", c_str);

    //另一种 直接用库string.h 库中的API
    char hello[] = "Hello  你的名字是";
    char *p_str = strcat(hello, c_str);

    //用完释放
    (*env)->ReleaseStringUTFChars(env, jstr, c_str);
    return (*env)->NewStringUTF(env, p_str);
}


