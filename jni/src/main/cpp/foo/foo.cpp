//
// Created by Flueky Zuo on 2024/6/15.
//

#include "foo/foo.h"
#include "foo/jni_main.h"
#include "log.h"

foo::foo() {
    bool bNeedDetach = false;
    jint ret = g_JavaVM->GetEnv((void **) &env, JNI_VERSION_1_4);
    if (ret < 0) {
        jint ret = g_JavaVM->AttachCurrentThread(&env, NULL);
        if (ret != 0) {
            LOGD("foo: java vm attach to current thread failed");
        }
        bNeedDetach = true;
    }

    hello = env->NewStringUTF("hello foo");
}

foo::~foo() {

}

void foo::print() {
    const char *hello_char = (const char *) env->GetStringUTFChars(hello, JNI_FALSE);
    LOGD("vm=%x, %s", &g_JavaVM, hello_char);
}
