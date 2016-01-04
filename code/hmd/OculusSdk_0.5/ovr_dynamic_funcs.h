// First argument to macro is a boolean indicating whether or not a function is
// essential or not. If a non-essential function is not exported by the DLL,
// then initialization fails.

OVRFUNC(true,  ovrBool,          ovr_Initialize,                 ())
OVRFUNC(false, void,             ovr_InitializeRenderingShim,    ())
OVRFUNC(true,  void,             ovr_Shutdown,                   ())
OVRFUNC(true,  const char*,      ovr_GetVersionString,           ())
OVRFUNC(true,  int,              ovrHmd_Detect,                  ())
OVRFUNC(true,  ovrHmd,           ovrHmd_Create,                  (int index))
OVRFUNC(true,  void,             ovrHmd_Destroy,                 (ovrHmd hmd))
OVRFUNC(false, ovrHmd,           ovrHmd_CreateDebug,             (ovrHmdType type))
OVRFUNC(true,  const char*,      ovrHmd_GetLastError,            (ovrHmd hmd))
OVRFUNC(true,  ovrBool,          ovrHmd_AttachToWindow,          (ovrHmd hmd, void* window, const ovrRecti* destMirrorRect, const ovrRecti* sourceRenderTargetRect))
OVRFUNC(true,  unsigned int,     ovrHmd_GetEnabledCaps,          (ovrHmd hmd))
OVRFUNC(true,  void,             ovrHmd_SetEnabledCaps,          (ovrHmd hmd, unsigned int hmdCaps))
OVRFUNC(true,  ovrBool,          ovrHmd_ConfigureTracking,       (ovrHmd hmd, unsigned int supportedTrackingCaps, unsigned int requiredTrackingCaps))
OVRFUNC(true,  void,             ovrHmd_RecenterPose,            (ovrHmd hmd))
OVRFUNC(true,  ovrTrackingState, ovrHmd_GetTrackingState,        (ovrHmd hmd, double absTime))
OVRFUNC(true,  ovrSizei,         ovrHmd_GetFovTextureSize,       (ovrHmd hmd, ovrEyeType eye, ovrFovPort fov, float pixelsPerDisplayPixel))
OVRFUNC(true,  ovrBool,          ovrHmd_ConfigureRendering,      (ovrHmd hmd, const ovrRenderAPIConfig* apiConfig, unsigned int distortionCaps, const ovrFovPort eyeFovIn[2], ovrEyeRenderDesc eyeRenderDescOut[2] ))
OVRFUNC(true,  ovrFrameTiming,   ovrHmd_BeginFrame,              (ovrHmd hmd, unsigned int frameIndex))
OVRFUNC(true,  void,             ovrHmd_EndFrame,                (ovrHmd hmd, const ovrPosef renderPose[2], const ovrTexture eyeTexture[2]))
OVRFUNC(true,  void,             ovrHmd_GetEyePoses,             (ovrHmd hmd, unsigned int frameIndex, ovrVector3f hmdToEyeViewOffset[2], ovrPosef outEyePoses[2], ovrTrackingState* outHmdTrackingState))
OVRFUNC(true,  ovrPosef,         ovrHmd_GetHmdPosePerEye,        (ovrHmd hmd, ovrEyeType eye))
OVRFUNC(true,  ovrEyeRenderDesc, ovrHmd_GetRenderDesc,           (ovrHmd hmd, ovrEyeType eyeType, ovrFovPort fov))
OVRFUNC(false, ovrBool,          ovrHmd_CreateDistortionMesh,    (ovrHmd hmd, ovrEyeType eyeType, ovrFovPort fov, unsigned int distortionCaps, ovrDistortionMesh *meshData))
OVRFUNC(false, void,             ovrHmd_DestroyDistortionMesh,   (ovrDistortionMesh* meshData ))
OVRFUNC(false, void,             ovrHmd_GetRenderScaleAndOffset, (ovrFovPort fov, ovrSizei textureSize, ovrRecti renderViewport, ovrVector2f uvScaleOffsetOut[2] ))
OVRFUNC(true,  ovrFrameTiming,   ovrHmd_GetFrameTiming,          (ovrHmd hmd, unsigned int frameIndex))
OVRFUNC(false, ovrFrameTiming,   ovrHmd_BeginFrameTiming,        (ovrHmd hmd, unsigned int frameIndex))
OVRFUNC(false, void,             ovrHmd_EndFrameTiming,          (ovrHmd hmd))
OVRFUNC(false, void,             ovrHmd_ResetFrameTiming,        (ovrHmd hmd, unsigned int frameIndex))
OVRFUNC(false, void,             ovrHmd_GetEyeTimewarpMatrices,  (ovrHmd hmd, ovrEyeType eye, ovrPosef renderPose, ovrMatrix4f twmOut[2]))
OVRFUNC(true,  ovrMatrix4f,      ovrMatrix4f_Projection,         (ovrFovPort fov, float znear, float zfar, ovrBool rightHanded ))
OVRFUNC(true,  ovrMatrix4f,      ovrMatrix4f_OrthoSubProjection, (ovrMatrix4f projection, ovrVector2f orthoScale, float orthoDistance, float eyeViewAdjustX))
OVRFUNC(true,  double,           ovr_GetTimeInSeconds,           ())
OVRFUNC(true,  double,           ovr_WaitTillTime,               (double absTime))
OVRFUNC(false, ovrBool,          ovrHmd_ProcessLatencyTest,      (ovrHmd hmd, unsigned char rgbColorOut[3]))
OVRFUNC(false, const char*,      ovrHmd_GetLatencyTestResult,    (ovrHmd hmd))
OVRFUNC(false, void,             ovrHmd_GetHSWDisplayState,      (ovrHmd hmd, ovrHSWDisplayState *hasWarningState))
OVRFUNC(false, ovrBool,          ovrHmd_DismissHSWDisplay,       (ovrHmd hmd))
OVRFUNC(false, ovrBool,          ovrHmd_GetBool,                 (ovrHmd hmd, const char* propertyName, ovrBool defaultVal))
OVRFUNC(false, ovrBool,          ovrHmd_SetBool,                 (ovrHmd hmd, const char* propertyName, ovrBool value))
OVRFUNC(false, int,              ovrHmd_GetInt,                  (ovrHmd hmd, const char* propertyName, int defaultVal))
OVRFUNC(false, ovrBool,          ovrHmd_SetInt,                  (ovrHmd hmd, const char* propertyName, int value))
OVRFUNC(false, float,            ovrHmd_GetFloat,                (ovrHmd hmd, const char* propertyName, float defaultVal))
OVRFUNC(false, ovrBool,          ovrHmd_SetFloat,                (ovrHmd hmd, const char* propertyName, float value))
OVRFUNC(false, unsigned int,     ovrHmd_GetFloatArray,           (ovrHmd hmd, const char* propertyName, float values[], unsigned int arraySize))
OVRFUNC(false, ovrBool,          ovrHmd_SetFloatArray,           (ovrHmd hmd, const char* propertyName, float values[], unsigned int arraySize))
OVRFUNC(false, const char*,      ovrHmd_GetString,               (ovrHmd hmd, const char* propertyName, const char* defaultVal))
OVRFUNC(false, ovrBool,          ovrHmd_SetString,               (ovrHmd hmddesc, const char* propertyName, const char* value))
OVRFUNC(false, ovrBool,          ovrHmd_GetLatencyTest2DrawColor, (ovrHmd hmddesc, unsigned char rgbColorOut[3]))

// These functions are undocumented and not present in the header, but are exported by OVR_CAPI.cpp
OVRFUNC(false, void,             ovrHmd_RegisterPostDistortionCallback, (ovrHmd hmddesc, void* callback))
OVRFUNC(false, void,             ovrHmd_AddDistortionTimeMeasurement, (ovrHmd hmddesc, double distortionTimeSeconds))
OVRFUNC(false, void,             ovrHmd_GetLatencyTestDrawColor, (ovrHmd hmddesc, unsigned char rgbColorOut[3]))