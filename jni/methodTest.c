//
// Created by Joker on 2020/8/30.
//

#include "../jni.h"
#include <stdio.h>
#include <string.h>

/**
 * 反射非静态方法
 * @param env
 * @param jobject
 * @param jstr
 */
JNIEXPORT void JNICALL Java_jni1_JniMain_callNormalMethod
        (JNIEnv *env, jobject jobj) {
    //找类，相当于java的Class.fromName()方法
    jclass jclz = (*env)->FindClass(env, "jni1/ClassMethod");
    if (jclz == NULL) {
        printf(" class is null\n");
        return;
    }
    //构造方法的方法名是 <init>
    jmethodID methodId = (*env)->GetMethodID(env, jclz, "<init>", "()V");
    if (methodId == NULL) {
        printf(" methodId is null\n");
        return;
    }
    //找到构造方法然后初始化它 new 一个class对象
    jobject object = (*env)->NewObject(env, jclz, methodId);
    //找到对应的方法
    jmethodID jmethodId = (*env)->GetMethodID(env, jclz, "callNormalMethod", "(Ljava/lang/String;I)V");
    jstring jstr = (*env)->NewStringUTF(env, " i am JNI from cb ");

    //调用方法->callNormalMethod
    (*env)->CallVoidMethod(env, object, jmethodId, jstr, 10086);
    //释放资源
    (*env)->DeleteLocalRef(env, jclz);
    (*env)->DeleteLocalRef(env, object);
    (*env)->DeleteLocalRef(env, jstr);
}

/**
 * 反射静态方法;静态方法不需要创建类型的实例 通过类名可以直接调用
 * @param env
 * @param jobject
 * @param jstr
 */
JNIEXPORT void JNICALL Java_jni1_JniMain_callStaticMethod
        (JNIEnv *env, jobject jobj) {
    //找类，相当于java的Class.fromName()方法
    jclass jclz = (*env)->FindClass(env, "jni1/ClassMethod");
    if (jclz == NULL) {
        printf(" class is null\n");
        return;
    }
    //找到对应的静态方法
    jmethodID jmethodId = (*env)->GetStaticMethodID(env, jclz, "callStaticMethod", "(Ljava/lang/String;I)V");
    jstring jstr = (*env)->NewStringUTF(env, "static i am JNI from cb ");

    //调用方法->callStaticMethod
    (*env)->CallStaticVoidMethod(env, jclz, jmethodId, jstr, 10001);
    //释放资源
    (*env)->DeleteLocalRef(env, jclz);
    (*env)->DeleteLocalRef(env, jstr);
}

/**
 * 反射静态方法;有返回值的
 * @param env
 * @param jobject
 * @param jstr
 */
JNIEXPORT void JNICALL Java_jni1_JniMain_callStaticObjectMethod
        (JNIEnv *env, jobject jobj) {

    jclass clz = (*env)->FindClass(env, "jni1/ClassMethod");
    if (clz == NULL) {
        printf(" clz is null\n");
        return;
    }
    jmethodID jmethodId = (*env)->GetStaticMethodID(env, clz, "callStaticObjectMethod",
                                                    "(Ljava/lang/String;)Ljava/lang/Object;");

    jstring jstring1 = (*env)->NewStringUTF(env, "i am string object\n");

    (*env)->CallStaticObjectMethod(env, clz, jmethodId, jstring1);

    (*env)->DeleteLocalRef(env, clz);
    (*env)->DeleteLocalRef(env, jstring1);
}
