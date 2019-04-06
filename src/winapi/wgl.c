#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/wgl.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */


int GLAD_WGL_VERSION_1_0 = 0;
int GLAD_WGL_3DFX_multisample = 0;
int GLAD_WGL_3DL_stereo_control = 0;
int GLAD_WGL_AMD_gpu_association = 0;
int GLAD_WGL_ARB_buffer_region = 0;
int GLAD_WGL_ARB_context_flush_control = 0;
int GLAD_WGL_ARB_create_context = 0;
int GLAD_WGL_ARB_create_context_no_error = 0;
int GLAD_WGL_ARB_create_context_profile = 0;
int GLAD_WGL_ARB_create_context_robustness = 0;
int GLAD_WGL_ARB_extensions_string = 0;
int GLAD_WGL_ARB_framebuffer_sRGB = 0;
int GLAD_WGL_ARB_make_current_read = 0;
int GLAD_WGL_ARB_multisample = 0;
int GLAD_WGL_ARB_pbuffer = 0;
int GLAD_WGL_ARB_pixel_format = 0;
int GLAD_WGL_ARB_pixel_format_float = 0;
int GLAD_WGL_ARB_render_texture = 0;
int GLAD_WGL_ARB_robustness_application_isolation = 0;
int GLAD_WGL_ARB_robustness_share_group_isolation = 0;
int GLAD_WGL_ATI_pixel_format_float = 0;
int GLAD_WGL_ATI_render_texture_rectangle = 0;
int GLAD_WGL_EXT_colorspace = 0;
int GLAD_WGL_EXT_create_context_es2_profile = 0;
int GLAD_WGL_EXT_create_context_es_profile = 0;
int GLAD_WGL_EXT_depth_float = 0;
int GLAD_WGL_EXT_display_color_table = 0;
int GLAD_WGL_EXT_extensions_string = 0;
int GLAD_WGL_EXT_framebuffer_sRGB = 0;
int GLAD_WGL_EXT_make_current_read = 0;
int GLAD_WGL_EXT_multisample = 0;
int GLAD_WGL_EXT_pbuffer = 0;
int GLAD_WGL_EXT_pixel_format = 0;
int GLAD_WGL_EXT_pixel_format_packed_float = 0;
int GLAD_WGL_EXT_swap_control = 0;
int GLAD_WGL_EXT_swap_control_tear = 0;
int GLAD_WGL_I3D_digital_video_control = 0;
int GLAD_WGL_I3D_gamma = 0;
int GLAD_WGL_I3D_genlock = 0;
int GLAD_WGL_I3D_image_buffer = 0;
int GLAD_WGL_I3D_swap_frame_lock = 0;
int GLAD_WGL_I3D_swap_frame_usage = 0;
int GLAD_WGL_NV_DX_interop = 0;
int GLAD_WGL_NV_DX_interop2 = 0;
int GLAD_WGL_NV_copy_image = 0;
int GLAD_WGL_NV_delay_before_swap = 0;
int GLAD_WGL_NV_float_buffer = 0;
int GLAD_WGL_NV_gpu_affinity = 0;
int GLAD_WGL_NV_multisample_coverage = 0;
int GLAD_WGL_NV_present_video = 0;
int GLAD_WGL_NV_render_depth_texture = 0;
int GLAD_WGL_NV_render_texture_rectangle = 0;
int GLAD_WGL_NV_swap_group = 0;
int GLAD_WGL_NV_vertex_array_range = 0;
int GLAD_WGL_NV_video_capture = 0;
int GLAD_WGL_NV_video_output = 0;
int GLAD_WGL_OML_sync_control = 0;



PFNWGLALLOCATEMEMORYNVPROC glad_wglAllocateMemoryNV;
PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC glad_wglAssociateImageBufferEventsI3D;
PFNWGLBEGINFRAMETRACKINGI3DPROC glad_wglBeginFrameTrackingI3D;
PFNWGLBINDDISPLAYCOLORTABLEEXTPROC glad_wglBindDisplayColorTableEXT;
PFNWGLBINDSWAPBARRIERNVPROC glad_wglBindSwapBarrierNV;
PFNWGLBINDTEXIMAGEARBPROC glad_wglBindTexImageARB;
PFNWGLBINDVIDEOCAPTUREDEVICENVPROC glad_wglBindVideoCaptureDeviceNV;
PFNWGLBINDVIDEODEVICENVPROC glad_wglBindVideoDeviceNV;
PFNWGLBINDVIDEOIMAGENVPROC glad_wglBindVideoImageNV;
PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC glad_wglBlitContextFramebufferAMD;
PFNWGLCHOOSEPIXELFORMATARBPROC glad_wglChoosePixelFormatARB;
PFNWGLCHOOSEPIXELFORMATEXTPROC glad_wglChoosePixelFormatEXT;
PFNWGLCOPYIMAGESUBDATANVPROC glad_wglCopyImageSubDataNV;
PFNWGLCREATEAFFINITYDCNVPROC glad_wglCreateAffinityDCNV;
PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC glad_wglCreateAssociatedContextAMD;
PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC glad_wglCreateAssociatedContextAttribsAMD;
PFNWGLCREATEBUFFERREGIONARBPROC glad_wglCreateBufferRegionARB;
PFNWGLCREATECONTEXTATTRIBSARBPROC glad_wglCreateContextAttribsARB;
PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC glad_wglCreateDisplayColorTableEXT;
PFNWGLCREATEIMAGEBUFFERI3DPROC glad_wglCreateImageBufferI3D;
PFNWGLCREATEPBUFFERARBPROC glad_wglCreatePbufferARB;
PFNWGLCREATEPBUFFEREXTPROC glad_wglCreatePbufferEXT;
PFNWGLDXCLOSEDEVICENVPROC glad_wglDXCloseDeviceNV;
PFNWGLDXLOCKOBJECTSNVPROC glad_wglDXLockObjectsNV;
PFNWGLDXOBJECTACCESSNVPROC glad_wglDXObjectAccessNV;
PFNWGLDXOPENDEVICENVPROC glad_wglDXOpenDeviceNV;
PFNWGLDXREGISTEROBJECTNVPROC glad_wglDXRegisterObjectNV;
PFNWGLDXSETRESOURCESHAREHANDLENVPROC glad_wglDXSetResourceShareHandleNV;
PFNWGLDXUNLOCKOBJECTSNVPROC glad_wglDXUnlockObjectsNV;
PFNWGLDXUNREGISTEROBJECTNVPROC glad_wglDXUnregisterObjectNV;
PFNWGLDELAYBEFORESWAPNVPROC glad_wglDelayBeforeSwapNV;
PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC glad_wglDeleteAssociatedContextAMD;
PFNWGLDELETEBUFFERREGIONARBPROC glad_wglDeleteBufferRegionARB;
PFNWGLDELETEDCNVPROC glad_wglDeleteDCNV;
PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC glad_wglDestroyDisplayColorTableEXT;
PFNWGLDESTROYIMAGEBUFFERI3DPROC glad_wglDestroyImageBufferI3D;
PFNWGLDESTROYPBUFFERARBPROC glad_wglDestroyPbufferARB;
PFNWGLDESTROYPBUFFEREXTPROC glad_wglDestroyPbufferEXT;
PFNWGLDISABLEFRAMELOCKI3DPROC glad_wglDisableFrameLockI3D;
PFNWGLDISABLEGENLOCKI3DPROC glad_wglDisableGenlockI3D;
PFNWGLENABLEFRAMELOCKI3DPROC glad_wglEnableFrameLockI3D;
PFNWGLENABLEGENLOCKI3DPROC glad_wglEnableGenlockI3D;
PFNWGLENDFRAMETRACKINGI3DPROC glad_wglEndFrameTrackingI3D;
PFNWGLENUMGPUDEVICESNVPROC glad_wglEnumGpuDevicesNV;
PFNWGLENUMGPUSFROMAFFINITYDCNVPROC glad_wglEnumGpusFromAffinityDCNV;
PFNWGLENUMGPUSNVPROC glad_wglEnumGpusNV;
PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC glad_wglEnumerateVideoCaptureDevicesNV;
PFNWGLENUMERATEVIDEODEVICESNVPROC glad_wglEnumerateVideoDevicesNV;
PFNWGLFREEMEMORYNVPROC glad_wglFreeMemoryNV;
PFNWGLGENLOCKSAMPLERATEI3DPROC glad_wglGenlockSampleRateI3D;
PFNWGLGENLOCKSOURCEDELAYI3DPROC glad_wglGenlockSourceDelayI3D;
PFNWGLGENLOCKSOURCEEDGEI3DPROC glad_wglGenlockSourceEdgeI3D;
PFNWGLGENLOCKSOURCEI3DPROC glad_wglGenlockSourceI3D;
PFNWGLGETCONTEXTGPUIDAMDPROC glad_wglGetContextGPUIDAMD;
PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC glad_wglGetCurrentAssociatedContextAMD;
PFNWGLGETCURRENTREADDCARBPROC glad_wglGetCurrentReadDCARB;
PFNWGLGETCURRENTREADDCEXTPROC glad_wglGetCurrentReadDCEXT;
PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC glad_wglGetDigitalVideoParametersI3D;
PFNWGLGETEXTENSIONSSTRINGARBPROC glad_wglGetExtensionsStringARB;
PFNWGLGETEXTENSIONSSTRINGEXTPROC glad_wglGetExtensionsStringEXT;
PFNWGLGETFRAMEUSAGEI3DPROC glad_wglGetFrameUsageI3D;
PFNWGLGETGPUIDSAMDPROC glad_wglGetGPUIDsAMD;
PFNWGLGETGPUINFOAMDPROC glad_wglGetGPUInfoAMD;
PFNWGLGETGAMMATABLEI3DPROC glad_wglGetGammaTableI3D;
PFNWGLGETGAMMATABLEPARAMETERSI3DPROC glad_wglGetGammaTableParametersI3D;
PFNWGLGETGENLOCKSAMPLERATEI3DPROC glad_wglGetGenlockSampleRateI3D;
PFNWGLGETGENLOCKSOURCEDELAYI3DPROC glad_wglGetGenlockSourceDelayI3D;
PFNWGLGETGENLOCKSOURCEEDGEI3DPROC glad_wglGetGenlockSourceEdgeI3D;
PFNWGLGETGENLOCKSOURCEI3DPROC glad_wglGetGenlockSourceI3D;
PFNWGLGETMSCRATEOMLPROC glad_wglGetMscRateOML;
PFNWGLGETPBUFFERDCARBPROC glad_wglGetPbufferDCARB;
PFNWGLGETPBUFFERDCEXTPROC glad_wglGetPbufferDCEXT;
PFNWGLGETPIXELFORMATATTRIBFVARBPROC glad_wglGetPixelFormatAttribfvARB;
PFNWGLGETPIXELFORMATATTRIBFVEXTPROC glad_wglGetPixelFormatAttribfvEXT;
PFNWGLGETPIXELFORMATATTRIBIVARBPROC glad_wglGetPixelFormatAttribivARB;
PFNWGLGETPIXELFORMATATTRIBIVEXTPROC glad_wglGetPixelFormatAttribivEXT;
PFNWGLGETSWAPINTERVALEXTPROC glad_wglGetSwapIntervalEXT;
PFNWGLGETSYNCVALUESOMLPROC glad_wglGetSyncValuesOML;
PFNWGLGETVIDEODEVICENVPROC glad_wglGetVideoDeviceNV;
PFNWGLGETVIDEOINFONVPROC glad_wglGetVideoInfoNV;
PFNWGLISENABLEDFRAMELOCKI3DPROC glad_wglIsEnabledFrameLockI3D;
PFNWGLISENABLEDGENLOCKI3DPROC glad_wglIsEnabledGenlockI3D;
PFNWGLJOINSWAPGROUPNVPROC glad_wglJoinSwapGroupNV;
PFNWGLLOADDISPLAYCOLORTABLEEXTPROC glad_wglLoadDisplayColorTableEXT;
PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC glad_wglLockVideoCaptureDeviceNV;
PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC glad_wglMakeAssociatedContextCurrentAMD;
PFNWGLMAKECONTEXTCURRENTARBPROC glad_wglMakeContextCurrentARB;
PFNWGLMAKECONTEXTCURRENTEXTPROC glad_wglMakeContextCurrentEXT;
PFNWGLQUERYCURRENTCONTEXTNVPROC glad_wglQueryCurrentContextNV;
PFNWGLQUERYFRAMECOUNTNVPROC glad_wglQueryFrameCountNV;
PFNWGLQUERYFRAMELOCKMASTERI3DPROC glad_wglQueryFrameLockMasterI3D;
PFNWGLQUERYFRAMETRACKINGI3DPROC glad_wglQueryFrameTrackingI3D;
PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC glad_wglQueryGenlockMaxSourceDelayI3D;
PFNWGLQUERYMAXSWAPGROUPSNVPROC glad_wglQueryMaxSwapGroupsNV;
PFNWGLQUERYPBUFFERARBPROC glad_wglQueryPbufferARB;
PFNWGLQUERYPBUFFEREXTPROC glad_wglQueryPbufferEXT;
PFNWGLQUERYSWAPGROUPNVPROC glad_wglQuerySwapGroupNV;
PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC glad_wglQueryVideoCaptureDeviceNV;
PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC glad_wglReleaseImageBufferEventsI3D;
PFNWGLRELEASEPBUFFERDCARBPROC glad_wglReleasePbufferDCARB;
PFNWGLRELEASEPBUFFERDCEXTPROC glad_wglReleasePbufferDCEXT;
PFNWGLRELEASETEXIMAGEARBPROC glad_wglReleaseTexImageARB;
PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC glad_wglReleaseVideoCaptureDeviceNV;
PFNWGLRELEASEVIDEODEVICENVPROC glad_wglReleaseVideoDeviceNV;
PFNWGLRELEASEVIDEOIMAGENVPROC glad_wglReleaseVideoImageNV;
PFNWGLRESETFRAMECOUNTNVPROC glad_wglResetFrameCountNV;
PFNWGLRESTOREBUFFERREGIONARBPROC glad_wglRestoreBufferRegionARB;
PFNWGLSAVEBUFFERREGIONARBPROC glad_wglSaveBufferRegionARB;
PFNWGLSENDPBUFFERTOVIDEONVPROC glad_wglSendPbufferToVideoNV;
PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC glad_wglSetDigitalVideoParametersI3D;
PFNWGLSETGAMMATABLEI3DPROC glad_wglSetGammaTableI3D;
PFNWGLSETGAMMATABLEPARAMETERSI3DPROC glad_wglSetGammaTableParametersI3D;
PFNWGLSETPBUFFERATTRIBARBPROC glad_wglSetPbufferAttribARB;
PFNWGLSETSTEREOEMITTERSTATE3DLPROC glad_wglSetStereoEmitterState3DL;
PFNWGLSWAPBUFFERSMSCOMLPROC glad_wglSwapBuffersMscOML;
PFNWGLSWAPINTERVALEXTPROC glad_wglSwapIntervalEXT;
PFNWGLSWAPLAYERBUFFERSMSCOMLPROC glad_wglSwapLayerBuffersMscOML;
PFNWGLWAITFORMSCOMLPROC glad_wglWaitForMscOML;
PFNWGLWAITFORSBCOMLPROC glad_wglWaitForSbcOML;


static void glad_wgl_load_WGL_3DL_stereo_control(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_3DL_stereo_control) return;
    glad_wglSetStereoEmitterState3DL = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC) load("wglSetStereoEmitterState3DL", userptr);
}
static void glad_wgl_load_WGL_AMD_gpu_association(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_AMD_gpu_association) return;
    glad_wglBlitContextFramebufferAMD = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC) load("wglBlitContextFramebufferAMD", userptr);
    glad_wglCreateAssociatedContextAMD = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC) load("wglCreateAssociatedContextAMD", userptr);
    glad_wglCreateAssociatedContextAttribsAMD = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) load("wglCreateAssociatedContextAttribsAMD", userptr);
    glad_wglDeleteAssociatedContextAMD = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC) load("wglDeleteAssociatedContextAMD", userptr);
    glad_wglGetContextGPUIDAMD = (PFNWGLGETCONTEXTGPUIDAMDPROC) load("wglGetContextGPUIDAMD", userptr);
    glad_wglGetCurrentAssociatedContextAMD = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC) load("wglGetCurrentAssociatedContextAMD", userptr);
    glad_wglGetGPUIDsAMD = (PFNWGLGETGPUIDSAMDPROC) load("wglGetGPUIDsAMD", userptr);
    glad_wglGetGPUInfoAMD = (PFNWGLGETGPUINFOAMDPROC) load("wglGetGPUInfoAMD", userptr);
    glad_wglMakeAssociatedContextCurrentAMD = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) load("wglMakeAssociatedContextCurrentAMD", userptr);
}
static void glad_wgl_load_WGL_ARB_buffer_region(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_ARB_buffer_region) return;
    glad_wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC) load("wglCreateBufferRegionARB", userptr);
    glad_wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC) load("wglDeleteBufferRegionARB", userptr);
    glad_wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC) load("wglRestoreBufferRegionARB", userptr);
    glad_wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC) load("wglSaveBufferRegionARB", userptr);
}
static void glad_wgl_load_WGL_ARB_create_context(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_ARB_create_context) return;
    glad_wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC) load("wglCreateContextAttribsARB", userptr);
}
static void glad_wgl_load_WGL_ARB_extensions_string(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_ARB_extensions_string) return;
    glad_wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) load("wglGetExtensionsStringARB", userptr);
}
static void glad_wgl_load_WGL_ARB_make_current_read(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_ARB_make_current_read) return;
    glad_wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC) load("wglGetCurrentReadDCARB", userptr);
    glad_wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC) load("wglMakeContextCurrentARB", userptr);
}
static void glad_wgl_load_WGL_ARB_pbuffer(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_ARB_pbuffer) return;
    glad_wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC) load("wglCreatePbufferARB", userptr);
    glad_wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC) load("wglDestroyPbufferARB", userptr);
    glad_wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC) load("wglGetPbufferDCARB", userptr);
    glad_wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC) load("wglQueryPbufferARB", userptr);
    glad_wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC) load("wglReleasePbufferDCARB", userptr);
}
static void glad_wgl_load_WGL_ARB_pixel_format(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_ARB_pixel_format) return;
    glad_wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC) load("wglChoosePixelFormatARB", userptr);
    glad_wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC) load("wglGetPixelFormatAttribfvARB", userptr);
    glad_wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC) load("wglGetPixelFormatAttribivARB", userptr);
}
static void glad_wgl_load_WGL_ARB_render_texture(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_ARB_render_texture) return;
    glad_wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC) load("wglBindTexImageARB", userptr);
    glad_wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC) load("wglReleaseTexImageARB", userptr);
    glad_wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC) load("wglSetPbufferAttribARB", userptr);
}
static void glad_wgl_load_WGL_EXT_display_color_table(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_EXT_display_color_table) return;
    glad_wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC) load("wglBindDisplayColorTableEXT", userptr);
    glad_wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC) load("wglCreateDisplayColorTableEXT", userptr);
    glad_wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC) load("wglDestroyDisplayColorTableEXT", userptr);
    glad_wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC) load("wglLoadDisplayColorTableEXT", userptr);
}
static void glad_wgl_load_WGL_EXT_extensions_string(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_EXT_extensions_string) return;
    glad_wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) load("wglGetExtensionsStringEXT", userptr);
}
static void glad_wgl_load_WGL_EXT_make_current_read(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_EXT_make_current_read) return;
    glad_wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC) load("wglGetCurrentReadDCEXT", userptr);
    glad_wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC) load("wglMakeContextCurrentEXT", userptr);
}
static void glad_wgl_load_WGL_EXT_pbuffer(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_EXT_pbuffer) return;
    glad_wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC) load("wglCreatePbufferEXT", userptr);
    glad_wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC) load("wglDestroyPbufferEXT", userptr);
    glad_wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC) load("wglGetPbufferDCEXT", userptr);
    glad_wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC) load("wglQueryPbufferEXT", userptr);
    glad_wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC) load("wglReleasePbufferDCEXT", userptr);
}
static void glad_wgl_load_WGL_EXT_pixel_format(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_EXT_pixel_format) return;
    glad_wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC) load("wglChoosePixelFormatEXT", userptr);
    glad_wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC) load("wglGetPixelFormatAttribfvEXT", userptr);
    glad_wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC) load("wglGetPixelFormatAttribivEXT", userptr);
}
static void glad_wgl_load_WGL_EXT_swap_control(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_EXT_swap_control) return;
    glad_wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC) load("wglGetSwapIntervalEXT", userptr);
    glad_wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC) load("wglSwapIntervalEXT", userptr);
}
static void glad_wgl_load_WGL_I3D_digital_video_control(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_I3D_digital_video_control) return;
    glad_wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC) load("wglGetDigitalVideoParametersI3D", userptr);
    glad_wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC) load("wglSetDigitalVideoParametersI3D", userptr);
}
static void glad_wgl_load_WGL_I3D_gamma(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_I3D_gamma) return;
    glad_wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC) load("wglGetGammaTableI3D", userptr);
    glad_wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC) load("wglGetGammaTableParametersI3D", userptr);
    glad_wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC) load("wglSetGammaTableI3D", userptr);
    glad_wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC) load("wglSetGammaTableParametersI3D", userptr);
}
static void glad_wgl_load_WGL_I3D_genlock(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_I3D_genlock) return;
    glad_wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC) load("wglDisableGenlockI3D", userptr);
    glad_wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC) load("wglEnableGenlockI3D", userptr);
    glad_wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC) load("wglGenlockSampleRateI3D", userptr);
    glad_wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC) load("wglGenlockSourceDelayI3D", userptr);
    glad_wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC) load("wglGenlockSourceEdgeI3D", userptr);
    glad_wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC) load("wglGenlockSourceI3D", userptr);
    glad_wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC) load("wglGetGenlockSampleRateI3D", userptr);
    glad_wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC) load("wglGetGenlockSourceDelayI3D", userptr);
    glad_wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC) load("wglGetGenlockSourceEdgeI3D", userptr);
    glad_wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC) load("wglGetGenlockSourceI3D", userptr);
    glad_wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC) load("wglIsEnabledGenlockI3D", userptr);
    glad_wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC) load("wglQueryGenlockMaxSourceDelayI3D", userptr);
}
static void glad_wgl_load_WGL_I3D_image_buffer(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_I3D_image_buffer) return;
    glad_wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC) load("wglAssociateImageBufferEventsI3D", userptr);
    glad_wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC) load("wglCreateImageBufferI3D", userptr);
    glad_wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC) load("wglDestroyImageBufferI3D", userptr);
    glad_wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC) load("wglReleaseImageBufferEventsI3D", userptr);
}
static void glad_wgl_load_WGL_I3D_swap_frame_lock(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_I3D_swap_frame_lock) return;
    glad_wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC) load("wglDisableFrameLockI3D", userptr);
    glad_wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC) load("wglEnableFrameLockI3D", userptr);
    glad_wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC) load("wglIsEnabledFrameLockI3D", userptr);
    glad_wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC) load("wglQueryFrameLockMasterI3D", userptr);
}
static void glad_wgl_load_WGL_I3D_swap_frame_usage(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_I3D_swap_frame_usage) return;
    glad_wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC) load("wglBeginFrameTrackingI3D", userptr);
    glad_wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC) load("wglEndFrameTrackingI3D", userptr);
    glad_wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC) load("wglGetFrameUsageI3D", userptr);
    glad_wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC) load("wglQueryFrameTrackingI3D", userptr);
}
static void glad_wgl_load_WGL_NV_DX_interop(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_NV_DX_interop) return;
    glad_wglDXCloseDeviceNV = (PFNWGLDXCLOSEDEVICENVPROC) load("wglDXCloseDeviceNV", userptr);
    glad_wglDXLockObjectsNV = (PFNWGLDXLOCKOBJECTSNVPROC) load("wglDXLockObjectsNV", userptr);
    glad_wglDXObjectAccessNV = (PFNWGLDXOBJECTACCESSNVPROC) load("wglDXObjectAccessNV", userptr);
    glad_wglDXOpenDeviceNV = (PFNWGLDXOPENDEVICENVPROC) load("wglDXOpenDeviceNV", userptr);
    glad_wglDXRegisterObjectNV = (PFNWGLDXREGISTEROBJECTNVPROC) load("wglDXRegisterObjectNV", userptr);
    glad_wglDXSetResourceShareHandleNV = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC) load("wglDXSetResourceShareHandleNV", userptr);
    glad_wglDXUnlockObjectsNV = (PFNWGLDXUNLOCKOBJECTSNVPROC) load("wglDXUnlockObjectsNV", userptr);
    glad_wglDXUnregisterObjectNV = (PFNWGLDXUNREGISTEROBJECTNVPROC) load("wglDXUnregisterObjectNV", userptr);
}
static void glad_wgl_load_WGL_NV_copy_image(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_NV_copy_image) return;
    glad_wglCopyImageSubDataNV = (PFNWGLCOPYIMAGESUBDATANVPROC) load("wglCopyImageSubDataNV", userptr);
}
static void glad_wgl_load_WGL_NV_delay_before_swap(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_NV_delay_before_swap) return;
    glad_wglDelayBeforeSwapNV = (PFNWGLDELAYBEFORESWAPNVPROC) load("wglDelayBeforeSwapNV", userptr);
}
static void glad_wgl_load_WGL_NV_gpu_affinity(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_NV_gpu_affinity) return;
    glad_wglCreateAffinityDCNV = (PFNWGLCREATEAFFINITYDCNVPROC) load("wglCreateAffinityDCNV", userptr);
    glad_wglDeleteDCNV = (PFNWGLDELETEDCNVPROC) load("wglDeleteDCNV", userptr);
    glad_wglEnumGpuDevicesNV = (PFNWGLENUMGPUDEVICESNVPROC) load("wglEnumGpuDevicesNV", userptr);
    glad_wglEnumGpusFromAffinityDCNV = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC) load("wglEnumGpusFromAffinityDCNV", userptr);
    glad_wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC) load("wglEnumGpusNV", userptr);
}
static void glad_wgl_load_WGL_NV_present_video(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_NV_present_video) return;
    glad_wglBindVideoDeviceNV = (PFNWGLBINDVIDEODEVICENVPROC) load("wglBindVideoDeviceNV", userptr);
    glad_wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC) load("wglEnumerateVideoDevicesNV", userptr);
    glad_wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC) load("wglQueryCurrentContextNV", userptr);
}
static void glad_wgl_load_WGL_NV_swap_group(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_NV_swap_group) return;
    glad_wglBindSwapBarrierNV = (PFNWGLBINDSWAPBARRIERNVPROC) load("wglBindSwapBarrierNV", userptr);
    glad_wglJoinSwapGroupNV = (PFNWGLJOINSWAPGROUPNVPROC) load("wglJoinSwapGroupNV", userptr);
    glad_wglQueryFrameCountNV = (PFNWGLQUERYFRAMECOUNTNVPROC) load("wglQueryFrameCountNV", userptr);
    glad_wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC) load("wglQueryMaxSwapGroupsNV", userptr);
    glad_wglQuerySwapGroupNV = (PFNWGLQUERYSWAPGROUPNVPROC) load("wglQuerySwapGroupNV", userptr);
    glad_wglResetFrameCountNV = (PFNWGLRESETFRAMECOUNTNVPROC) load("wglResetFrameCountNV", userptr);
}
static void glad_wgl_load_WGL_NV_vertex_array_range(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_NV_vertex_array_range) return;
    glad_wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC) load("wglAllocateMemoryNV", userptr);
    glad_wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC) load("wglFreeMemoryNV", userptr);
}
static void glad_wgl_load_WGL_NV_video_capture(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_NV_video_capture) return;
    glad_wglBindVideoCaptureDeviceNV = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC) load("wglBindVideoCaptureDeviceNV", userptr);
    glad_wglEnumerateVideoCaptureDevicesNV = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC) load("wglEnumerateVideoCaptureDevicesNV", userptr);
    glad_wglLockVideoCaptureDeviceNV = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC) load("wglLockVideoCaptureDeviceNV", userptr);
    glad_wglQueryVideoCaptureDeviceNV = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC) load("wglQueryVideoCaptureDeviceNV", userptr);
    glad_wglReleaseVideoCaptureDeviceNV = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC) load("wglReleaseVideoCaptureDeviceNV", userptr);
}
static void glad_wgl_load_WGL_NV_video_output(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_NV_video_output) return;
    glad_wglBindVideoImageNV = (PFNWGLBINDVIDEOIMAGENVPROC) load("wglBindVideoImageNV", userptr);
    glad_wglGetVideoDeviceNV = (PFNWGLGETVIDEODEVICENVPROC) load("wglGetVideoDeviceNV", userptr);
    glad_wglGetVideoInfoNV = (PFNWGLGETVIDEOINFONVPROC) load("wglGetVideoInfoNV", userptr);
    glad_wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC) load("wglReleaseVideoDeviceNV", userptr);
    glad_wglReleaseVideoImageNV = (PFNWGLRELEASEVIDEOIMAGENVPROC) load("wglReleaseVideoImageNV", userptr);
    glad_wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC) load("wglSendPbufferToVideoNV", userptr);
}
static void glad_wgl_load_WGL_OML_sync_control(GLADuserptrloadfunc load, void *userptr) {
    if(!GLAD_WGL_OML_sync_control) return;
    glad_wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC) load("wglGetMscRateOML", userptr);
    glad_wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC) load("wglGetSyncValuesOML", userptr);
    glad_wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC) load("wglSwapBuffersMscOML", userptr);
    glad_wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) load("wglSwapLayerBuffersMscOML", userptr);
    glad_wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC) load("wglWaitForMscOML", userptr);
    glad_wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC) load("wglWaitForSbcOML", userptr);
}



static int glad_wgl_has_extension(HDC hdc, const char *ext) {
    const char *terminator;
    const char *loc;
    const char *extensions;

    if(wglGetExtensionsStringEXT == NULL && wglGetExtensionsStringARB == NULL)
        return 0;

    if(wglGetExtensionsStringARB == NULL || hdc == INVALID_HANDLE_VALUE)
        extensions = wglGetExtensionsStringEXT();
    else
        extensions = wglGetExtensionsStringARB(hdc);

    if(extensions == NULL || ext == NULL)
        return 0;

    while(1) {
        loc = strstr(extensions, ext);
        if(loc == NULL)
            break;

        terminator = loc + strlen(ext);
        if((loc == extensions || *(loc - 1) == ' ') &&
            (*terminator == ' ' || *terminator == '\0'))
        {
            return 1;
        }
        extensions = terminator;
    }

    return 0;
}

static GLADapiproc glad_wgl_get_proc_from_userptr(const char* name, void *userptr) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_wgl_find_extensions_wgl(HDC hdc) {
    GLAD_WGL_3DFX_multisample = glad_wgl_has_extension(hdc, "WGL_3DFX_multisample");
    GLAD_WGL_3DL_stereo_control = glad_wgl_has_extension(hdc, "WGL_3DL_stereo_control");
    GLAD_WGL_AMD_gpu_association = glad_wgl_has_extension(hdc, "WGL_AMD_gpu_association");
    GLAD_WGL_ARB_buffer_region = glad_wgl_has_extension(hdc, "WGL_ARB_buffer_region");
    GLAD_WGL_ARB_context_flush_control = glad_wgl_has_extension(hdc, "WGL_ARB_context_flush_control");
    GLAD_WGL_ARB_create_context = glad_wgl_has_extension(hdc, "WGL_ARB_create_context");
    GLAD_WGL_ARB_create_context_no_error = glad_wgl_has_extension(hdc, "WGL_ARB_create_context_no_error");
    GLAD_WGL_ARB_create_context_profile = glad_wgl_has_extension(hdc, "WGL_ARB_create_context_profile");
    GLAD_WGL_ARB_create_context_robustness = glad_wgl_has_extension(hdc, "WGL_ARB_create_context_robustness");
    GLAD_WGL_ARB_extensions_string = glad_wgl_has_extension(hdc, "WGL_ARB_extensions_string");
    GLAD_WGL_ARB_framebuffer_sRGB = glad_wgl_has_extension(hdc, "WGL_ARB_framebuffer_sRGB");
    GLAD_WGL_ARB_make_current_read = glad_wgl_has_extension(hdc, "WGL_ARB_make_current_read");
    GLAD_WGL_ARB_multisample = glad_wgl_has_extension(hdc, "WGL_ARB_multisample");
    GLAD_WGL_ARB_pbuffer = glad_wgl_has_extension(hdc, "WGL_ARB_pbuffer");
    GLAD_WGL_ARB_pixel_format = glad_wgl_has_extension(hdc, "WGL_ARB_pixel_format");
    GLAD_WGL_ARB_pixel_format_float = glad_wgl_has_extension(hdc, "WGL_ARB_pixel_format_float");
    GLAD_WGL_ARB_render_texture = glad_wgl_has_extension(hdc, "WGL_ARB_render_texture");
    GLAD_WGL_ARB_robustness_application_isolation = glad_wgl_has_extension(hdc, "WGL_ARB_robustness_application_isolation");
    GLAD_WGL_ARB_robustness_share_group_isolation = glad_wgl_has_extension(hdc, "WGL_ARB_robustness_share_group_isolation");
    GLAD_WGL_ATI_pixel_format_float = glad_wgl_has_extension(hdc, "WGL_ATI_pixel_format_float");
    GLAD_WGL_ATI_render_texture_rectangle = glad_wgl_has_extension(hdc, "WGL_ATI_render_texture_rectangle");
    GLAD_WGL_EXT_colorspace = glad_wgl_has_extension(hdc, "WGL_EXT_colorspace");
    GLAD_WGL_EXT_create_context_es2_profile = glad_wgl_has_extension(hdc, "WGL_EXT_create_context_es2_profile");
    GLAD_WGL_EXT_create_context_es_profile = glad_wgl_has_extension(hdc, "WGL_EXT_create_context_es_profile");
    GLAD_WGL_EXT_depth_float = glad_wgl_has_extension(hdc, "WGL_EXT_depth_float");
    GLAD_WGL_EXT_display_color_table = glad_wgl_has_extension(hdc, "WGL_EXT_display_color_table");
    GLAD_WGL_EXT_extensions_string = glad_wgl_has_extension(hdc, "WGL_EXT_extensions_string");
    GLAD_WGL_EXT_framebuffer_sRGB = glad_wgl_has_extension(hdc, "WGL_EXT_framebuffer_sRGB");
    GLAD_WGL_EXT_make_current_read = glad_wgl_has_extension(hdc, "WGL_EXT_make_current_read");
    GLAD_WGL_EXT_multisample = glad_wgl_has_extension(hdc, "WGL_EXT_multisample");
    GLAD_WGL_EXT_pbuffer = glad_wgl_has_extension(hdc, "WGL_EXT_pbuffer");
    GLAD_WGL_EXT_pixel_format = glad_wgl_has_extension(hdc, "WGL_EXT_pixel_format");
    GLAD_WGL_EXT_pixel_format_packed_float = glad_wgl_has_extension(hdc, "WGL_EXT_pixel_format_packed_float");
    GLAD_WGL_EXT_swap_control = glad_wgl_has_extension(hdc, "WGL_EXT_swap_control");
    GLAD_WGL_EXT_swap_control_tear = glad_wgl_has_extension(hdc, "WGL_EXT_swap_control_tear");
    GLAD_WGL_I3D_digital_video_control = glad_wgl_has_extension(hdc, "WGL_I3D_digital_video_control");
    GLAD_WGL_I3D_gamma = glad_wgl_has_extension(hdc, "WGL_I3D_gamma");
    GLAD_WGL_I3D_genlock = glad_wgl_has_extension(hdc, "WGL_I3D_genlock");
    GLAD_WGL_I3D_image_buffer = glad_wgl_has_extension(hdc, "WGL_I3D_image_buffer");
    GLAD_WGL_I3D_swap_frame_lock = glad_wgl_has_extension(hdc, "WGL_I3D_swap_frame_lock");
    GLAD_WGL_I3D_swap_frame_usage = glad_wgl_has_extension(hdc, "WGL_I3D_swap_frame_usage");
    GLAD_WGL_NV_DX_interop = glad_wgl_has_extension(hdc, "WGL_NV_DX_interop");
    GLAD_WGL_NV_DX_interop2 = glad_wgl_has_extension(hdc, "WGL_NV_DX_interop2");
    GLAD_WGL_NV_copy_image = glad_wgl_has_extension(hdc, "WGL_NV_copy_image");
    GLAD_WGL_NV_delay_before_swap = glad_wgl_has_extension(hdc, "WGL_NV_delay_before_swap");
    GLAD_WGL_NV_float_buffer = glad_wgl_has_extension(hdc, "WGL_NV_float_buffer");
    GLAD_WGL_NV_gpu_affinity = glad_wgl_has_extension(hdc, "WGL_NV_gpu_affinity");
    GLAD_WGL_NV_multisample_coverage = glad_wgl_has_extension(hdc, "WGL_NV_multisample_coverage");
    GLAD_WGL_NV_present_video = glad_wgl_has_extension(hdc, "WGL_NV_present_video");
    GLAD_WGL_NV_render_depth_texture = glad_wgl_has_extension(hdc, "WGL_NV_render_depth_texture");
    GLAD_WGL_NV_render_texture_rectangle = glad_wgl_has_extension(hdc, "WGL_NV_render_texture_rectangle");
    GLAD_WGL_NV_swap_group = glad_wgl_has_extension(hdc, "WGL_NV_swap_group");
    GLAD_WGL_NV_vertex_array_range = glad_wgl_has_extension(hdc, "WGL_NV_vertex_array_range");
    GLAD_WGL_NV_video_capture = glad_wgl_has_extension(hdc, "WGL_NV_video_capture");
    GLAD_WGL_NV_video_output = glad_wgl_has_extension(hdc, "WGL_NV_video_output");
    GLAD_WGL_OML_sync_control = glad_wgl_has_extension(hdc, "WGL_OML_sync_control");
    return 1;
}

static int glad_wgl_find_core_wgl(void) {
    int major = 1, minor = 0;
    GLAD_WGL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadWGLUserPtr(HDC hdc, GLADuserptrloadfunc load, void *userptr) {
    int version;
    wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) load("wglGetExtensionsStringARB", userptr);
    wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) load("wglGetExtensionsStringEXT", userptr);
    if(wglGetExtensionsStringARB == NULL && wglGetExtensionsStringEXT == NULL) return 0;
    version = glad_wgl_find_core_wgl();


    if (!glad_wgl_find_extensions_wgl(hdc)) return 0;
    glad_wgl_load_WGL_3DL_stereo_control(load, userptr);
    glad_wgl_load_WGL_AMD_gpu_association(load, userptr);
    glad_wgl_load_WGL_ARB_buffer_region(load, userptr);
    glad_wgl_load_WGL_ARB_create_context(load, userptr);
    glad_wgl_load_WGL_ARB_extensions_string(load, userptr);
    glad_wgl_load_WGL_ARB_make_current_read(load, userptr);
    glad_wgl_load_WGL_ARB_pbuffer(load, userptr);
    glad_wgl_load_WGL_ARB_pixel_format(load, userptr);
    glad_wgl_load_WGL_ARB_render_texture(load, userptr);
    glad_wgl_load_WGL_EXT_display_color_table(load, userptr);
    glad_wgl_load_WGL_EXT_extensions_string(load, userptr);
    glad_wgl_load_WGL_EXT_make_current_read(load, userptr);
    glad_wgl_load_WGL_EXT_pbuffer(load, userptr);
    glad_wgl_load_WGL_EXT_pixel_format(load, userptr);
    glad_wgl_load_WGL_EXT_swap_control(load, userptr);
    glad_wgl_load_WGL_I3D_digital_video_control(load, userptr);
    glad_wgl_load_WGL_I3D_gamma(load, userptr);
    glad_wgl_load_WGL_I3D_genlock(load, userptr);
    glad_wgl_load_WGL_I3D_image_buffer(load, userptr);
    glad_wgl_load_WGL_I3D_swap_frame_lock(load, userptr);
    glad_wgl_load_WGL_I3D_swap_frame_usage(load, userptr);
    glad_wgl_load_WGL_NV_DX_interop(load, userptr);
    glad_wgl_load_WGL_NV_copy_image(load, userptr);
    glad_wgl_load_WGL_NV_delay_before_swap(load, userptr);
    glad_wgl_load_WGL_NV_gpu_affinity(load, userptr);
    glad_wgl_load_WGL_NV_present_video(load, userptr);
    glad_wgl_load_WGL_NV_swap_group(load, userptr);
    glad_wgl_load_WGL_NV_vertex_array_range(load, userptr);
    glad_wgl_load_WGL_NV_video_capture(load, userptr);
    glad_wgl_load_WGL_NV_video_output(load, userptr);
    glad_wgl_load_WGL_OML_sync_control(load, userptr);

    return version;
}

int gladLoadWGL(HDC hdc, GLADloadfunc load) {
    return gladLoadWGLUserPtr(hdc, glad_wgl_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}

#ifdef GLAD_WGL

int gladLoaderLoadWGL(HDC hdc) {
    return gladLoadWGLUserPtr(hdc, glad_wgl_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) wglGetProcAddress);
}

#endif /* GLAD_WGL */
