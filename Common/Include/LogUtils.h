#ifndef _LOG_UTILS_H_
#define _LOG_UTILS_H_
 
#include <android/log.h>
#include <string.h>
 
#define DEBUG // 可以通过 CmakeLists.txt 等方式来定义在这个宏，实现动态打开和关闭LOG
 
#ifdef DEBUG

#define LOG_TAG "Lukaskliu"

#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#else

#define LOGV(...);
#define LOGD(...);
#define LOGI(...);
#define LOGW(...);
#define LOGE(...);

#endif // DEBUG
 
#endif // _LOG_UTILS_H_