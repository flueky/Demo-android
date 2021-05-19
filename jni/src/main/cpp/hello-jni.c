#include <jni.h>
#include <stdlib.h>

jstring func2  //函数名字可以随便取，不过参数一定要和javah生成的函数的参数一致，包括返回值
        (JNIEnv *env, jobject jobj) {
    return (*env)->NewStringUTF(env, "hello world");
}

jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    jint result = -1;

    JNIEnv *env = NULL;
    result = (*vm)->GetEnv(vm, (void **) &env, JNI_VERSION_1_4);  //从JavaVM获取JNIEnv，一般使用1.4的版本
    if (result != JNI_OK)
        return result;
    JNINativeMethod gMethods[] = { //定义批量注册的数组，是注册的关键部分
            {"hello", "()Ljava/lang/String;", (void *) func2} // func2是在java中声明的native函数名，"()V"是函数的签名，可以通过javah获取。
    };

    jclass clz = (*env)->FindClass(env, "com/flueky/lib/Test");
    result = (*env)->RegisterNatives(env, clz, gMethods, 1);
    if (result == JNI_OK)
        result = JNI_VERSION_1_4;
    return result;
}