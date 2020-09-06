//
// Created by Joker on 2020/8/26.
//
#include <stdio.h>
#include <stdlib.h>//引入头文件 java import
#include "../jni.h"

void fun1(JNIEnv *env, jobject jobject) {
    printf("tset1执行\n");
}

jstring fun2(JNIEnv *env, jobject jobject) {
    return (*env)->NewStringUTF(env, "tset2执行\n");
}

jint fun3( JNIEnv *env,jobject jobject){
    printf("tset3执行\n");
    return 100;
}

jfloat fun4(JNIEnv *env,jobject jobect){
    printf("tset4执行\n");
    return 3.141592612;
}

static const char *mClassName = "jni1/NativeClass";

static const JNINativeMethod mMethods[] = {
        {"test1", "()V",                 (void *) fun1},
        {"test2", "()Ljava/lang/String;", (void *) fun2},
        {"test3", "()I", (void *) fun3},
        {"test4", "()F", (void *) fun4}
};

JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM *vm, void *reserved) {
    printf("hello dynamic0\n");
    JNIEnv *env = NULL;
    //获得 JniEnv
    int r = (*vm)->GetEnv(vm,(void **) &env, JNI_VERSION_1_4);
    if (r != JNI_OK) {
        return -1;
    }
    jclass mainActivityCls = (*env)->FindClass(env, mClassName);
    // 注册 如果小于0则注册失败
    r = (*env)->RegisterNatives(env,mainActivityCls, mMethods, 4);
    if (r != JNI_OK) { return -1; }
    printf("hello dynamic1\n");
    return JNI_VERSION_1_4;
}

