#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/glx.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */


int GLAD_GLX_VERSION_1_0 = 0;
int GLAD_GLX_VERSION_1_1 = 0;
int GLAD_GLX_VERSION_1_2 = 0;
int GLAD_GLX_VERSION_1_3 = 0;
int GLAD_GLX_VERSION_1_4 = 0;
int GLAD_GLX_3DFX_multisample = 0;
int GLAD_GLX_AMD_gpu_association = 0;
int GLAD_GLX_ARB_context_flush_control = 0;
int GLAD_GLX_ARB_create_context = 0;
int GLAD_GLX_ARB_create_context_no_error = 0;
int GLAD_GLX_ARB_create_context_profile = 0;
int GLAD_GLX_ARB_create_context_robustness = 0;
int GLAD_GLX_ARB_fbconfig_float = 0;
int GLAD_GLX_ARB_framebuffer_sRGB = 0;
int GLAD_GLX_ARB_get_proc_address = 0;
int GLAD_GLX_ARB_multisample = 0;
int GLAD_GLX_ARB_robustness_application_isolation = 0;
int GLAD_GLX_ARB_robustness_share_group_isolation = 0;
int GLAD_GLX_ARB_vertex_buffer_object = 0;
int GLAD_GLX_EXT_buffer_age = 0;
int GLAD_GLX_EXT_create_context_es2_profile = 0;
int GLAD_GLX_EXT_create_context_es_profile = 0;
int GLAD_GLX_EXT_fbconfig_packed_float = 0;
int GLAD_GLX_EXT_framebuffer_sRGB = 0;
int GLAD_GLX_EXT_import_context = 0;
int GLAD_GLX_EXT_libglvnd = 0;
int GLAD_GLX_EXT_no_config_context = 0;
int GLAD_GLX_EXT_stereo_tree = 0;
int GLAD_GLX_EXT_swap_control = 0;
int GLAD_GLX_EXT_swap_control_tear = 0;
int GLAD_GLX_EXT_texture_from_pixmap = 0;
int GLAD_GLX_EXT_visual_info = 0;
int GLAD_GLX_EXT_visual_rating = 0;
int GLAD_GLX_INTEL_swap_event = 0;
int GLAD_GLX_MESA_agp_offset = 0;
int GLAD_GLX_MESA_copy_sub_buffer = 0;
int GLAD_GLX_MESA_pixmap_colormap = 0;
int GLAD_GLX_MESA_query_renderer = 0;
int GLAD_GLX_MESA_release_buffers = 0;
int GLAD_GLX_MESA_set_3dfx_mode = 0;
int GLAD_GLX_MESA_swap_control = 0;
int GLAD_GLX_NV_copy_buffer = 0;
int GLAD_GLX_NV_copy_image = 0;
int GLAD_GLX_NV_delay_before_swap = 0;
int GLAD_GLX_NV_float_buffer = 0;
int GLAD_GLX_NV_multisample_coverage = 0;
int GLAD_GLX_NV_present_video = 0;
int GLAD_GLX_NV_robustness_video_memory_purge = 0;
int GLAD_GLX_NV_swap_group = 0;
int GLAD_GLX_NV_video_capture = 0;
int GLAD_GLX_NV_video_out = 0;
int GLAD_GLX_OML_swap_method = 0;
int GLAD_GLX_OML_sync_control = 0;
int GLAD_GLX_SGIS_blended_overlay = 0;
int GLAD_GLX_SGIS_multisample = 0;
int GLAD_GLX_SGIS_shared_multisample = 0;
int GLAD_GLX_SGIX_fbconfig = 0;
int GLAD_GLX_SGIX_hyperpipe = 0;
int GLAD_GLX_SGIX_pbuffer = 0;
int GLAD_GLX_SGIX_swap_barrier = 0;
int GLAD_GLX_SGIX_swap_group = 0;
int GLAD_GLX_SGIX_video_resize = 0;
int GLAD_GLX_SGIX_visual_select_group = 0;
int GLAD_GLX_SGI_cushion = 0;
int GLAD_GLX_SGI_make_current_read = 0;
int GLAD_GLX_SGI_swap_control = 0;
int GLAD_GLX_SGI_video_sync = 0;
int GLAD_GLX_SUN_get_transparent_index = 0;



PFNGLXBINDCHANNELTOWINDOWSGIXPROC glad_glXBindChannelToWindowSGIX = NULL;
PFNGLXBINDHYPERPIPESGIXPROC glad_glXBindHyperpipeSGIX = NULL;
PFNGLXBINDSWAPBARRIERNVPROC glad_glXBindSwapBarrierNV = NULL;
PFNGLXBINDSWAPBARRIERSGIXPROC glad_glXBindSwapBarrierSGIX = NULL;
PFNGLXBINDTEXIMAGEEXTPROC glad_glXBindTexImageEXT = NULL;
PFNGLXBINDVIDEOCAPTUREDEVICENVPROC glad_glXBindVideoCaptureDeviceNV = NULL;
PFNGLXBINDVIDEODEVICENVPROC glad_glXBindVideoDeviceNV = NULL;
PFNGLXBINDVIDEOIMAGENVPROC glad_glXBindVideoImageNV = NULL;
PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC glad_glXBlitContextFramebufferAMD = NULL;
PFNGLXCHANNELRECTSGIXPROC glad_glXChannelRectSGIX = NULL;
PFNGLXCHANNELRECTSYNCSGIXPROC glad_glXChannelRectSyncSGIX = NULL;
PFNGLXCHOOSEFBCONFIGPROC glad_glXChooseFBConfig = NULL;
PFNGLXCHOOSEFBCONFIGSGIXPROC glad_glXChooseFBConfigSGIX = NULL;
PFNGLXCHOOSEVISUALPROC glad_glXChooseVisual = NULL;
PFNGLXCOPYBUFFERSUBDATANVPROC glad_glXCopyBufferSubDataNV = NULL;
PFNGLXCOPYCONTEXTPROC glad_glXCopyContext = NULL;
PFNGLXCOPYIMAGESUBDATANVPROC glad_glXCopyImageSubDataNV = NULL;
PFNGLXCOPYSUBBUFFERMESAPROC glad_glXCopySubBufferMESA = NULL;
PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC glad_glXCreateAssociatedContextAMD = NULL;
PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC glad_glXCreateAssociatedContextAttribsAMD = NULL;
PFNGLXCREATECONTEXTPROC glad_glXCreateContext = NULL;
PFNGLXCREATECONTEXTATTRIBSARBPROC glad_glXCreateContextAttribsARB = NULL;
PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC glad_glXCreateContextWithConfigSGIX = NULL;
PFNGLXCREATEGLXPBUFFERSGIXPROC glad_glXCreateGLXPbufferSGIX = NULL;
PFNGLXCREATEGLXPIXMAPPROC glad_glXCreateGLXPixmap = NULL;
PFNGLXCREATEGLXPIXMAPMESAPROC glad_glXCreateGLXPixmapMESA = NULL;
PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC glad_glXCreateGLXPixmapWithConfigSGIX = NULL;
PFNGLXCREATENEWCONTEXTPROC glad_glXCreateNewContext = NULL;
PFNGLXCREATEPBUFFERPROC glad_glXCreatePbuffer = NULL;
PFNGLXCREATEPIXMAPPROC glad_glXCreatePixmap = NULL;
PFNGLXCREATEWINDOWPROC glad_glXCreateWindow = NULL;
PFNGLXCUSHIONSGIPROC glad_glXCushionSGI = NULL;
PFNGLXDELAYBEFORESWAPNVPROC glad_glXDelayBeforeSwapNV = NULL;
PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC glad_glXDeleteAssociatedContextAMD = NULL;
PFNGLXDESTROYCONTEXTPROC glad_glXDestroyContext = NULL;
PFNGLXDESTROYGLXPBUFFERSGIXPROC glad_glXDestroyGLXPbufferSGIX = NULL;
PFNGLXDESTROYGLXPIXMAPPROC glad_glXDestroyGLXPixmap = NULL;
PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC glad_glXDestroyHyperpipeConfigSGIX = NULL;
PFNGLXDESTROYPBUFFERPROC glad_glXDestroyPbuffer = NULL;
PFNGLXDESTROYPIXMAPPROC glad_glXDestroyPixmap = NULL;
PFNGLXDESTROYWINDOWPROC glad_glXDestroyWindow = NULL;
PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC glad_glXEnumerateVideoCaptureDevicesNV = NULL;
PFNGLXENUMERATEVIDEODEVICESNVPROC glad_glXEnumerateVideoDevicesNV = NULL;
PFNGLXFREECONTEXTEXTPROC glad_glXFreeContextEXT = NULL;
PFNGLXGETAGPOFFSETMESAPROC glad_glXGetAGPOffsetMESA = NULL;
PFNGLXGETCLIENTSTRINGPROC glad_glXGetClientString = NULL;
PFNGLXGETCONFIGPROC glad_glXGetConfig = NULL;
PFNGLXGETCONTEXTGPUIDAMDPROC glad_glXGetContextGPUIDAMD = NULL;
PFNGLXGETCONTEXTIDEXTPROC glad_glXGetContextIDEXT = NULL;
PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC glad_glXGetCurrentAssociatedContextAMD = NULL;
PFNGLXGETCURRENTCONTEXTPROC glad_glXGetCurrentContext = NULL;
PFNGLXGETCURRENTDISPLAYPROC glad_glXGetCurrentDisplay = NULL;
PFNGLXGETCURRENTDISPLAYEXTPROC glad_glXGetCurrentDisplayEXT = NULL;
PFNGLXGETCURRENTDRAWABLEPROC glad_glXGetCurrentDrawable = NULL;
PFNGLXGETCURRENTREADDRAWABLEPROC glad_glXGetCurrentReadDrawable = NULL;
PFNGLXGETCURRENTREADDRAWABLESGIPROC glad_glXGetCurrentReadDrawableSGI = NULL;
PFNGLXGETFBCONFIGATTRIBPROC glad_glXGetFBConfigAttrib = NULL;
PFNGLXGETFBCONFIGATTRIBSGIXPROC glad_glXGetFBConfigAttribSGIX = NULL;
PFNGLXGETFBCONFIGFROMVISUALSGIXPROC glad_glXGetFBConfigFromVisualSGIX = NULL;
PFNGLXGETFBCONFIGSPROC glad_glXGetFBConfigs = NULL;
PFNGLXGETGPUIDSAMDPROC glad_glXGetGPUIDsAMD = NULL;
PFNGLXGETGPUINFOAMDPROC glad_glXGetGPUInfoAMD = NULL;
PFNGLXGETMSCRATEOMLPROC glad_glXGetMscRateOML = NULL;
PFNGLXGETPROCADDRESSPROC glad_glXGetProcAddress = NULL;
PFNGLXGETPROCADDRESSARBPROC glad_glXGetProcAddressARB = NULL;
PFNGLXGETSELECTEDEVENTPROC glad_glXGetSelectedEvent = NULL;
PFNGLXGETSELECTEDEVENTSGIXPROC glad_glXGetSelectedEventSGIX = NULL;
PFNGLXGETSWAPINTERVALMESAPROC glad_glXGetSwapIntervalMESA = NULL;
PFNGLXGETSYNCVALUESOMLPROC glad_glXGetSyncValuesOML = NULL;
PFNGLXGETTRANSPARENTINDEXSUNPROC glad_glXGetTransparentIndexSUN = NULL;
PFNGLXGETVIDEODEVICENVPROC glad_glXGetVideoDeviceNV = NULL;
PFNGLXGETVIDEOINFONVPROC glad_glXGetVideoInfoNV = NULL;
PFNGLXGETVIDEOSYNCSGIPROC glad_glXGetVideoSyncSGI = NULL;
PFNGLXGETVISUALFROMFBCONFIGPROC glad_glXGetVisualFromFBConfig = NULL;
PFNGLXGETVISUALFROMFBCONFIGSGIXPROC glad_glXGetVisualFromFBConfigSGIX = NULL;
PFNGLXHYPERPIPEATTRIBSGIXPROC glad_glXHyperpipeAttribSGIX = NULL;
PFNGLXHYPERPIPECONFIGSGIXPROC glad_glXHyperpipeConfigSGIX = NULL;
PFNGLXIMPORTCONTEXTEXTPROC glad_glXImportContextEXT = NULL;
PFNGLXISDIRECTPROC glad_glXIsDirect = NULL;
PFNGLXJOINSWAPGROUPNVPROC glad_glXJoinSwapGroupNV = NULL;
PFNGLXJOINSWAPGROUPSGIXPROC glad_glXJoinSwapGroupSGIX = NULL;
PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC glad_glXLockVideoCaptureDeviceNV = NULL;
PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC glad_glXMakeAssociatedContextCurrentAMD = NULL;
PFNGLXMAKECONTEXTCURRENTPROC glad_glXMakeContextCurrent = NULL;
PFNGLXMAKECURRENTPROC glad_glXMakeCurrent = NULL;
PFNGLXMAKECURRENTREADSGIPROC glad_glXMakeCurrentReadSGI = NULL;
PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC glad_glXNamedCopyBufferSubDataNV = NULL;
PFNGLXQUERYCHANNELDELTASSGIXPROC glad_glXQueryChannelDeltasSGIX = NULL;
PFNGLXQUERYCHANNELRECTSGIXPROC glad_glXQueryChannelRectSGIX = NULL;
PFNGLXQUERYCONTEXTPROC glad_glXQueryContext = NULL;
PFNGLXQUERYCONTEXTINFOEXTPROC glad_glXQueryContextInfoEXT = NULL;
PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC glad_glXQueryCurrentRendererIntegerMESA = NULL;
PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC glad_glXQueryCurrentRendererStringMESA = NULL;
PFNGLXQUERYDRAWABLEPROC glad_glXQueryDrawable = NULL;
PFNGLXQUERYEXTENSIONPROC glad_glXQueryExtension = NULL;
PFNGLXQUERYEXTENSIONSSTRINGPROC glad_glXQueryExtensionsString = NULL;
PFNGLXQUERYFRAMECOUNTNVPROC glad_glXQueryFrameCountNV = NULL;
PFNGLXQUERYGLXPBUFFERSGIXPROC glad_glXQueryGLXPbufferSGIX = NULL;
PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC glad_glXQueryHyperpipeAttribSGIX = NULL;
PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC glad_glXQueryHyperpipeBestAttribSGIX = NULL;
PFNGLXQUERYHYPERPIPECONFIGSGIXPROC glad_glXQueryHyperpipeConfigSGIX = NULL;
PFNGLXQUERYHYPERPIPENETWORKSGIXPROC glad_glXQueryHyperpipeNetworkSGIX = NULL;
PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC glad_glXQueryMaxSwapBarriersSGIX = NULL;
PFNGLXQUERYMAXSWAPGROUPSNVPROC glad_glXQueryMaxSwapGroupsNV = NULL;
PFNGLXQUERYRENDERERINTEGERMESAPROC glad_glXQueryRendererIntegerMESA = NULL;
PFNGLXQUERYRENDERERSTRINGMESAPROC glad_glXQueryRendererStringMESA = NULL;
PFNGLXQUERYSERVERSTRINGPROC glad_glXQueryServerString = NULL;
PFNGLXQUERYSWAPGROUPNVPROC glad_glXQuerySwapGroupNV = NULL;
PFNGLXQUERYVERSIONPROC glad_glXQueryVersion = NULL;
PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC glad_glXQueryVideoCaptureDeviceNV = NULL;
PFNGLXRELEASEBUFFERSMESAPROC glad_glXReleaseBuffersMESA = NULL;
PFNGLXRELEASETEXIMAGEEXTPROC glad_glXReleaseTexImageEXT = NULL;
PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC glad_glXReleaseVideoCaptureDeviceNV = NULL;
PFNGLXRELEASEVIDEODEVICENVPROC glad_glXReleaseVideoDeviceNV = NULL;
PFNGLXRELEASEVIDEOIMAGENVPROC glad_glXReleaseVideoImageNV = NULL;
PFNGLXRESETFRAMECOUNTNVPROC glad_glXResetFrameCountNV = NULL;
PFNGLXSELECTEVENTPROC glad_glXSelectEvent = NULL;
PFNGLXSELECTEVENTSGIXPROC glad_glXSelectEventSGIX = NULL;
PFNGLXSENDPBUFFERTOVIDEONVPROC glad_glXSendPbufferToVideoNV = NULL;
PFNGLXSET3DFXMODEMESAPROC glad_glXSet3DfxModeMESA = NULL;
PFNGLXSWAPBUFFERSPROC glad_glXSwapBuffers = NULL;
PFNGLXSWAPBUFFERSMSCOMLPROC glad_glXSwapBuffersMscOML = NULL;
PFNGLXSWAPINTERVALEXTPROC glad_glXSwapIntervalEXT = NULL;
PFNGLXSWAPINTERVALMESAPROC glad_glXSwapIntervalMESA = NULL;
PFNGLXSWAPINTERVALSGIPROC glad_glXSwapIntervalSGI = NULL;
PFNGLXUSEXFONTPROC glad_glXUseXFont = NULL;
PFNGLXWAITFORMSCOMLPROC glad_glXWaitForMscOML = NULL;
PFNGLXWAITFORSBCOMLPROC glad_glXWaitForSbcOML = NULL;
PFNGLXWAITGLPROC glad_glXWaitGL = NULL;
PFNGLXWAITVIDEOSYNCSGIPROC glad_glXWaitVideoSyncSGI = NULL;
PFNGLXWAITXPROC glad_glXWaitX = NULL;


static void glad_glx_load_GLX_VERSION_1_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_VERSION_1_0) return;
    glXChooseVisual = (PFNGLXCHOOSEVISUALPROC) load("glXChooseVisual", userptr);
    glXCopyContext = (PFNGLXCOPYCONTEXTPROC) load("glXCopyContext", userptr);
    glXCreateContext = (PFNGLXCREATECONTEXTPROC) load("glXCreateContext", userptr);
    glXCreateGLXPixmap = (PFNGLXCREATEGLXPIXMAPPROC) load("glXCreateGLXPixmap", userptr);
    glXDestroyContext = (PFNGLXDESTROYCONTEXTPROC) load("glXDestroyContext", userptr);
    glXDestroyGLXPixmap = (PFNGLXDESTROYGLXPIXMAPPROC) load("glXDestroyGLXPixmap", userptr);
    glXGetConfig = (PFNGLXGETCONFIGPROC) load("glXGetConfig", userptr);
    glXGetCurrentContext = (PFNGLXGETCURRENTCONTEXTPROC) load("glXGetCurrentContext", userptr);
    glXGetCurrentDrawable = (PFNGLXGETCURRENTDRAWABLEPROC) load("glXGetCurrentDrawable", userptr);
    glXIsDirect = (PFNGLXISDIRECTPROC) load("glXIsDirect", userptr);
    glXMakeCurrent = (PFNGLXMAKECURRENTPROC) load("glXMakeCurrent", userptr);
    glXQueryExtension = (PFNGLXQUERYEXTENSIONPROC) load("glXQueryExtension", userptr);
    glXQueryVersion = (PFNGLXQUERYVERSIONPROC) load("glXQueryVersion", userptr);
    glXSwapBuffers = (PFNGLXSWAPBUFFERSPROC) load("glXSwapBuffers", userptr);
    glXUseXFont = (PFNGLXUSEXFONTPROC) load("glXUseXFont", userptr);
    glXWaitGL = (PFNGLXWAITGLPROC) load("glXWaitGL", userptr);
    glXWaitX = (PFNGLXWAITXPROC) load("glXWaitX", userptr);
}
static void glad_glx_load_GLX_VERSION_1_1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_VERSION_1_1) return;
    glXGetClientString = (PFNGLXGETCLIENTSTRINGPROC) load("glXGetClientString", userptr);
    glXQueryExtensionsString = (PFNGLXQUERYEXTENSIONSSTRINGPROC) load("glXQueryExtensionsString", userptr);
    glXQueryServerString = (PFNGLXQUERYSERVERSTRINGPROC) load("glXQueryServerString", userptr);
}
static void glad_glx_load_GLX_VERSION_1_2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_VERSION_1_2) return;
    glXGetCurrentDisplay = (PFNGLXGETCURRENTDISPLAYPROC) load("glXGetCurrentDisplay", userptr);
}
static void glad_glx_load_GLX_VERSION_1_3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_VERSION_1_3) return;
    glXChooseFBConfig = (PFNGLXCHOOSEFBCONFIGPROC) load("glXChooseFBConfig", userptr);
    glXCreateNewContext = (PFNGLXCREATENEWCONTEXTPROC) load("glXCreateNewContext", userptr);
    glXCreatePbuffer = (PFNGLXCREATEPBUFFERPROC) load("glXCreatePbuffer", userptr);
    glXCreatePixmap = (PFNGLXCREATEPIXMAPPROC) load("glXCreatePixmap", userptr);
    glXCreateWindow = (PFNGLXCREATEWINDOWPROC) load("glXCreateWindow", userptr);
    glXDestroyPbuffer = (PFNGLXDESTROYPBUFFERPROC) load("glXDestroyPbuffer", userptr);
    glXDestroyPixmap = (PFNGLXDESTROYPIXMAPPROC) load("glXDestroyPixmap", userptr);
    glXDestroyWindow = (PFNGLXDESTROYWINDOWPROC) load("glXDestroyWindow", userptr);
    glXGetCurrentReadDrawable = (PFNGLXGETCURRENTREADDRAWABLEPROC) load("glXGetCurrentReadDrawable", userptr);
    glXGetFBConfigAttrib = (PFNGLXGETFBCONFIGATTRIBPROC) load("glXGetFBConfigAttrib", userptr);
    glXGetFBConfigs = (PFNGLXGETFBCONFIGSPROC) load("glXGetFBConfigs", userptr);
    glXGetSelectedEvent = (PFNGLXGETSELECTEDEVENTPROC) load("glXGetSelectedEvent", userptr);
    glXGetVisualFromFBConfig = (PFNGLXGETVISUALFROMFBCONFIGPROC) load("glXGetVisualFromFBConfig", userptr);
    glXMakeContextCurrent = (PFNGLXMAKECONTEXTCURRENTPROC) load("glXMakeContextCurrent", userptr);
    glXQueryContext = (PFNGLXQUERYCONTEXTPROC) load("glXQueryContext", userptr);
    glXQueryDrawable = (PFNGLXQUERYDRAWABLEPROC) load("glXQueryDrawable", userptr);
    glXSelectEvent = (PFNGLXSELECTEVENTPROC) load("glXSelectEvent", userptr);
}
static void glad_glx_load_GLX_VERSION_1_4( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_VERSION_1_4) return;
    glXGetProcAddress = (PFNGLXGETPROCADDRESSPROC) load("glXGetProcAddress", userptr);
}
static void glad_glx_load_GLX_AMD_gpu_association( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_AMD_gpu_association) return;
    glXBlitContextFramebufferAMD = (PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC) load("glXBlitContextFramebufferAMD", userptr);
    glXCreateAssociatedContextAMD = (PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC) load("glXCreateAssociatedContextAMD", userptr);
    glXCreateAssociatedContextAttribsAMD = (PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) load("glXCreateAssociatedContextAttribsAMD", userptr);
    glXDeleteAssociatedContextAMD = (PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC) load("glXDeleteAssociatedContextAMD", userptr);
    glXGetContextGPUIDAMD = (PFNGLXGETCONTEXTGPUIDAMDPROC) load("glXGetContextGPUIDAMD", userptr);
    glXGetCurrentAssociatedContextAMD = (PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC) load("glXGetCurrentAssociatedContextAMD", userptr);
    glXGetGPUIDsAMD = (PFNGLXGETGPUIDSAMDPROC) load("glXGetGPUIDsAMD", userptr);
    glXGetGPUInfoAMD = (PFNGLXGETGPUINFOAMDPROC) load("glXGetGPUInfoAMD", userptr);
    glXMakeAssociatedContextCurrentAMD = (PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) load("glXMakeAssociatedContextCurrentAMD", userptr);
}
static void glad_glx_load_GLX_ARB_create_context( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_ARB_create_context) return;
    glXCreateContextAttribsARB = (PFNGLXCREATECONTEXTATTRIBSARBPROC) load("glXCreateContextAttribsARB", userptr);
}
static void glad_glx_load_GLX_ARB_get_proc_address( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_ARB_get_proc_address) return;
    glXGetProcAddressARB = (PFNGLXGETPROCADDRESSARBPROC) load("glXGetProcAddressARB", userptr);
}
static void glad_glx_load_GLX_EXT_import_context( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_EXT_import_context) return;
    glXFreeContextEXT = (PFNGLXFREECONTEXTEXTPROC) load("glXFreeContextEXT", userptr);
    glXGetContextIDEXT = (PFNGLXGETCONTEXTIDEXTPROC) load("glXGetContextIDEXT", userptr);
    glXGetCurrentDisplayEXT = (PFNGLXGETCURRENTDISPLAYEXTPROC) load("glXGetCurrentDisplayEXT", userptr);
    glXImportContextEXT = (PFNGLXIMPORTCONTEXTEXTPROC) load("glXImportContextEXT", userptr);
    glXQueryContextInfoEXT = (PFNGLXQUERYCONTEXTINFOEXTPROC) load("glXQueryContextInfoEXT", userptr);
}
static void glad_glx_load_GLX_EXT_swap_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_EXT_swap_control) return;
    glXSwapIntervalEXT = (PFNGLXSWAPINTERVALEXTPROC) load("glXSwapIntervalEXT", userptr);
}
static void glad_glx_load_GLX_EXT_texture_from_pixmap( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_EXT_texture_from_pixmap) return;
    glXBindTexImageEXT = (PFNGLXBINDTEXIMAGEEXTPROC) load("glXBindTexImageEXT", userptr);
    glXReleaseTexImageEXT = (PFNGLXRELEASETEXIMAGEEXTPROC) load("glXReleaseTexImageEXT", userptr);
}
static void glad_glx_load_GLX_MESA_agp_offset( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_MESA_agp_offset) return;
    glXGetAGPOffsetMESA = (PFNGLXGETAGPOFFSETMESAPROC) load("glXGetAGPOffsetMESA", userptr);
}
static void glad_glx_load_GLX_MESA_copy_sub_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_MESA_copy_sub_buffer) return;
    glXCopySubBufferMESA = (PFNGLXCOPYSUBBUFFERMESAPROC) load("glXCopySubBufferMESA", userptr);
}
static void glad_glx_load_GLX_MESA_pixmap_colormap( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_MESA_pixmap_colormap) return;
    glXCreateGLXPixmapMESA = (PFNGLXCREATEGLXPIXMAPMESAPROC) load("glXCreateGLXPixmapMESA", userptr);
}
static void glad_glx_load_GLX_MESA_query_renderer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_MESA_query_renderer) return;
    glXQueryCurrentRendererIntegerMESA = (PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC) load("glXQueryCurrentRendererIntegerMESA", userptr);
    glXQueryCurrentRendererStringMESA = (PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC) load("glXQueryCurrentRendererStringMESA", userptr);
    glXQueryRendererIntegerMESA = (PFNGLXQUERYRENDERERINTEGERMESAPROC) load("glXQueryRendererIntegerMESA", userptr);
    glXQueryRendererStringMESA = (PFNGLXQUERYRENDERERSTRINGMESAPROC) load("glXQueryRendererStringMESA", userptr);
}
static void glad_glx_load_GLX_MESA_release_buffers( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_MESA_release_buffers) return;
    glXReleaseBuffersMESA = (PFNGLXRELEASEBUFFERSMESAPROC) load("glXReleaseBuffersMESA", userptr);
}
static void glad_glx_load_GLX_MESA_set_3dfx_mode( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_MESA_set_3dfx_mode) return;
    glXSet3DfxModeMESA = (PFNGLXSET3DFXMODEMESAPROC) load("glXSet3DfxModeMESA", userptr);
}
static void glad_glx_load_GLX_MESA_swap_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_MESA_swap_control) return;
    glXGetSwapIntervalMESA = (PFNGLXGETSWAPINTERVALMESAPROC) load("glXGetSwapIntervalMESA", userptr);
    glXSwapIntervalMESA = (PFNGLXSWAPINTERVALMESAPROC) load("glXSwapIntervalMESA", userptr);
}
static void glad_glx_load_GLX_NV_copy_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_NV_copy_buffer) return;
    glXCopyBufferSubDataNV = (PFNGLXCOPYBUFFERSUBDATANVPROC) load("glXCopyBufferSubDataNV", userptr);
    glXNamedCopyBufferSubDataNV = (PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC) load("glXNamedCopyBufferSubDataNV", userptr);
}
static void glad_glx_load_GLX_NV_copy_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_NV_copy_image) return;
    glXCopyImageSubDataNV = (PFNGLXCOPYIMAGESUBDATANVPROC) load("glXCopyImageSubDataNV", userptr);
}
static void glad_glx_load_GLX_NV_delay_before_swap( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_NV_delay_before_swap) return;
    glXDelayBeforeSwapNV = (PFNGLXDELAYBEFORESWAPNVPROC) load("glXDelayBeforeSwapNV", userptr);
}
static void glad_glx_load_GLX_NV_present_video( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_NV_present_video) return;
    glXBindVideoDeviceNV = (PFNGLXBINDVIDEODEVICENVPROC) load("glXBindVideoDeviceNV", userptr);
    glXEnumerateVideoDevicesNV = (PFNGLXENUMERATEVIDEODEVICESNVPROC) load("glXEnumerateVideoDevicesNV", userptr);
}
static void glad_glx_load_GLX_NV_swap_group( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_NV_swap_group) return;
    glXBindSwapBarrierNV = (PFNGLXBINDSWAPBARRIERNVPROC) load("glXBindSwapBarrierNV", userptr);
    glXJoinSwapGroupNV = (PFNGLXJOINSWAPGROUPNVPROC) load("glXJoinSwapGroupNV", userptr);
    glXQueryFrameCountNV = (PFNGLXQUERYFRAMECOUNTNVPROC) load("glXQueryFrameCountNV", userptr);
    glXQueryMaxSwapGroupsNV = (PFNGLXQUERYMAXSWAPGROUPSNVPROC) load("glXQueryMaxSwapGroupsNV", userptr);
    glXQuerySwapGroupNV = (PFNGLXQUERYSWAPGROUPNVPROC) load("glXQuerySwapGroupNV", userptr);
    glXResetFrameCountNV = (PFNGLXRESETFRAMECOUNTNVPROC) load("glXResetFrameCountNV", userptr);
}
static void glad_glx_load_GLX_NV_video_capture( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_NV_video_capture) return;
    glXBindVideoCaptureDeviceNV = (PFNGLXBINDVIDEOCAPTUREDEVICENVPROC) load("glXBindVideoCaptureDeviceNV", userptr);
    glXEnumerateVideoCaptureDevicesNV = (PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC) load("glXEnumerateVideoCaptureDevicesNV", userptr);
    glXLockVideoCaptureDeviceNV = (PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC) load("glXLockVideoCaptureDeviceNV", userptr);
    glXQueryVideoCaptureDeviceNV = (PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC) load("glXQueryVideoCaptureDeviceNV", userptr);
    glXReleaseVideoCaptureDeviceNV = (PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC) load("glXReleaseVideoCaptureDeviceNV", userptr);
}
static void glad_glx_load_GLX_NV_video_out( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_NV_video_out) return;
    glXBindVideoImageNV = (PFNGLXBINDVIDEOIMAGENVPROC) load("glXBindVideoImageNV", userptr);
    glXGetVideoDeviceNV = (PFNGLXGETVIDEODEVICENVPROC) load("glXGetVideoDeviceNV", userptr);
    glXGetVideoInfoNV = (PFNGLXGETVIDEOINFONVPROC) load("glXGetVideoInfoNV", userptr);
    glXReleaseVideoDeviceNV = (PFNGLXRELEASEVIDEODEVICENVPROC) load("glXReleaseVideoDeviceNV", userptr);
    glXReleaseVideoImageNV = (PFNGLXRELEASEVIDEOIMAGENVPROC) load("glXReleaseVideoImageNV", userptr);
    glXSendPbufferToVideoNV = (PFNGLXSENDPBUFFERTOVIDEONVPROC) load("glXSendPbufferToVideoNV", userptr);
}
static void glad_glx_load_GLX_OML_sync_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_OML_sync_control) return;
    glXGetMscRateOML = (PFNGLXGETMSCRATEOMLPROC) load("glXGetMscRateOML", userptr);
    glXGetSyncValuesOML = (PFNGLXGETSYNCVALUESOMLPROC) load("glXGetSyncValuesOML", userptr);
    glXSwapBuffersMscOML = (PFNGLXSWAPBUFFERSMSCOMLPROC) load("glXSwapBuffersMscOML", userptr);
    glXWaitForMscOML = (PFNGLXWAITFORMSCOMLPROC) load("glXWaitForMscOML", userptr);
    glXWaitForSbcOML = (PFNGLXWAITFORSBCOMLPROC) load("glXWaitForSbcOML", userptr);
}
static void glad_glx_load_GLX_SGIX_fbconfig( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGIX_fbconfig) return;
    glXChooseFBConfigSGIX = (PFNGLXCHOOSEFBCONFIGSGIXPROC) load("glXChooseFBConfigSGIX", userptr);
    glXCreateContextWithConfigSGIX = (PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC) load("glXCreateContextWithConfigSGIX", userptr);
    glXCreateGLXPixmapWithConfigSGIX = (PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC) load("glXCreateGLXPixmapWithConfigSGIX", userptr);
    glXGetFBConfigAttribSGIX = (PFNGLXGETFBCONFIGATTRIBSGIXPROC) load("glXGetFBConfigAttribSGIX", userptr);
    glXGetFBConfigFromVisualSGIX = (PFNGLXGETFBCONFIGFROMVISUALSGIXPROC) load("glXGetFBConfigFromVisualSGIX", userptr);
    glXGetVisualFromFBConfigSGIX = (PFNGLXGETVISUALFROMFBCONFIGSGIXPROC) load("glXGetVisualFromFBConfigSGIX", userptr);
}
static void glad_glx_load_GLX_SGIX_hyperpipe( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGIX_hyperpipe) return;
    glXBindHyperpipeSGIX = (PFNGLXBINDHYPERPIPESGIXPROC) load("glXBindHyperpipeSGIX", userptr);
    glXDestroyHyperpipeConfigSGIX = (PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC) load("glXDestroyHyperpipeConfigSGIX", userptr);
    glXHyperpipeAttribSGIX = (PFNGLXHYPERPIPEATTRIBSGIXPROC) load("glXHyperpipeAttribSGIX", userptr);
    glXHyperpipeConfigSGIX = (PFNGLXHYPERPIPECONFIGSGIXPROC) load("glXHyperpipeConfigSGIX", userptr);
    glXQueryHyperpipeAttribSGIX = (PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC) load("glXQueryHyperpipeAttribSGIX", userptr);
    glXQueryHyperpipeBestAttribSGIX = (PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC) load("glXQueryHyperpipeBestAttribSGIX", userptr);
    glXQueryHyperpipeConfigSGIX = (PFNGLXQUERYHYPERPIPECONFIGSGIXPROC) load("glXQueryHyperpipeConfigSGIX", userptr);
    glXQueryHyperpipeNetworkSGIX = (PFNGLXQUERYHYPERPIPENETWORKSGIXPROC) load("glXQueryHyperpipeNetworkSGIX", userptr);
}
static void glad_glx_load_GLX_SGIX_pbuffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGIX_pbuffer) return;
    glXCreateGLXPbufferSGIX = (PFNGLXCREATEGLXPBUFFERSGIXPROC) load("glXCreateGLXPbufferSGIX", userptr);
    glXDestroyGLXPbufferSGIX = (PFNGLXDESTROYGLXPBUFFERSGIXPROC) load("glXDestroyGLXPbufferSGIX", userptr);
    glXGetSelectedEventSGIX = (PFNGLXGETSELECTEDEVENTSGIXPROC) load("glXGetSelectedEventSGIX", userptr);
    glXQueryGLXPbufferSGIX = (PFNGLXQUERYGLXPBUFFERSGIXPROC) load("glXQueryGLXPbufferSGIX", userptr);
    glXSelectEventSGIX = (PFNGLXSELECTEVENTSGIXPROC) load("glXSelectEventSGIX", userptr);
}
static void glad_glx_load_GLX_SGIX_swap_barrier( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGIX_swap_barrier) return;
    glXBindSwapBarrierSGIX = (PFNGLXBINDSWAPBARRIERSGIXPROC) load("glXBindSwapBarrierSGIX", userptr);
    glXQueryMaxSwapBarriersSGIX = (PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC) load("glXQueryMaxSwapBarriersSGIX", userptr);
}
static void glad_glx_load_GLX_SGIX_swap_group( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGIX_swap_group) return;
    glXJoinSwapGroupSGIX = (PFNGLXJOINSWAPGROUPSGIXPROC) load("glXJoinSwapGroupSGIX", userptr);
}
static void glad_glx_load_GLX_SGIX_video_resize( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGIX_video_resize) return;
    glXBindChannelToWindowSGIX = (PFNGLXBINDCHANNELTOWINDOWSGIXPROC) load("glXBindChannelToWindowSGIX", userptr);
    glXChannelRectSGIX = (PFNGLXCHANNELRECTSGIXPROC) load("glXChannelRectSGIX", userptr);
    glXChannelRectSyncSGIX = (PFNGLXCHANNELRECTSYNCSGIXPROC) load("glXChannelRectSyncSGIX", userptr);
    glXQueryChannelDeltasSGIX = (PFNGLXQUERYCHANNELDELTASSGIXPROC) load("glXQueryChannelDeltasSGIX", userptr);
    glXQueryChannelRectSGIX = (PFNGLXQUERYCHANNELRECTSGIXPROC) load("glXQueryChannelRectSGIX", userptr);
}
static void glad_glx_load_GLX_SGI_cushion( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGI_cushion) return;
    glXCushionSGI = (PFNGLXCUSHIONSGIPROC) load("glXCushionSGI", userptr);
}
static void glad_glx_load_GLX_SGI_make_current_read( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGI_make_current_read) return;
    glXGetCurrentReadDrawableSGI = (PFNGLXGETCURRENTREADDRAWABLESGIPROC) load("glXGetCurrentReadDrawableSGI", userptr);
    glXMakeCurrentReadSGI = (PFNGLXMAKECURRENTREADSGIPROC) load("glXMakeCurrentReadSGI", userptr);
}
static void glad_glx_load_GLX_SGI_swap_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGI_swap_control) return;
    glXSwapIntervalSGI = (PFNGLXSWAPINTERVALSGIPROC) load("glXSwapIntervalSGI", userptr);
}
static void glad_glx_load_GLX_SGI_video_sync( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SGI_video_sync) return;
    glXGetVideoSyncSGI = (PFNGLXGETVIDEOSYNCSGIPROC) load("glXGetVideoSyncSGI", userptr);
    glXWaitVideoSyncSGI = (PFNGLXWAITVIDEOSYNCSGIPROC) load("glXWaitVideoSyncSGI", userptr);
}
static void glad_glx_load_GLX_SUN_get_transparent_index( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GLX_SUN_get_transparent_index) return;
    glXGetTransparentIndexSUN = (PFNGLXGETTRANSPARENTINDEXSUNPROC) load("glXGetTransparentIndexSUN", userptr);
}



static int glad_glx_has_extension(Display *display, int screen, const char *ext) {
#ifndef GLX_VERSION_1_1
    (void) display;
    (void) screen;
    (void) ext;
#else
    const char *terminator;
    const char *loc;
    const char *extensions;

    if (glXQueryExtensionsString == NULL) {
        return 0;
    }

    extensions = glXQueryExtensionsString(display, screen);

    if(extensions == NULL || ext == NULL) {
        return 0;
    }

    while(1) {
        loc = strstr(extensions, ext);
        if(loc == NULL)
            break;

        terminator = loc + strlen(ext);
        if((loc == extensions || *(loc - 1) == ' ') &&
            (*terminator == ' ' || *terminator == '\0')) {
            return 1;
        }
        extensions = terminator;
    }
#endif

    return 0;
}

static GLADapiproc glad_glx_get_proc_from_userptr(const char* name, void *userptr) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_glx_find_extensions(Display *display, int screen) {
    GLAD_GLX_3DFX_multisample = glad_glx_has_extension(display, screen, "GLX_3DFX_multisample");
    GLAD_GLX_AMD_gpu_association = glad_glx_has_extension(display, screen, "GLX_AMD_gpu_association");
    GLAD_GLX_ARB_context_flush_control = glad_glx_has_extension(display, screen, "GLX_ARB_context_flush_control");
    GLAD_GLX_ARB_create_context = glad_glx_has_extension(display, screen, "GLX_ARB_create_context");
    GLAD_GLX_ARB_create_context_no_error = glad_glx_has_extension(display, screen, "GLX_ARB_create_context_no_error");
    GLAD_GLX_ARB_create_context_profile = glad_glx_has_extension(display, screen, "GLX_ARB_create_context_profile");
    GLAD_GLX_ARB_create_context_robustness = glad_glx_has_extension(display, screen, "GLX_ARB_create_context_robustness");
    GLAD_GLX_ARB_fbconfig_float = glad_glx_has_extension(display, screen, "GLX_ARB_fbconfig_float");
    GLAD_GLX_ARB_framebuffer_sRGB = glad_glx_has_extension(display, screen, "GLX_ARB_framebuffer_sRGB");
    GLAD_GLX_ARB_get_proc_address = glad_glx_has_extension(display, screen, "GLX_ARB_get_proc_address");
    GLAD_GLX_ARB_multisample = glad_glx_has_extension(display, screen, "GLX_ARB_multisample");
    GLAD_GLX_ARB_robustness_application_isolation = glad_glx_has_extension(display, screen, "GLX_ARB_robustness_application_isolation");
    GLAD_GLX_ARB_robustness_share_group_isolation = glad_glx_has_extension(display, screen, "GLX_ARB_robustness_share_group_isolation");
    GLAD_GLX_ARB_vertex_buffer_object = glad_glx_has_extension(display, screen, "GLX_ARB_vertex_buffer_object");
    GLAD_GLX_EXT_buffer_age = glad_glx_has_extension(display, screen, "GLX_EXT_buffer_age");
    GLAD_GLX_EXT_create_context_es2_profile = glad_glx_has_extension(display, screen, "GLX_EXT_create_context_es2_profile");
    GLAD_GLX_EXT_create_context_es_profile = glad_glx_has_extension(display, screen, "GLX_EXT_create_context_es_profile");
    GLAD_GLX_EXT_fbconfig_packed_float = glad_glx_has_extension(display, screen, "GLX_EXT_fbconfig_packed_float");
    GLAD_GLX_EXT_framebuffer_sRGB = glad_glx_has_extension(display, screen, "GLX_EXT_framebuffer_sRGB");
    GLAD_GLX_EXT_import_context = glad_glx_has_extension(display, screen, "GLX_EXT_import_context");
    GLAD_GLX_EXT_libglvnd = glad_glx_has_extension(display, screen, "GLX_EXT_libglvnd");
    GLAD_GLX_EXT_no_config_context = glad_glx_has_extension(display, screen, "GLX_EXT_no_config_context");
    GLAD_GLX_EXT_stereo_tree = glad_glx_has_extension(display, screen, "GLX_EXT_stereo_tree");
    GLAD_GLX_EXT_swap_control = glad_glx_has_extension(display, screen, "GLX_EXT_swap_control");
    GLAD_GLX_EXT_swap_control_tear = glad_glx_has_extension(display, screen, "GLX_EXT_swap_control_tear");
    GLAD_GLX_EXT_texture_from_pixmap = glad_glx_has_extension(display, screen, "GLX_EXT_texture_from_pixmap");
    GLAD_GLX_EXT_visual_info = glad_glx_has_extension(display, screen, "GLX_EXT_visual_info");
    GLAD_GLX_EXT_visual_rating = glad_glx_has_extension(display, screen, "GLX_EXT_visual_rating");
    GLAD_GLX_INTEL_swap_event = glad_glx_has_extension(display, screen, "GLX_INTEL_swap_event");
    GLAD_GLX_MESA_agp_offset = glad_glx_has_extension(display, screen, "GLX_MESA_agp_offset");
    GLAD_GLX_MESA_copy_sub_buffer = glad_glx_has_extension(display, screen, "GLX_MESA_copy_sub_buffer");
    GLAD_GLX_MESA_pixmap_colormap = glad_glx_has_extension(display, screen, "GLX_MESA_pixmap_colormap");
    GLAD_GLX_MESA_query_renderer = glad_glx_has_extension(display, screen, "GLX_MESA_query_renderer");
    GLAD_GLX_MESA_release_buffers = glad_glx_has_extension(display, screen, "GLX_MESA_release_buffers");
    GLAD_GLX_MESA_set_3dfx_mode = glad_glx_has_extension(display, screen, "GLX_MESA_set_3dfx_mode");
    GLAD_GLX_MESA_swap_control = glad_glx_has_extension(display, screen, "GLX_MESA_swap_control");
    GLAD_GLX_NV_copy_buffer = glad_glx_has_extension(display, screen, "GLX_NV_copy_buffer");
    GLAD_GLX_NV_copy_image = glad_glx_has_extension(display, screen, "GLX_NV_copy_image");
    GLAD_GLX_NV_delay_before_swap = glad_glx_has_extension(display, screen, "GLX_NV_delay_before_swap");
    GLAD_GLX_NV_float_buffer = glad_glx_has_extension(display, screen, "GLX_NV_float_buffer");
    GLAD_GLX_NV_multisample_coverage = glad_glx_has_extension(display, screen, "GLX_NV_multisample_coverage");
    GLAD_GLX_NV_present_video = glad_glx_has_extension(display, screen, "GLX_NV_present_video");
    GLAD_GLX_NV_robustness_video_memory_purge = glad_glx_has_extension(display, screen, "GLX_NV_robustness_video_memory_purge");
    GLAD_GLX_NV_swap_group = glad_glx_has_extension(display, screen, "GLX_NV_swap_group");
    GLAD_GLX_NV_video_capture = glad_glx_has_extension(display, screen, "GLX_NV_video_capture");
    GLAD_GLX_NV_video_out = glad_glx_has_extension(display, screen, "GLX_NV_video_out");
    GLAD_GLX_OML_swap_method = glad_glx_has_extension(display, screen, "GLX_OML_swap_method");
    GLAD_GLX_OML_sync_control = glad_glx_has_extension(display, screen, "GLX_OML_sync_control");
    GLAD_GLX_SGIS_blended_overlay = glad_glx_has_extension(display, screen, "GLX_SGIS_blended_overlay");
    GLAD_GLX_SGIS_multisample = glad_glx_has_extension(display, screen, "GLX_SGIS_multisample");
    GLAD_GLX_SGIS_shared_multisample = glad_glx_has_extension(display, screen, "GLX_SGIS_shared_multisample");
    GLAD_GLX_SGIX_fbconfig = glad_glx_has_extension(display, screen, "GLX_SGIX_fbconfig");
    GLAD_GLX_SGIX_hyperpipe = glad_glx_has_extension(display, screen, "GLX_SGIX_hyperpipe");
    GLAD_GLX_SGIX_pbuffer = glad_glx_has_extension(display, screen, "GLX_SGIX_pbuffer");
    GLAD_GLX_SGIX_swap_barrier = glad_glx_has_extension(display, screen, "GLX_SGIX_swap_barrier");
    GLAD_GLX_SGIX_swap_group = glad_glx_has_extension(display, screen, "GLX_SGIX_swap_group");
    GLAD_GLX_SGIX_video_resize = glad_glx_has_extension(display, screen, "GLX_SGIX_video_resize");
    GLAD_GLX_SGIX_visual_select_group = glad_glx_has_extension(display, screen, "GLX_SGIX_visual_select_group");
    GLAD_GLX_SGI_cushion = glad_glx_has_extension(display, screen, "GLX_SGI_cushion");
    GLAD_GLX_SGI_make_current_read = glad_glx_has_extension(display, screen, "GLX_SGI_make_current_read");
    GLAD_GLX_SGI_swap_control = glad_glx_has_extension(display, screen, "GLX_SGI_swap_control");
    GLAD_GLX_SGI_video_sync = glad_glx_has_extension(display, screen, "GLX_SGI_video_sync");
    GLAD_GLX_SUN_get_transparent_index = glad_glx_has_extension(display, screen, "GLX_SUN_get_transparent_index");
    return 1;
}

static int glad_glx_find_core_glx(Display **display, int *screen) {
    int major = 0, minor = 0;
    if(*display == NULL) {
#ifdef GLAD_GLX_NO_X11
        (void) screen;
        return 0;
#else
        *display = XOpenDisplay(0);
        if (*display == NULL) {
            return 0;
        }
        *screen = XScreenNumberOfScreen(XDefaultScreenOfDisplay(*display));
#endif
    }
    glXQueryVersion(*display, &major, &minor);
    GLAD_GLX_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLAD_GLX_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    GLAD_GLX_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    GLAD_GLX_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
    GLAD_GLX_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadGLXUserPtr(Display *display, int screen, GLADuserptrloadfunc load, void *userptr) {
    int version;
    glXQueryVersion = (PFNGLXQUERYVERSIONPROC) load("glXQueryVersion", userptr);
    if(glXQueryVersion == NULL) return 0;
    version = glad_glx_find_core_glx(&display, &screen);

    glad_glx_load_GLX_VERSION_1_0(load, userptr);
    glad_glx_load_GLX_VERSION_1_1(load, userptr);
    glad_glx_load_GLX_VERSION_1_2(load, userptr);
    glad_glx_load_GLX_VERSION_1_3(load, userptr);
    glad_glx_load_GLX_VERSION_1_4(load, userptr);

    if (!glad_glx_find_extensions(display, screen)) return 0;
    glad_glx_load_GLX_AMD_gpu_association(load, userptr);
    glad_glx_load_GLX_ARB_create_context(load, userptr);
    glad_glx_load_GLX_ARB_get_proc_address(load, userptr);
    glad_glx_load_GLX_EXT_import_context(load, userptr);
    glad_glx_load_GLX_EXT_swap_control(load, userptr);
    glad_glx_load_GLX_EXT_texture_from_pixmap(load, userptr);
    glad_glx_load_GLX_MESA_agp_offset(load, userptr);
    glad_glx_load_GLX_MESA_copy_sub_buffer(load, userptr);
    glad_glx_load_GLX_MESA_pixmap_colormap(load, userptr);
    glad_glx_load_GLX_MESA_query_renderer(load, userptr);
    glad_glx_load_GLX_MESA_release_buffers(load, userptr);
    glad_glx_load_GLX_MESA_set_3dfx_mode(load, userptr);
    glad_glx_load_GLX_MESA_swap_control(load, userptr);
    glad_glx_load_GLX_NV_copy_buffer(load, userptr);
    glad_glx_load_GLX_NV_copy_image(load, userptr);
    glad_glx_load_GLX_NV_delay_before_swap(load, userptr);
    glad_glx_load_GLX_NV_present_video(load, userptr);
    glad_glx_load_GLX_NV_swap_group(load, userptr);
    glad_glx_load_GLX_NV_video_capture(load, userptr);
    glad_glx_load_GLX_NV_video_out(load, userptr);
    glad_glx_load_GLX_OML_sync_control(load, userptr);
    glad_glx_load_GLX_SGIX_fbconfig(load, userptr);
    glad_glx_load_GLX_SGIX_hyperpipe(load, userptr);
    glad_glx_load_GLX_SGIX_pbuffer(load, userptr);
    glad_glx_load_GLX_SGIX_swap_barrier(load, userptr);
    glad_glx_load_GLX_SGIX_swap_group(load, userptr);
    glad_glx_load_GLX_SGIX_video_resize(load, userptr);
    glad_glx_load_GLX_SGI_cushion(load, userptr);
    glad_glx_load_GLX_SGI_make_current_read(load, userptr);
    glad_glx_load_GLX_SGI_swap_control(load, userptr);
    glad_glx_load_GLX_SGI_video_sync(load, userptr);
    glad_glx_load_GLX_SUN_get_transparent_index(load, userptr);

    return version;
}

int gladLoadGLX(Display *display, int screen, GLADloadfunc load) {
    return gladLoadGLXUserPtr(display, screen, glad_glx_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}


#ifdef GLAD_GLX

#ifndef GLAD_LOADER_LIBRARY_C_
#define GLAD_LOADER_LIBRARY_C_

#include <stddef.h>
#include <stdlib.h>

#if GLAD_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif


static void* glad_get_dlopen_handle(const char *lib_names[], int length) {
    void *handle = NULL;
    int i;

    for (i = 0; i < length; ++i) {
#if GLAD_PLATFORM_WIN32
  #if GLAD_PLATFORM_UWP
        size_t buffer_size = (strlen(lib_names[i]) + 1) * sizeof(WCHAR);
        LPWSTR buffer = (LPWSTR) malloc(buffer_size);
        if (buffer != NULL) {
            int ret = MultiByteToWideChar(CP_ACP, 0, lib_names[i], -1, buffer, buffer_size);
            if (ret != 0) {
                handle = (void*) LoadPackagedLibrary(buffer, 0);
            }
            free((void*) buffer);
        }
  #else
        handle = (void*) LoadLibraryA(lib_names[i]);
  #endif
#else
        handle = dlopen(lib_names[i], RTLD_LAZY | RTLD_LOCAL);
#endif
        if (handle != NULL) {
            return handle;
        }
    }

    return NULL;
}

static void glad_close_dlopen_handle(void* handle) {
    if (handle != NULL) {
#if GLAD_PLATFORM_WIN32
        FreeLibrary((HMODULE) handle);
#else
        dlclose(handle);
#endif
    }
}

static GLADapiproc glad_dlsym_handle(void* handle, const char *name) {
    if (handle == NULL) {
        return NULL;
    }

#if GLAD_PLATFORM_WIN32
    return (GLADapiproc) GetProcAddress((HMODULE) handle, name);
#else
    return GLAD_GNUC_EXTENSION (GLADapiproc) dlsym(handle, name);
#endif
}

#endif /* GLAD_LOADER_LIBRARY_C_ */

typedef void* (GLAD_API_PTR *GLADglxprocaddrfunc)(const char*);

static GLADapiproc glad_glx_get_proc(const char *name, void *userptr) {
    return GLAD_GNUC_EXTENSION ((GLADapiproc (*)(const char *name)) userptr)(name);
}

static void* _glx_handle;

int gladLoaderLoadGLX(Display *display, int screen) {
    static const char *NAMES[] = {
#if defined __CYGWIN__
        "libGL-1.so",
#endif
        "libGL.so.1",
        "libGL.so"
    };

    int version = 0;
    int did_load = 0;
    GLADglxprocaddrfunc loader;

    if (_glx_handle == NULL) {
        _glx_handle = glad_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
        did_load = _glx_handle != NULL;
    }

    if (_glx_handle != NULL) {
        loader = (GLADglxprocaddrfunc) glad_dlsym_handle(_glx_handle, "glXGetProcAddressARB");
        if (loader != NULL) {
            version = gladLoadGLXUserPtr(display, screen, glad_glx_get_proc, GLAD_GNUC_EXTENSION (void*) loader);
        }

        if (!version && did_load) {
            glad_close_dlopen_handle(_glx_handle);
            _glx_handle = NULL;
        }
    }

    return version;
}

void gladLoaderUnloadGLX() {
    if (_glx_handle != NULL) {
        glad_close_dlopen_handle(_glx_handle);
        _glx_handle = NULL;
    }
}

#endif /* GLAD_GLX */
