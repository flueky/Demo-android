//
// Created by Flueky Zuo on 2024/6/15.
//

#include "baz/baz.h"
#include "baz/jni_main.h"
#include "log.h"

baz::baz() {
    bool bNeedDetach = false;
    jint ret = g_JavaVM->GetEnv((void **) &env, JNI_VERSION_1_4);
    if (ret < 0) {
        jint ret = g_JavaVM->AttachCurrentThread(&env, NULL);
        if (ret != 0) {
            LOGD("baz: java vm attach to current thread failed");
        }
        bNeedDetach = true;
    }

    hello = env->NewStringUTF("hello baz");
}

baz::~baz() {

}

void baz::print() {
    const char *hello_char = (const char *) env->GetStringUTFChars(hello, JNI_FALSE);
    LOGD("vm=%x, %s", &g_JavaVM, hello_char);
}
