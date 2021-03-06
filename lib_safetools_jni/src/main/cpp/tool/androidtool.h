#include "jni.h"

#ifndef CMAKE_JNITOOLS_DEVICETOOL_H
#define CMAKE_JNITOOLS_DEVICETOOL_H

int get_ro_build_version_sdk();

// result 1: isdebug  0: not debug
int isdebug();

///////////////////////////////////////////////////

jclass getClass(JNIEnv *env, jobject object);

jobject getContext(JNIEnv *env);

char *getFilesDirAbsolutePath(JNIEnv *env);

//jstring getHost(JNIEnv *env, jstring filesDirAbsolutePath);

jstring getPackageName(JNIEnv *env);

jobject getPackageInfo(JNIEnv *env);

void toast(JNIEnv *env, const char *message);

jlong getMainThreadId(JNIEnv *env);

jlong getCurrentThreadId(JNIEnv *env);

void runLooperPrepare(JNIEnv *env);

void runLooperLoop(JNIEnv *env);

#endif //CMAKE_JNITOOLS_DEVICETOOL_H
