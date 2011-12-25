#include "HelloWorldJNIwithRegisterNatives.h"

jstring JNICALL hello(JNIEnv * env, jobject obj) {
  return (*env)->NewStringUTF(env, "Hello World!");
}

jint JNICALL add(JNIEnv * env, jobject obj, jint value1, jint value2) {
  return (value1 + value2);
}

// -----------------------------------------------------------------------------

/*
 * Table of methods associated with the DrmRawContent class.
 */
static JNINativeMethod HelloWorldMethods[] = {
    /* name, signature, funcPtr */
    {"hello", "()Ljava/lang/String;", (void*)hello},
    {"add", "(II)I", (void*)add},
};

/*
 * Register several native methods for one class.
 */
static int registerNativeMethods(JNIEnv* env, const char* className,
    JNINativeMethod* gMethods, int numMethods)
{
    jclass clazz;

    clazz = (*env)->FindClass(env, className);
    if (clazz == NULL)
        return JNI_FALSE;

    if ((*env)->RegisterNatives(env, clazz, gMethods, numMethods) < 0)
        return JNI_FALSE;

    return JNI_TRUE;
}

/*
 * Register native methods for all classes we know about.
 */
static int registerNatives(JNIEnv* env)
{
  if (!registerNativeMethods(env, "org/digimead/HelloWorldJNIwithRegisterNatives$",
        HelloWorldMethods, sizeof(HelloWorldMethods) / sizeof(HelloWorldMethods[0])))
    return JNI_FALSE;

  return JNI_TRUE;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved)
{
  JNIEnv* env = NULL;
  jint result = -1;

  if ((*vm)->GetEnv(vm, (void **)&env, JNI_VERSION_1_2) != JNI_OK)
    return JNI_ERR;

  if (!registerNatives(env))
    return JNI_ERR;

  /* success -- return valid version number */
  result = JNI_VERSION_1_4;
  return result;
}
