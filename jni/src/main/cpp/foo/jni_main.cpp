//
// Created by Flueky Zuo on 2024/6/15.
//

#include "foo/jni_main.h"
#include "log.h"

JavaVM *g_JavaVM = NULL;

jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    LOGD("vm=%x, foo JNI onLoad", &g_JavaVM);
    g_JavaVM = vm;
    jint result = -1;
    JNIEnv *env = NULL;
    result = vm->GetEnv((void **) &env, JNI_VERSION_1_4);  //从JavaVM获取JNIEnv，一般使用1.4的版本
    return JNI_VERSION_1_4;
}

__attribute__((constructor)) void foo_onLoad(){
    LOGD("vm=%x, foo on load", &g_JavaVM);
}