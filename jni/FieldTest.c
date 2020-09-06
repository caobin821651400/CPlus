//
// Created by Joker on 2020/8/27.
//
#include "../jni.h"
#include <stdio.h>
#include <string.h>

//C里面不像java区分private和public
//只区分 static和非static

/*
 * 获取JAVA中变量，并改变值
 * Class:     com_example_cb_test_native1_FieldTest
 * Method:    testField
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jni1_FieldTest_testField
        (JNIEnv *env, jobject jobject) {
    //第一步，得到这个类
    jclass clz = (*env)->GetObjectClass(env, jobject);
    //第二步,得到fieldID
    jfieldID jfid = (*env)->GetFieldID(env, clz, "a", "I");
    //第三步,得到a变量
    jint a = (*env)->GetIntField(env, jobject, jfid);
    printf("C中得到JAVA中的变量a=%d\n", a);
    (*env)->SetIntField(env, jobject, jfid, a + 100);
}

/*
 * 获取JAVA中静态变量，并改变值
 * Class:     com_example_cb_test_native1_FieldTest
 * Method:    testStaticField
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jni1_FieldTest_testStaticField
        (JNIEnv *env, jobject jobject) {
    jclass clz = (*env)->GetObjectClass(env, jobject);
    jfieldID fid = (*env)->GetStaticFieldID(env, clz, "b", "I");
    jint b = (*env)->GetStaticIntField(env, clz, fid);
    printf("C中获取静态的b=%d\n", b);
    (*env)->SetStaticIntField(env, clz, fid, b + 66);
}

