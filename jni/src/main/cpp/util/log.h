//
// Created by Flueky Zuo on 2024/6/15.
//

#ifndef UTIL_LOG_H
#define UTIL_LOG_H

#include "android/log.h"

#define LOG_TAG "FLUEKY_TAG"

#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

#endif //UTIL_LOG_H
