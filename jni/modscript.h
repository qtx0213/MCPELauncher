/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager
#ifdef __cplusplus
extern "C" {
#endif
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_X
#define net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_X 0L
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_Y
#define net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_Y 1L
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_Z
#define net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_Z 2L
/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetPlayerLoc
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetPlayerLoc
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetPlayerEnt
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetPlayerEnt
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetLevel
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetLevel
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetPosition
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetPosition
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetVel
 * Signature: (IFI)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetVel
  (JNIEnv *, jclass, jint, jfloat, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeExplode
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeExplode
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeAddItemInventory
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeAddItemInventory
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeRideAnimal
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeRideAnimal
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetCarriedItem
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetCarriedItem
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativePreventDefault
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativePreventDefault
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetTile
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetTile
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSpawnEntity
 * Signature: (FFFILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSpawnEntity
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jint, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeClientMessage
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeClientMessage
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetNightMode
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetNightMode
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetTile
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetTile
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetPositionRelative
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetPositionRelative
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetRot
 * Signature: (IFF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetRot
  (JNIEnv *, jclass, jint, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetYaw
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetYaw
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetPitch
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetPitch
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetCarriedItem
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetCarriedItem
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeOnGraphicsReset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeOnGraphicsReset
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeDefineItem
 * Signature: (IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeDefineItem
  (JNIEnv *, jclass, jint, jint, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetFov
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetFov
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetMobSkin
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetMobSkin
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetupHooks
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetupHooks
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativeModPEApi */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeModPEApi
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeModPEApi
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativeEntityApi */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeEntityApi
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeEntityApi
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativePlayerApi */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativePlayerApi
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativePlayerApi
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativeLevelApi */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeLevelApi
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeLevelApi
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativeEntity */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeEntity
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeEntity
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativePointer */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativePointer
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativePointer
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_BlockHostObject */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_BlockHostObject
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_BlockHostObject
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_ScriptState */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_ScriptState
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_ScriptState
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
