#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL add(JNIEnv *, jobject, jint, jint);

JNIEXPORT jstring JNICALL hello(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
