#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/vulkan.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */


int GLAD_VK_VERSION_1_0 = 0;
int GLAD_VK_VERSION_1_1 = 0;
int GLAD_VK_AMD_buffer_marker = 0;
int GLAD_VK_AMD_draw_indirect_count = 0;
int GLAD_VK_AMD_gcn_shader = 0;
int GLAD_VK_AMD_gpu_shader_half_float = 0;
int GLAD_VK_AMD_gpu_shader_int16 = 0;
int GLAD_VK_AMD_mixed_attachment_samples = 0;
int GLAD_VK_AMD_negative_viewport_height = 0;
int GLAD_VK_AMD_rasterization_order = 0;
int GLAD_VK_AMD_shader_ballot = 0;
int GLAD_VK_AMD_shader_core_properties = 0;
int GLAD_VK_AMD_shader_explicit_vertex_parameter = 0;
int GLAD_VK_AMD_shader_fragment_mask = 0;
int GLAD_VK_AMD_shader_image_load_store_lod = 0;
int GLAD_VK_AMD_shader_info = 0;
int GLAD_VK_AMD_shader_trinary_minmax = 0;
int GLAD_VK_AMD_texture_gather_bias_lod = 0;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLAD_VK_ANDROID_external_memory_android_hardware_buffer = 0;

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
int GLAD_VK_EXT_acquire_xlib_display = 0;

#endif
int GLAD_VK_EXT_astc_decode_mode = 0;
int GLAD_VK_EXT_blend_operation_advanced = 0;
int GLAD_VK_EXT_conditional_rendering = 0;
int GLAD_VK_EXT_conservative_rasterization = 0;
int GLAD_VK_EXT_debug_marker = 0;
int GLAD_VK_EXT_debug_report = 0;
int GLAD_VK_EXT_debug_utils = 0;
int GLAD_VK_EXT_depth_range_unrestricted = 0;
int GLAD_VK_EXT_descriptor_indexing = 0;
int GLAD_VK_EXT_direct_mode_display = 0;
int GLAD_VK_EXT_discard_rectangles = 0;
int GLAD_VK_EXT_display_control = 0;
int GLAD_VK_EXT_display_surface_counter = 0;
int GLAD_VK_EXT_external_memory_dma_buf = 0;
int GLAD_VK_EXT_external_memory_host = 0;
int GLAD_VK_EXT_global_priority = 0;
int GLAD_VK_EXT_hdr_metadata = 0;
int GLAD_VK_EXT_inline_uniform_block = 0;
int GLAD_VK_EXT_post_depth_coverage = 0;
int GLAD_VK_EXT_queue_family_foreign = 0;
int GLAD_VK_EXT_sample_locations = 0;
int GLAD_VK_EXT_sampler_filter_minmax = 0;
int GLAD_VK_EXT_shader_stencil_export = 0;
int GLAD_VK_EXT_shader_subgroup_ballot = 0;
int GLAD_VK_EXT_shader_subgroup_vote = 0;
int GLAD_VK_EXT_shader_viewport_index_layer = 0;
int GLAD_VK_EXT_swapchain_colorspace = 0;
int GLAD_VK_EXT_validation_cache = 0;
int GLAD_VK_EXT_validation_flags = 0;
int GLAD_VK_EXT_vertex_attribute_divisor = 0;
int GLAD_VK_GOOGLE_display_timing = 0;
int GLAD_VK_IMG_filter_cubic = 0;
int GLAD_VK_IMG_format_pvrtc = 0;
int GLAD_VK_KHR_16bit_storage = 0;
int GLAD_VK_KHR_8bit_storage = 0;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLAD_VK_KHR_android_surface = 0;

#endif
int GLAD_VK_KHR_bind_memory2 = 0;
int GLAD_VK_KHR_create_renderpass2 = 0;
int GLAD_VK_KHR_dedicated_allocation = 0;
int GLAD_VK_KHR_descriptor_update_template = 0;
int GLAD_VK_KHR_device_group = 0;
int GLAD_VK_KHR_device_group_creation = 0;
int GLAD_VK_KHR_display = 0;
int GLAD_VK_KHR_display_swapchain = 0;
int GLAD_VK_KHR_draw_indirect_count = 0;
int GLAD_VK_KHR_driver_properties = 0;
int GLAD_VK_KHR_external_fence = 0;
int GLAD_VK_KHR_external_fence_capabilities = 0;
int GLAD_VK_KHR_external_fence_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_external_fence_win32 = 0;

#endif
int GLAD_VK_KHR_external_memory = 0;
int GLAD_VK_KHR_external_memory_capabilities = 0;
int GLAD_VK_KHR_external_memory_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_external_memory_win32 = 0;

#endif
int GLAD_VK_KHR_external_semaphore = 0;
int GLAD_VK_KHR_external_semaphore_capabilities = 0;
int GLAD_VK_KHR_external_semaphore_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_external_semaphore_win32 = 0;

#endif
int GLAD_VK_KHR_get_display_properties2 = 0;
int GLAD_VK_KHR_get_memory_requirements2 = 0;
int GLAD_VK_KHR_get_physical_device_properties2 = 0;
int GLAD_VK_KHR_get_surface_capabilities2 = 0;
int GLAD_VK_KHR_image_format_list = 0;
int GLAD_VK_KHR_incremental_present = 0;
int GLAD_VK_KHR_maintenance1 = 0;
int GLAD_VK_KHR_maintenance2 = 0;
int GLAD_VK_KHR_maintenance3 = 0;
#if defined(VK_USE_PLATFORM_MIR_KHR)
int GLAD_VK_KHR_mir_surface = 0;

#endif
int GLAD_VK_KHR_multiview = 0;
int GLAD_VK_KHR_push_descriptor = 0;
int GLAD_VK_KHR_relaxed_block_layout = 0;
int GLAD_VK_KHR_sampler_mirror_clamp_to_edge = 0;
int GLAD_VK_KHR_sampler_ycbcr_conversion = 0;
int GLAD_VK_KHR_shader_atomic_int64 = 0;
int GLAD_VK_KHR_shader_draw_parameters = 0;
int GLAD_VK_KHR_shared_presentable_image = 0;
int GLAD_VK_KHR_storage_buffer_storage_class = 0;
int GLAD_VK_KHR_surface = 0;
int GLAD_VK_KHR_swapchain = 0;
int GLAD_VK_KHR_variable_pointers = 0;
int GLAD_VK_KHR_vulkan_memory_model = 0;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
int GLAD_VK_KHR_wayland_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_win32_keyed_mutex = 0;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_win32_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
int GLAD_VK_KHR_xcb_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
int GLAD_VK_KHR_xlib_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
int GLAD_VK_MVK_ios_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
int GLAD_VK_MVK_macos_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
int GLAD_VK_NN_vi_surface = 0;

#endif
int GLAD_VK_NVX_device_generated_commands = 0;
int GLAD_VK_NVX_multiview_per_view_attributes = 0;
int GLAD_VK_NVX_raytracing = 0;
int GLAD_VK_NV_clip_space_w_scaling = 0;
int GLAD_VK_NV_compute_shader_derivatives = 0;
int GLAD_VK_NV_corner_sampled_image = 0;
int GLAD_VK_NV_dedicated_allocation = 0;
int GLAD_VK_NV_device_diagnostic_checkpoints = 0;
int GLAD_VK_NV_external_memory = 0;
int GLAD_VK_NV_external_memory_capabilities = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_NV_external_memory_win32 = 0;

#endif
int GLAD_VK_NV_fill_rectangle = 0;
int GLAD_VK_NV_fragment_coverage_to_color = 0;
int GLAD_VK_NV_fragment_shader_barycentric = 0;
int GLAD_VK_NV_framebuffer_mixed_samples = 0;
int GLAD_VK_NV_geometry_shader_passthrough = 0;
int GLAD_VK_NV_glsl_shader = 0;
int GLAD_VK_NV_mesh_shader = 0;
int GLAD_VK_NV_representative_fragment_test = 0;
int GLAD_VK_NV_sample_mask_override_coverage = 0;
int GLAD_VK_NV_scissor_exclusive = 0;
int GLAD_VK_NV_shader_image_footprint = 0;
int GLAD_VK_NV_shader_subgroup_partitioned = 0;
int GLAD_VK_NV_shading_rate_image = 0;
int GLAD_VK_NV_viewport_array2 = 0;
int GLAD_VK_NV_viewport_swizzle = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_NV_win32_keyed_mutex = 0;

#endif



PFN_vkAcquireNextImage2KHR glad_vkAcquireNextImage2KHR = NULL;
PFN_vkAcquireNextImageKHR glad_vkAcquireNextImageKHR = NULL;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
PFN_vkAcquireXlibDisplayEXT glad_vkAcquireXlibDisplayEXT = NULL;

#endif
PFN_vkAllocateCommandBuffers glad_vkAllocateCommandBuffers = NULL;
PFN_vkAllocateDescriptorSets glad_vkAllocateDescriptorSets = NULL;
PFN_vkAllocateMemory glad_vkAllocateMemory = NULL;
PFN_vkBeginCommandBuffer glad_vkBeginCommandBuffer = NULL;
PFN_vkBindAccelerationStructureMemoryNVX glad_vkBindAccelerationStructureMemoryNVX = NULL;
PFN_vkBindBufferMemory glad_vkBindBufferMemory = NULL;
PFN_vkBindBufferMemory2 glad_vkBindBufferMemory2 = NULL;
PFN_vkBindBufferMemory2KHR glad_vkBindBufferMemory2KHR = NULL;
PFN_vkBindImageMemory glad_vkBindImageMemory = NULL;
PFN_vkBindImageMemory2 glad_vkBindImageMemory2 = NULL;
PFN_vkBindImageMemory2KHR glad_vkBindImageMemory2KHR = NULL;
PFN_vkCmdBeginConditionalRenderingEXT glad_vkCmdBeginConditionalRenderingEXT = NULL;
PFN_vkCmdBeginDebugUtilsLabelEXT glad_vkCmdBeginDebugUtilsLabelEXT = NULL;
PFN_vkCmdBeginQuery glad_vkCmdBeginQuery = NULL;
PFN_vkCmdBeginRenderPass glad_vkCmdBeginRenderPass = NULL;
PFN_vkCmdBeginRenderPass2KHR glad_vkCmdBeginRenderPass2KHR = NULL;
PFN_vkCmdBindDescriptorSets glad_vkCmdBindDescriptorSets = NULL;
PFN_vkCmdBindIndexBuffer glad_vkCmdBindIndexBuffer = NULL;
PFN_vkCmdBindPipeline glad_vkCmdBindPipeline = NULL;
PFN_vkCmdBindShadingRateImageNV glad_vkCmdBindShadingRateImageNV = NULL;
PFN_vkCmdBindVertexBuffers glad_vkCmdBindVertexBuffers = NULL;
PFN_vkCmdBlitImage glad_vkCmdBlitImage = NULL;
PFN_vkCmdBuildAccelerationStructureNVX glad_vkCmdBuildAccelerationStructureNVX = NULL;
PFN_vkCmdClearAttachments glad_vkCmdClearAttachments = NULL;
PFN_vkCmdClearColorImage glad_vkCmdClearColorImage = NULL;
PFN_vkCmdClearDepthStencilImage glad_vkCmdClearDepthStencilImage = NULL;
PFN_vkCmdCopyAccelerationStructureNVX glad_vkCmdCopyAccelerationStructureNVX = NULL;
PFN_vkCmdCopyBuffer glad_vkCmdCopyBuffer = NULL;
PFN_vkCmdCopyBufferToImage glad_vkCmdCopyBufferToImage = NULL;
PFN_vkCmdCopyImage glad_vkCmdCopyImage = NULL;
PFN_vkCmdCopyImageToBuffer glad_vkCmdCopyImageToBuffer = NULL;
PFN_vkCmdCopyQueryPoolResults glad_vkCmdCopyQueryPoolResults = NULL;
PFN_vkCmdDebugMarkerBeginEXT glad_vkCmdDebugMarkerBeginEXT = NULL;
PFN_vkCmdDebugMarkerEndEXT glad_vkCmdDebugMarkerEndEXT = NULL;
PFN_vkCmdDebugMarkerInsertEXT glad_vkCmdDebugMarkerInsertEXT = NULL;
PFN_vkCmdDispatch glad_vkCmdDispatch = NULL;
PFN_vkCmdDispatchBase glad_vkCmdDispatchBase = NULL;
PFN_vkCmdDispatchBaseKHR glad_vkCmdDispatchBaseKHR = NULL;
PFN_vkCmdDispatchIndirect glad_vkCmdDispatchIndirect = NULL;
PFN_vkCmdDraw glad_vkCmdDraw = NULL;
PFN_vkCmdDrawIndexed glad_vkCmdDrawIndexed = NULL;
PFN_vkCmdDrawIndexedIndirect glad_vkCmdDrawIndexedIndirect = NULL;
PFN_vkCmdDrawIndexedIndirectCountAMD glad_vkCmdDrawIndexedIndirectCountAMD = NULL;
PFN_vkCmdDrawIndexedIndirectCountKHR glad_vkCmdDrawIndexedIndirectCountKHR = NULL;
PFN_vkCmdDrawIndirect glad_vkCmdDrawIndirect = NULL;
PFN_vkCmdDrawIndirectCountAMD glad_vkCmdDrawIndirectCountAMD = NULL;
PFN_vkCmdDrawIndirectCountKHR glad_vkCmdDrawIndirectCountKHR = NULL;
PFN_vkCmdDrawMeshTasksIndirectCountNV glad_vkCmdDrawMeshTasksIndirectCountNV = NULL;
PFN_vkCmdDrawMeshTasksIndirectNV glad_vkCmdDrawMeshTasksIndirectNV = NULL;
PFN_vkCmdDrawMeshTasksNV glad_vkCmdDrawMeshTasksNV = NULL;
PFN_vkCmdEndConditionalRenderingEXT glad_vkCmdEndConditionalRenderingEXT = NULL;
PFN_vkCmdEndDebugUtilsLabelEXT glad_vkCmdEndDebugUtilsLabelEXT = NULL;
PFN_vkCmdEndQuery glad_vkCmdEndQuery = NULL;
PFN_vkCmdEndRenderPass glad_vkCmdEndRenderPass = NULL;
PFN_vkCmdEndRenderPass2KHR glad_vkCmdEndRenderPass2KHR = NULL;
PFN_vkCmdExecuteCommands glad_vkCmdExecuteCommands = NULL;
PFN_vkCmdFillBuffer glad_vkCmdFillBuffer = NULL;
PFN_vkCmdInsertDebugUtilsLabelEXT glad_vkCmdInsertDebugUtilsLabelEXT = NULL;
PFN_vkCmdNextSubpass glad_vkCmdNextSubpass = NULL;
PFN_vkCmdNextSubpass2KHR glad_vkCmdNextSubpass2KHR = NULL;
PFN_vkCmdPipelineBarrier glad_vkCmdPipelineBarrier = NULL;
PFN_vkCmdProcessCommandsNVX glad_vkCmdProcessCommandsNVX = NULL;
PFN_vkCmdPushConstants glad_vkCmdPushConstants = NULL;
PFN_vkCmdPushDescriptorSetKHR glad_vkCmdPushDescriptorSetKHR = NULL;
PFN_vkCmdPushDescriptorSetWithTemplateKHR glad_vkCmdPushDescriptorSetWithTemplateKHR = NULL;
PFN_vkCmdReserveSpaceForCommandsNVX glad_vkCmdReserveSpaceForCommandsNVX = NULL;
PFN_vkCmdResetEvent glad_vkCmdResetEvent = NULL;
PFN_vkCmdResetQueryPool glad_vkCmdResetQueryPool = NULL;
PFN_vkCmdResolveImage glad_vkCmdResolveImage = NULL;
PFN_vkCmdSetBlendConstants glad_vkCmdSetBlendConstants = NULL;
PFN_vkCmdSetCheckpointNV glad_vkCmdSetCheckpointNV = NULL;
PFN_vkCmdSetCoarseSampleOrderNV glad_vkCmdSetCoarseSampleOrderNV = NULL;
PFN_vkCmdSetDepthBias glad_vkCmdSetDepthBias = NULL;
PFN_vkCmdSetDepthBounds glad_vkCmdSetDepthBounds = NULL;
PFN_vkCmdSetDeviceMask glad_vkCmdSetDeviceMask = NULL;
PFN_vkCmdSetDeviceMaskKHR glad_vkCmdSetDeviceMaskKHR = NULL;
PFN_vkCmdSetDiscardRectangleEXT glad_vkCmdSetDiscardRectangleEXT = NULL;
PFN_vkCmdSetEvent glad_vkCmdSetEvent = NULL;
PFN_vkCmdSetExclusiveScissorNV glad_vkCmdSetExclusiveScissorNV = NULL;
PFN_vkCmdSetLineWidth glad_vkCmdSetLineWidth = NULL;
PFN_vkCmdSetSampleLocationsEXT glad_vkCmdSetSampleLocationsEXT = NULL;
PFN_vkCmdSetScissor glad_vkCmdSetScissor = NULL;
PFN_vkCmdSetStencilCompareMask glad_vkCmdSetStencilCompareMask = NULL;
PFN_vkCmdSetStencilReference glad_vkCmdSetStencilReference = NULL;
PFN_vkCmdSetStencilWriteMask glad_vkCmdSetStencilWriteMask = NULL;
PFN_vkCmdSetViewport glad_vkCmdSetViewport = NULL;
PFN_vkCmdSetViewportShadingRatePaletteNV glad_vkCmdSetViewportShadingRatePaletteNV = NULL;
PFN_vkCmdSetViewportWScalingNV glad_vkCmdSetViewportWScalingNV = NULL;
PFN_vkCmdTraceRaysNVX glad_vkCmdTraceRaysNVX = NULL;
PFN_vkCmdUpdateBuffer glad_vkCmdUpdateBuffer = NULL;
PFN_vkCmdWaitEvents glad_vkCmdWaitEvents = NULL;
PFN_vkCmdWriteAccelerationStructurePropertiesNVX glad_vkCmdWriteAccelerationStructurePropertiesNVX = NULL;
PFN_vkCmdWriteBufferMarkerAMD glad_vkCmdWriteBufferMarkerAMD = NULL;
PFN_vkCmdWriteTimestamp glad_vkCmdWriteTimestamp = NULL;
PFN_vkCompileDeferredNVX glad_vkCompileDeferredNVX = NULL;
PFN_vkCreateAccelerationStructureNVX glad_vkCreateAccelerationStructureNVX = NULL;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkCreateAndroidSurfaceKHR glad_vkCreateAndroidSurfaceKHR = NULL;

#endif
PFN_vkCreateBuffer glad_vkCreateBuffer = NULL;
PFN_vkCreateBufferView glad_vkCreateBufferView = NULL;
PFN_vkCreateCommandPool glad_vkCreateCommandPool = NULL;
PFN_vkCreateComputePipelines glad_vkCreateComputePipelines = NULL;
PFN_vkCreateDebugReportCallbackEXT glad_vkCreateDebugReportCallbackEXT = NULL;
PFN_vkCreateDebugUtilsMessengerEXT glad_vkCreateDebugUtilsMessengerEXT = NULL;
PFN_vkCreateDescriptorPool glad_vkCreateDescriptorPool = NULL;
PFN_vkCreateDescriptorSetLayout glad_vkCreateDescriptorSetLayout = NULL;
PFN_vkCreateDescriptorUpdateTemplate glad_vkCreateDescriptorUpdateTemplate = NULL;
PFN_vkCreateDescriptorUpdateTemplateKHR glad_vkCreateDescriptorUpdateTemplateKHR = NULL;
PFN_vkCreateDevice glad_vkCreateDevice = NULL;
PFN_vkCreateDisplayModeKHR glad_vkCreateDisplayModeKHR = NULL;
PFN_vkCreateDisplayPlaneSurfaceKHR glad_vkCreateDisplayPlaneSurfaceKHR = NULL;
PFN_vkCreateEvent glad_vkCreateEvent = NULL;
PFN_vkCreateFence glad_vkCreateFence = NULL;
PFN_vkCreateFramebuffer glad_vkCreateFramebuffer = NULL;
PFN_vkCreateGraphicsPipelines glad_vkCreateGraphicsPipelines = NULL;
#if defined(VK_USE_PLATFORM_IOS_MVK)
PFN_vkCreateIOSSurfaceMVK glad_vkCreateIOSSurfaceMVK = NULL;

#endif
PFN_vkCreateImage glad_vkCreateImage = NULL;
PFN_vkCreateImageView glad_vkCreateImageView = NULL;
PFN_vkCreateIndirectCommandsLayoutNVX glad_vkCreateIndirectCommandsLayoutNVX = NULL;
PFN_vkCreateInstance glad_vkCreateInstance = NULL;
#if defined(VK_USE_PLATFORM_MACOS_MVK)
PFN_vkCreateMacOSSurfaceMVK glad_vkCreateMacOSSurfaceMVK = NULL;

#endif
#if defined(VK_USE_PLATFORM_MIR_KHR)
PFN_vkCreateMirSurfaceKHR glad_vkCreateMirSurfaceKHR = NULL;

#endif
PFN_vkCreateObjectTableNVX glad_vkCreateObjectTableNVX = NULL;
PFN_vkCreatePipelineCache glad_vkCreatePipelineCache = NULL;
PFN_vkCreatePipelineLayout glad_vkCreatePipelineLayout = NULL;
PFN_vkCreateQueryPool glad_vkCreateQueryPool = NULL;
PFN_vkCreateRaytracingPipelinesNVX glad_vkCreateRaytracingPipelinesNVX = NULL;
PFN_vkCreateRenderPass glad_vkCreateRenderPass = NULL;
PFN_vkCreateRenderPass2KHR glad_vkCreateRenderPass2KHR = NULL;
PFN_vkCreateSampler glad_vkCreateSampler = NULL;
PFN_vkCreateSamplerYcbcrConversion glad_vkCreateSamplerYcbcrConversion = NULL;
PFN_vkCreateSamplerYcbcrConversionKHR glad_vkCreateSamplerYcbcrConversionKHR = NULL;
PFN_vkCreateSemaphore glad_vkCreateSemaphore = NULL;
PFN_vkCreateShaderModule glad_vkCreateShaderModule = NULL;
PFN_vkCreateSharedSwapchainsKHR glad_vkCreateSharedSwapchainsKHR = NULL;
PFN_vkCreateSwapchainKHR glad_vkCreateSwapchainKHR = NULL;
PFN_vkCreateValidationCacheEXT glad_vkCreateValidationCacheEXT = NULL;
#if defined(VK_USE_PLATFORM_VI_NN)
PFN_vkCreateViSurfaceNN glad_vkCreateViSurfaceNN = NULL;

#endif
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
PFN_vkCreateWaylandSurfaceKHR glad_vkCreateWaylandSurfaceKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkCreateWin32SurfaceKHR glad_vkCreateWin32SurfaceKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
PFN_vkCreateXcbSurfaceKHR glad_vkCreateXcbSurfaceKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
PFN_vkCreateXlibSurfaceKHR glad_vkCreateXlibSurfaceKHR = NULL;

#endif
PFN_vkDebugMarkerSetObjectNameEXT glad_vkDebugMarkerSetObjectNameEXT = NULL;
PFN_vkDebugMarkerSetObjectTagEXT glad_vkDebugMarkerSetObjectTagEXT = NULL;
PFN_vkDebugReportMessageEXT glad_vkDebugReportMessageEXT = NULL;
PFN_vkDestroyAccelerationStructureNVX glad_vkDestroyAccelerationStructureNVX = NULL;
PFN_vkDestroyBuffer glad_vkDestroyBuffer = NULL;
PFN_vkDestroyBufferView glad_vkDestroyBufferView = NULL;
PFN_vkDestroyCommandPool glad_vkDestroyCommandPool = NULL;
PFN_vkDestroyDebugReportCallbackEXT glad_vkDestroyDebugReportCallbackEXT = NULL;
PFN_vkDestroyDebugUtilsMessengerEXT glad_vkDestroyDebugUtilsMessengerEXT = NULL;
PFN_vkDestroyDescriptorPool glad_vkDestroyDescriptorPool = NULL;
PFN_vkDestroyDescriptorSetLayout glad_vkDestroyDescriptorSetLayout = NULL;
PFN_vkDestroyDescriptorUpdateTemplate glad_vkDestroyDescriptorUpdateTemplate = NULL;
PFN_vkDestroyDescriptorUpdateTemplateKHR glad_vkDestroyDescriptorUpdateTemplateKHR = NULL;
PFN_vkDestroyDevice glad_vkDestroyDevice = NULL;
PFN_vkDestroyEvent glad_vkDestroyEvent = NULL;
PFN_vkDestroyFence glad_vkDestroyFence = NULL;
PFN_vkDestroyFramebuffer glad_vkDestroyFramebuffer = NULL;
PFN_vkDestroyImage glad_vkDestroyImage = NULL;
PFN_vkDestroyImageView glad_vkDestroyImageView = NULL;
PFN_vkDestroyIndirectCommandsLayoutNVX glad_vkDestroyIndirectCommandsLayoutNVX = NULL;
PFN_vkDestroyInstance glad_vkDestroyInstance = NULL;
PFN_vkDestroyObjectTableNVX glad_vkDestroyObjectTableNVX = NULL;
PFN_vkDestroyPipeline glad_vkDestroyPipeline = NULL;
PFN_vkDestroyPipelineCache glad_vkDestroyPipelineCache = NULL;
PFN_vkDestroyPipelineLayout glad_vkDestroyPipelineLayout = NULL;
PFN_vkDestroyQueryPool glad_vkDestroyQueryPool = NULL;
PFN_vkDestroyRenderPass glad_vkDestroyRenderPass = NULL;
PFN_vkDestroySampler glad_vkDestroySampler = NULL;
PFN_vkDestroySamplerYcbcrConversion glad_vkDestroySamplerYcbcrConversion = NULL;
PFN_vkDestroySamplerYcbcrConversionKHR glad_vkDestroySamplerYcbcrConversionKHR = NULL;
PFN_vkDestroySemaphore glad_vkDestroySemaphore = NULL;
PFN_vkDestroyShaderModule glad_vkDestroyShaderModule = NULL;
PFN_vkDestroySurfaceKHR glad_vkDestroySurfaceKHR = NULL;
PFN_vkDestroySwapchainKHR glad_vkDestroySwapchainKHR = NULL;
PFN_vkDestroyValidationCacheEXT glad_vkDestroyValidationCacheEXT = NULL;
PFN_vkDeviceWaitIdle glad_vkDeviceWaitIdle = NULL;
PFN_vkDisplayPowerControlEXT glad_vkDisplayPowerControlEXT = NULL;
PFN_vkEndCommandBuffer glad_vkEndCommandBuffer = NULL;
PFN_vkEnumerateDeviceExtensionProperties glad_vkEnumerateDeviceExtensionProperties = NULL;
PFN_vkEnumerateDeviceLayerProperties glad_vkEnumerateDeviceLayerProperties = NULL;
PFN_vkEnumerateInstanceExtensionProperties glad_vkEnumerateInstanceExtensionProperties = NULL;
PFN_vkEnumerateInstanceLayerProperties glad_vkEnumerateInstanceLayerProperties = NULL;
PFN_vkEnumerateInstanceVersion glad_vkEnumerateInstanceVersion = NULL;
PFN_vkEnumeratePhysicalDeviceGroups glad_vkEnumeratePhysicalDeviceGroups = NULL;
PFN_vkEnumeratePhysicalDeviceGroupsKHR glad_vkEnumeratePhysicalDeviceGroupsKHR = NULL;
PFN_vkEnumeratePhysicalDevices glad_vkEnumeratePhysicalDevices = NULL;
PFN_vkFlushMappedMemoryRanges glad_vkFlushMappedMemoryRanges = NULL;
PFN_vkFreeCommandBuffers glad_vkFreeCommandBuffers = NULL;
PFN_vkFreeDescriptorSets glad_vkFreeDescriptorSets = NULL;
PFN_vkFreeMemory glad_vkFreeMemory = NULL;
PFN_vkGetAccelerationStructureHandleNVX glad_vkGetAccelerationStructureHandleNVX = NULL;
PFN_vkGetAccelerationStructureMemoryRequirementsNVX glad_vkGetAccelerationStructureMemoryRequirementsNVX = NULL;
PFN_vkGetAccelerationStructureScratchMemoryRequirementsNVX glad_vkGetAccelerationStructureScratchMemoryRequirementsNVX = NULL;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkGetAndroidHardwareBufferPropertiesANDROID glad_vkGetAndroidHardwareBufferPropertiesANDROID = NULL;

#endif
PFN_vkGetBufferMemoryRequirements glad_vkGetBufferMemoryRequirements = NULL;
PFN_vkGetBufferMemoryRequirements2 glad_vkGetBufferMemoryRequirements2 = NULL;
PFN_vkGetBufferMemoryRequirements2KHR glad_vkGetBufferMemoryRequirements2KHR = NULL;
PFN_vkGetDescriptorSetLayoutSupport glad_vkGetDescriptorSetLayoutSupport = NULL;
PFN_vkGetDescriptorSetLayoutSupportKHR glad_vkGetDescriptorSetLayoutSupportKHR = NULL;
PFN_vkGetDeviceGroupPeerMemoryFeatures glad_vkGetDeviceGroupPeerMemoryFeatures = NULL;
PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = NULL;
PFN_vkGetDeviceGroupPresentCapabilitiesKHR glad_vkGetDeviceGroupPresentCapabilitiesKHR = NULL;
PFN_vkGetDeviceGroupSurfacePresentModesKHR glad_vkGetDeviceGroupSurfacePresentModesKHR = NULL;
PFN_vkGetDeviceMemoryCommitment glad_vkGetDeviceMemoryCommitment = NULL;
PFN_vkGetDeviceProcAddr glad_vkGetDeviceProcAddr = NULL;
PFN_vkGetDeviceQueue glad_vkGetDeviceQueue = NULL;
PFN_vkGetDeviceQueue2 glad_vkGetDeviceQueue2 = NULL;
PFN_vkGetDisplayModeProperties2KHR glad_vkGetDisplayModeProperties2KHR = NULL;
PFN_vkGetDisplayModePropertiesKHR glad_vkGetDisplayModePropertiesKHR = NULL;
PFN_vkGetDisplayPlaneCapabilities2KHR glad_vkGetDisplayPlaneCapabilities2KHR = NULL;
PFN_vkGetDisplayPlaneCapabilitiesKHR glad_vkGetDisplayPlaneCapabilitiesKHR = NULL;
PFN_vkGetDisplayPlaneSupportedDisplaysKHR glad_vkGetDisplayPlaneSupportedDisplaysKHR = NULL;
PFN_vkGetEventStatus glad_vkGetEventStatus = NULL;
PFN_vkGetFenceFdKHR glad_vkGetFenceFdKHR = NULL;
PFN_vkGetFenceStatus glad_vkGetFenceStatus = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetFenceWin32HandleKHR glad_vkGetFenceWin32HandleKHR = NULL;

#endif
PFN_vkGetImageMemoryRequirements glad_vkGetImageMemoryRequirements = NULL;
PFN_vkGetImageMemoryRequirements2 glad_vkGetImageMemoryRequirements2 = NULL;
PFN_vkGetImageMemoryRequirements2KHR glad_vkGetImageMemoryRequirements2KHR = NULL;
PFN_vkGetImageSparseMemoryRequirements glad_vkGetImageSparseMemoryRequirements = NULL;
PFN_vkGetImageSparseMemoryRequirements2 glad_vkGetImageSparseMemoryRequirements2 = NULL;
PFN_vkGetImageSparseMemoryRequirements2KHR glad_vkGetImageSparseMemoryRequirements2KHR = NULL;
PFN_vkGetImageSubresourceLayout glad_vkGetImageSubresourceLayout = NULL;
PFN_vkGetInstanceProcAddr glad_vkGetInstanceProcAddr = NULL;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkGetMemoryAndroidHardwareBufferANDROID glad_vkGetMemoryAndroidHardwareBufferANDROID = NULL;

#endif
PFN_vkGetMemoryFdKHR glad_vkGetMemoryFdKHR = NULL;
PFN_vkGetMemoryFdPropertiesKHR glad_vkGetMemoryFdPropertiesKHR = NULL;
PFN_vkGetMemoryHostPointerPropertiesEXT glad_vkGetMemoryHostPointerPropertiesEXT = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandleKHR glad_vkGetMemoryWin32HandleKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandleNV glad_vkGetMemoryWin32HandleNV = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandlePropertiesKHR glad_vkGetMemoryWin32HandlePropertiesKHR = NULL;

#endif
PFN_vkGetPastPresentationTimingGOOGLE glad_vkGetPastPresentationTimingGOOGLE = NULL;
PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceDisplayProperties2KHR glad_vkGetPhysicalDeviceDisplayProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceDisplayPropertiesKHR glad_vkGetPhysicalDeviceDisplayPropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalBufferProperties glad_vkGetPhysicalDeviceExternalBufferProperties = NULL;
PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalFenceProperties glad_vkGetPhysicalDeviceExternalFenceProperties = NULL;
PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV glad_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = NULL;
PFN_vkGetPhysicalDeviceExternalSemaphoreProperties glad_vkGetPhysicalDeviceExternalSemaphoreProperties = NULL;
PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceFeatures glad_vkGetPhysicalDeviceFeatures = NULL;
PFN_vkGetPhysicalDeviceFeatures2 glad_vkGetPhysicalDeviceFeatures2 = NULL;
PFN_vkGetPhysicalDeviceFeatures2KHR glad_vkGetPhysicalDeviceFeatures2KHR = NULL;
PFN_vkGetPhysicalDeviceFormatProperties glad_vkGetPhysicalDeviceFormatProperties = NULL;
PFN_vkGetPhysicalDeviceFormatProperties2 glad_vkGetPhysicalDeviceFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceFormatProperties2KHR glad_vkGetPhysicalDeviceFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX glad_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties glad_vkGetPhysicalDeviceImageFormatProperties = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties2 glad_vkGetPhysicalDeviceImageFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties2KHR glad_vkGetPhysicalDeviceImageFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties glad_vkGetPhysicalDeviceMemoryProperties = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties2 glad_vkGetPhysicalDeviceMemoryProperties2 = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties2KHR glad_vkGetPhysicalDeviceMemoryProperties2KHR = NULL;
#if defined(VK_USE_PLATFORM_MIR_KHR)
PFN_vkGetPhysicalDeviceMirPresentationSupportKHR glad_vkGetPhysicalDeviceMirPresentationSupportKHR = NULL;

#endif
PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT glad_vkGetPhysicalDeviceMultisamplePropertiesEXT = NULL;
PFN_vkGetPhysicalDevicePresentRectanglesKHR glad_vkGetPhysicalDevicePresentRectanglesKHR = NULL;
PFN_vkGetPhysicalDeviceProperties glad_vkGetPhysicalDeviceProperties = NULL;
PFN_vkGetPhysicalDeviceProperties2 glad_vkGetPhysicalDeviceProperties2 = NULL;
PFN_vkGetPhysicalDeviceProperties2KHR glad_vkGetPhysicalDeviceProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties glad_vkGetPhysicalDeviceQueueFamilyProperties = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2 glad_vkGetPhysicalDeviceQueueFamilyProperties2 = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties glad_vkGetPhysicalDeviceSparseImageFormatProperties = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceFormats2KHR glad_vkGetPhysicalDeviceSurfaceFormats2KHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR glad_vkGetPhysicalDeviceSurfaceFormatsKHR = NULL;
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR glad_vkGetPhysicalDeviceSurfacePresentModesKHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceSupportKHR glad_vkGetPhysicalDeviceSurfaceSupportKHR = NULL;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR glad_vkGetPhysicalDeviceWaylandPresentationSupportKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR glad_vkGetPhysicalDeviceWin32PresentationSupportKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR glad_vkGetPhysicalDeviceXcbPresentationSupportKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR glad_vkGetPhysicalDeviceXlibPresentationSupportKHR = NULL;

#endif
PFN_vkGetPipelineCacheData glad_vkGetPipelineCacheData = NULL;
PFN_vkGetQueryPoolResults glad_vkGetQueryPoolResults = NULL;
PFN_vkGetQueueCheckpointDataNV glad_vkGetQueueCheckpointDataNV = NULL;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
PFN_vkGetRandROutputDisplayEXT glad_vkGetRandROutputDisplayEXT = NULL;

#endif
PFN_vkGetRaytracingShaderHandlesNVX glad_vkGetRaytracingShaderHandlesNVX = NULL;
PFN_vkGetRefreshCycleDurationGOOGLE glad_vkGetRefreshCycleDurationGOOGLE = NULL;
PFN_vkGetRenderAreaGranularity glad_vkGetRenderAreaGranularity = NULL;
PFN_vkGetSemaphoreFdKHR glad_vkGetSemaphoreFdKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetSemaphoreWin32HandleKHR glad_vkGetSemaphoreWin32HandleKHR = NULL;

#endif
PFN_vkGetShaderInfoAMD glad_vkGetShaderInfoAMD = NULL;
PFN_vkGetSwapchainCounterEXT glad_vkGetSwapchainCounterEXT = NULL;
PFN_vkGetSwapchainImagesKHR glad_vkGetSwapchainImagesKHR = NULL;
PFN_vkGetSwapchainStatusKHR glad_vkGetSwapchainStatusKHR = NULL;
PFN_vkGetValidationCacheDataEXT glad_vkGetValidationCacheDataEXT = NULL;
PFN_vkImportFenceFdKHR glad_vkImportFenceFdKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkImportFenceWin32HandleKHR glad_vkImportFenceWin32HandleKHR = NULL;

#endif
PFN_vkImportSemaphoreFdKHR glad_vkImportSemaphoreFdKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkImportSemaphoreWin32HandleKHR glad_vkImportSemaphoreWin32HandleKHR = NULL;

#endif
PFN_vkInvalidateMappedMemoryRanges glad_vkInvalidateMappedMemoryRanges = NULL;
PFN_vkMapMemory glad_vkMapMemory = NULL;
PFN_vkMergePipelineCaches glad_vkMergePipelineCaches = NULL;
PFN_vkMergeValidationCachesEXT glad_vkMergeValidationCachesEXT = NULL;
PFN_vkQueueBeginDebugUtilsLabelEXT glad_vkQueueBeginDebugUtilsLabelEXT = NULL;
PFN_vkQueueBindSparse glad_vkQueueBindSparse = NULL;
PFN_vkQueueEndDebugUtilsLabelEXT glad_vkQueueEndDebugUtilsLabelEXT = NULL;
PFN_vkQueueInsertDebugUtilsLabelEXT glad_vkQueueInsertDebugUtilsLabelEXT = NULL;
PFN_vkQueuePresentKHR glad_vkQueuePresentKHR = NULL;
PFN_vkQueueSubmit glad_vkQueueSubmit = NULL;
PFN_vkQueueWaitIdle glad_vkQueueWaitIdle = NULL;
PFN_vkRegisterDeviceEventEXT glad_vkRegisterDeviceEventEXT = NULL;
PFN_vkRegisterDisplayEventEXT glad_vkRegisterDisplayEventEXT = NULL;
PFN_vkRegisterObjectsNVX glad_vkRegisterObjectsNVX = NULL;
PFN_vkReleaseDisplayEXT glad_vkReleaseDisplayEXT = NULL;
PFN_vkResetCommandBuffer glad_vkResetCommandBuffer = NULL;
PFN_vkResetCommandPool glad_vkResetCommandPool = NULL;
PFN_vkResetDescriptorPool glad_vkResetDescriptorPool = NULL;
PFN_vkResetEvent glad_vkResetEvent = NULL;
PFN_vkResetFences glad_vkResetFences = NULL;
PFN_vkSetDebugUtilsObjectNameEXT glad_vkSetDebugUtilsObjectNameEXT = NULL;
PFN_vkSetDebugUtilsObjectTagEXT glad_vkSetDebugUtilsObjectTagEXT = NULL;
PFN_vkSetEvent glad_vkSetEvent = NULL;
PFN_vkSetHdrMetadataEXT glad_vkSetHdrMetadataEXT = NULL;
PFN_vkSubmitDebugUtilsMessageEXT glad_vkSubmitDebugUtilsMessageEXT = NULL;
PFN_vkTrimCommandPool glad_vkTrimCommandPool = NULL;
PFN_vkTrimCommandPoolKHR glad_vkTrimCommandPoolKHR = NULL;
PFN_vkUnmapMemory glad_vkUnmapMemory = NULL;
PFN_vkUnregisterObjectsNVX glad_vkUnregisterObjectsNVX = NULL;
PFN_vkUpdateDescriptorSetWithTemplate glad_vkUpdateDescriptorSetWithTemplate = NULL;
PFN_vkUpdateDescriptorSetWithTemplateKHR glad_vkUpdateDescriptorSetWithTemplateKHR = NULL;
PFN_vkUpdateDescriptorSets glad_vkUpdateDescriptorSets = NULL;
PFN_vkWaitForFences glad_vkWaitForFences = NULL;


static void glad_vk_load_VK_VERSION_1_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_0) return;
    vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers) load("vkAllocateCommandBuffers", userptr);
    vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets) load("vkAllocateDescriptorSets", userptr);
    vkAllocateMemory = (PFN_vkAllocateMemory) load("vkAllocateMemory", userptr);
    vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer) load("vkBeginCommandBuffer", userptr);
    vkBindBufferMemory = (PFN_vkBindBufferMemory) load("vkBindBufferMemory", userptr);
    vkBindImageMemory = (PFN_vkBindImageMemory) load("vkBindImageMemory", userptr);
    vkCmdBeginQuery = (PFN_vkCmdBeginQuery) load("vkCmdBeginQuery", userptr);
    vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass) load("vkCmdBeginRenderPass", userptr);
    vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets) load("vkCmdBindDescriptorSets", userptr);
    vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer) load("vkCmdBindIndexBuffer", userptr);
    vkCmdBindPipeline = (PFN_vkCmdBindPipeline) load("vkCmdBindPipeline", userptr);
    vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers) load("vkCmdBindVertexBuffers", userptr);
    vkCmdBlitImage = (PFN_vkCmdBlitImage) load("vkCmdBlitImage", userptr);
    vkCmdClearAttachments = (PFN_vkCmdClearAttachments) load("vkCmdClearAttachments", userptr);
    vkCmdClearColorImage = (PFN_vkCmdClearColorImage) load("vkCmdClearColorImage", userptr);
    vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage) load("vkCmdClearDepthStencilImage", userptr);
    vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer) load("vkCmdCopyBuffer", userptr);
    vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage) load("vkCmdCopyBufferToImage", userptr);
    vkCmdCopyImage = (PFN_vkCmdCopyImage) load("vkCmdCopyImage", userptr);
    vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer) load("vkCmdCopyImageToBuffer", userptr);
    vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults) load("vkCmdCopyQueryPoolResults", userptr);
    vkCmdDispatch = (PFN_vkCmdDispatch) load("vkCmdDispatch", userptr);
    vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect) load("vkCmdDispatchIndirect", userptr);
    vkCmdDraw = (PFN_vkCmdDraw) load("vkCmdDraw", userptr);
    vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed) load("vkCmdDrawIndexed", userptr);
    vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect) load("vkCmdDrawIndexedIndirect", userptr);
    vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect) load("vkCmdDrawIndirect", userptr);
    vkCmdEndQuery = (PFN_vkCmdEndQuery) load("vkCmdEndQuery", userptr);
    vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass) load("vkCmdEndRenderPass", userptr);
    vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands) load("vkCmdExecuteCommands", userptr);
    vkCmdFillBuffer = (PFN_vkCmdFillBuffer) load("vkCmdFillBuffer", userptr);
    vkCmdNextSubpass = (PFN_vkCmdNextSubpass) load("vkCmdNextSubpass", userptr);
    vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier) load("vkCmdPipelineBarrier", userptr);
    vkCmdPushConstants = (PFN_vkCmdPushConstants) load("vkCmdPushConstants", userptr);
    vkCmdResetEvent = (PFN_vkCmdResetEvent) load("vkCmdResetEvent", userptr);
    vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool) load("vkCmdResetQueryPool", userptr);
    vkCmdResolveImage = (PFN_vkCmdResolveImage) load("vkCmdResolveImage", userptr);
    vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants) load("vkCmdSetBlendConstants", userptr);
    vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias) load("vkCmdSetDepthBias", userptr);
    vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds) load("vkCmdSetDepthBounds", userptr);
    vkCmdSetEvent = (PFN_vkCmdSetEvent) load("vkCmdSetEvent", userptr);
    vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth) load("vkCmdSetLineWidth", userptr);
    vkCmdSetScissor = (PFN_vkCmdSetScissor) load("vkCmdSetScissor", userptr);
    vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask) load("vkCmdSetStencilCompareMask", userptr);
    vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference) load("vkCmdSetStencilReference", userptr);
    vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask) load("vkCmdSetStencilWriteMask", userptr);
    vkCmdSetViewport = (PFN_vkCmdSetViewport) load("vkCmdSetViewport", userptr);
    vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer) load("vkCmdUpdateBuffer", userptr);
    vkCmdWaitEvents = (PFN_vkCmdWaitEvents) load("vkCmdWaitEvents", userptr);
    vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp) load("vkCmdWriteTimestamp", userptr);
    vkCreateBuffer = (PFN_vkCreateBuffer) load("vkCreateBuffer", userptr);
    vkCreateBufferView = (PFN_vkCreateBufferView) load("vkCreateBufferView", userptr);
    vkCreateCommandPool = (PFN_vkCreateCommandPool) load("vkCreateCommandPool", userptr);
    vkCreateComputePipelines = (PFN_vkCreateComputePipelines) load("vkCreateComputePipelines", userptr);
    vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool) load("vkCreateDescriptorPool", userptr);
    vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout) load("vkCreateDescriptorSetLayout", userptr);
    vkCreateDevice = (PFN_vkCreateDevice) load("vkCreateDevice", userptr);
    vkCreateEvent = (PFN_vkCreateEvent) load("vkCreateEvent", userptr);
    vkCreateFence = (PFN_vkCreateFence) load("vkCreateFence", userptr);
    vkCreateFramebuffer = (PFN_vkCreateFramebuffer) load("vkCreateFramebuffer", userptr);
    vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines) load("vkCreateGraphicsPipelines", userptr);
    vkCreateImage = (PFN_vkCreateImage) load("vkCreateImage", userptr);
    vkCreateImageView = (PFN_vkCreateImageView) load("vkCreateImageView", userptr);
    vkCreateInstance = (PFN_vkCreateInstance) load("vkCreateInstance", userptr);
    vkCreatePipelineCache = (PFN_vkCreatePipelineCache) load("vkCreatePipelineCache", userptr);
    vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout) load("vkCreatePipelineLayout", userptr);
    vkCreateQueryPool = (PFN_vkCreateQueryPool) load("vkCreateQueryPool", userptr);
    vkCreateRenderPass = (PFN_vkCreateRenderPass) load("vkCreateRenderPass", userptr);
    vkCreateSampler = (PFN_vkCreateSampler) load("vkCreateSampler", userptr);
    vkCreateSemaphore = (PFN_vkCreateSemaphore) load("vkCreateSemaphore", userptr);
    vkCreateShaderModule = (PFN_vkCreateShaderModule) load("vkCreateShaderModule", userptr);
    vkDestroyBuffer = (PFN_vkDestroyBuffer) load("vkDestroyBuffer", userptr);
    vkDestroyBufferView = (PFN_vkDestroyBufferView) load("vkDestroyBufferView", userptr);
    vkDestroyCommandPool = (PFN_vkDestroyCommandPool) load("vkDestroyCommandPool", userptr);
    vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool) load("vkDestroyDescriptorPool", userptr);
    vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout) load("vkDestroyDescriptorSetLayout", userptr);
    vkDestroyDevice = (PFN_vkDestroyDevice) load("vkDestroyDevice", userptr);
    vkDestroyEvent = (PFN_vkDestroyEvent) load("vkDestroyEvent", userptr);
    vkDestroyFence = (PFN_vkDestroyFence) load("vkDestroyFence", userptr);
    vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer) load("vkDestroyFramebuffer", userptr);
    vkDestroyImage = (PFN_vkDestroyImage) load("vkDestroyImage", userptr);
    vkDestroyImageView = (PFN_vkDestroyImageView) load("vkDestroyImageView", userptr);
    vkDestroyInstance = (PFN_vkDestroyInstance) load("vkDestroyInstance", userptr);
    vkDestroyPipeline = (PFN_vkDestroyPipeline) load("vkDestroyPipeline", userptr);
    vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache) load("vkDestroyPipelineCache", userptr);
    vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout) load("vkDestroyPipelineLayout", userptr);
    vkDestroyQueryPool = (PFN_vkDestroyQueryPool) load("vkDestroyQueryPool", userptr);
    vkDestroyRenderPass = (PFN_vkDestroyRenderPass) load("vkDestroyRenderPass", userptr);
    vkDestroySampler = (PFN_vkDestroySampler) load("vkDestroySampler", userptr);
    vkDestroySemaphore = (PFN_vkDestroySemaphore) load("vkDestroySemaphore", userptr);
    vkDestroyShaderModule = (PFN_vkDestroyShaderModule) load("vkDestroyShaderModule", userptr);
    vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle) load("vkDeviceWaitIdle", userptr);
    vkEndCommandBuffer = (PFN_vkEndCommandBuffer) load("vkEndCommandBuffer", userptr);
    vkEnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties) load("vkEnumerateDeviceExtensionProperties", userptr);
    vkEnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties) load("vkEnumerateDeviceLayerProperties", userptr);
    vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties) load("vkEnumerateInstanceExtensionProperties", userptr);
    vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties) load("vkEnumerateInstanceLayerProperties", userptr);
    vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices) load("vkEnumeratePhysicalDevices", userptr);
    vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges) load("vkFlushMappedMemoryRanges", userptr);
    vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers) load("vkFreeCommandBuffers", userptr);
    vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets) load("vkFreeDescriptorSets", userptr);
    vkFreeMemory = (PFN_vkFreeMemory) load("vkFreeMemory", userptr);
    vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements) load("vkGetBufferMemoryRequirements", userptr);
    vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment) load("vkGetDeviceMemoryCommitment", userptr);
    vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr) load("vkGetDeviceProcAddr", userptr);
    vkGetDeviceQueue = (PFN_vkGetDeviceQueue) load("vkGetDeviceQueue", userptr);
    vkGetEventStatus = (PFN_vkGetEventStatus) load("vkGetEventStatus", userptr);
    vkGetFenceStatus = (PFN_vkGetFenceStatus) load("vkGetFenceStatus", userptr);
    vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements) load("vkGetImageMemoryRequirements", userptr);
    vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements) load("vkGetImageSparseMemoryRequirements", userptr);
    vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout) load("vkGetImageSubresourceLayout", userptr);
    vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr) load("vkGetInstanceProcAddr", userptr);
    vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures) load("vkGetPhysicalDeviceFeatures", userptr);
    vkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties) load("vkGetPhysicalDeviceFormatProperties", userptr);
    vkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties) load("vkGetPhysicalDeviceImageFormatProperties", userptr);
    vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties) load("vkGetPhysicalDeviceMemoryProperties", userptr);
    vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties) load("vkGetPhysicalDeviceProperties", userptr);
    vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties) load("vkGetPhysicalDeviceQueueFamilyProperties", userptr);
    vkGetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties) load("vkGetPhysicalDeviceSparseImageFormatProperties", userptr);
    vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData) load("vkGetPipelineCacheData", userptr);
    vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults) load("vkGetQueryPoolResults", userptr);
    vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity) load("vkGetRenderAreaGranularity", userptr);
    vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges) load("vkInvalidateMappedMemoryRanges", userptr);
    vkMapMemory = (PFN_vkMapMemory) load("vkMapMemory", userptr);
    vkMergePipelineCaches = (PFN_vkMergePipelineCaches) load("vkMergePipelineCaches", userptr);
    vkQueueBindSparse = (PFN_vkQueueBindSparse) load("vkQueueBindSparse", userptr);
    vkQueueSubmit = (PFN_vkQueueSubmit) load("vkQueueSubmit", userptr);
    vkQueueWaitIdle = (PFN_vkQueueWaitIdle) load("vkQueueWaitIdle", userptr);
    vkResetCommandBuffer = (PFN_vkResetCommandBuffer) load("vkResetCommandBuffer", userptr);
    vkResetCommandPool = (PFN_vkResetCommandPool) load("vkResetCommandPool", userptr);
    vkResetDescriptorPool = (PFN_vkResetDescriptorPool) load("vkResetDescriptorPool", userptr);
    vkResetEvent = (PFN_vkResetEvent) load("vkResetEvent", userptr);
    vkResetFences = (PFN_vkResetFences) load("vkResetFences", userptr);
    vkSetEvent = (PFN_vkSetEvent) load("vkSetEvent", userptr);
    vkUnmapMemory = (PFN_vkUnmapMemory) load("vkUnmapMemory", userptr);
    vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets) load("vkUpdateDescriptorSets", userptr);
    vkWaitForFences = (PFN_vkWaitForFences) load("vkWaitForFences", userptr);
}
static void glad_vk_load_VK_VERSION_1_1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_1) return;
    vkBindBufferMemory2 = (PFN_vkBindBufferMemory2) load("vkBindBufferMemory2", userptr);
    vkBindImageMemory2 = (PFN_vkBindImageMemory2) load("vkBindImageMemory2", userptr);
    vkCmdDispatchBase = (PFN_vkCmdDispatchBase) load("vkCmdDispatchBase", userptr);
    vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask) load("vkCmdSetDeviceMask", userptr);
    vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate) load("vkCreateDescriptorUpdateTemplate", userptr);
    vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion) load("vkCreateSamplerYcbcrConversion", userptr);
    vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate) load("vkDestroyDescriptorUpdateTemplate", userptr);
    vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion) load("vkDestroySamplerYcbcrConversion", userptr);
    vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion) load("vkEnumerateInstanceVersion", userptr);
    vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups) load("vkEnumeratePhysicalDeviceGroups", userptr);
    vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2) load("vkGetBufferMemoryRequirements2", userptr);
    vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport) load("vkGetDescriptorSetLayoutSupport", userptr);
    vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures) load("vkGetDeviceGroupPeerMemoryFeatures", userptr);
    vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2) load("vkGetDeviceQueue2", userptr);
    vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2) load("vkGetImageMemoryRequirements2", userptr);
    vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2) load("vkGetImageSparseMemoryRequirements2", userptr);
    vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties) load("vkGetPhysicalDeviceExternalBufferProperties", userptr);
    vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties) load("vkGetPhysicalDeviceExternalFenceProperties", userptr);
    vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) load("vkGetPhysicalDeviceExternalSemaphoreProperties", userptr);
    vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2) load("vkGetPhysicalDeviceFeatures2", userptr);
    vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2) load("vkGetPhysicalDeviceFormatProperties2", userptr);
    vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) load("vkGetPhysicalDeviceImageFormatProperties2", userptr);
    vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2) load("vkGetPhysicalDeviceMemoryProperties2", userptr);
    vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2) load("vkGetPhysicalDeviceProperties2", userptr);
    vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) load("vkGetPhysicalDeviceQueueFamilyProperties2", userptr);
    vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) load("vkGetPhysicalDeviceSparseImageFormatProperties2", userptr);
    vkTrimCommandPool = (PFN_vkTrimCommandPool) load("vkTrimCommandPool", userptr);
    vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate) load("vkUpdateDescriptorSetWithTemplate", userptr);
}
static void glad_vk_load_VK_AMD_buffer_marker( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_buffer_marker) return;
    vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD) load("vkCmdWriteBufferMarkerAMD", userptr);
}
static void glad_vk_load_VK_AMD_draw_indirect_count( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_draw_indirect_count) return;
    vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD) load("vkCmdDrawIndexedIndirectCountAMD", userptr);
    vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD) load("vkCmdDrawIndirectCountAMD", userptr);
}
static void glad_vk_load_VK_AMD_shader_info( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_shader_info) return;
    vkGetShaderInfoAMD = (PFN_vkGetShaderInfoAMD) load("vkGetShaderInfoAMD", userptr);
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
static void glad_vk_load_VK_ANDROID_external_memory_android_hardware_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_ANDROID_external_memory_android_hardware_buffer) return;
    vkGetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID) load("vkGetAndroidHardwareBufferPropertiesANDROID", userptr);
    vkGetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID) load("vkGetMemoryAndroidHardwareBufferANDROID", userptr);
}

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
static void glad_vk_load_VK_EXT_acquire_xlib_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_acquire_xlib_display) return;
    vkAcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT) load("vkAcquireXlibDisplayEXT", userptr);
    vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT) load("vkGetRandROutputDisplayEXT", userptr);
}

#endif
static void glad_vk_load_VK_EXT_conditional_rendering( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_conditional_rendering) return;
    vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT) load("vkCmdBeginConditionalRenderingEXT", userptr);
    vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT) load("vkCmdEndConditionalRenderingEXT", userptr);
}
static void glad_vk_load_VK_EXT_debug_marker( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_debug_marker) return;
    vkCmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT) load("vkCmdDebugMarkerBeginEXT", userptr);
    vkCmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT) load("vkCmdDebugMarkerEndEXT", userptr);
    vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT) load("vkCmdDebugMarkerInsertEXT", userptr);
    vkDebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT) load("vkDebugMarkerSetObjectNameEXT", userptr);
    vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT) load("vkDebugMarkerSetObjectTagEXT", userptr);
}
static void glad_vk_load_VK_EXT_debug_report( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_debug_report) return;
    vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT) load("vkCreateDebugReportCallbackEXT", userptr);
    vkDebugReportMessageEXT = (PFN_vkDebugReportMessageEXT) load("vkDebugReportMessageEXT", userptr);
    vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT) load("vkDestroyDebugReportCallbackEXT", userptr);
}
static void glad_vk_load_VK_EXT_debug_utils( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_debug_utils) return;
    vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT) load("vkCmdBeginDebugUtilsLabelEXT", userptr);
    vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT) load("vkCmdEndDebugUtilsLabelEXT", userptr);
    vkCmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT) load("vkCmdInsertDebugUtilsLabelEXT", userptr);
    vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT) load("vkCreateDebugUtilsMessengerEXT", userptr);
    vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT) load("vkDestroyDebugUtilsMessengerEXT", userptr);
    vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT) load("vkQueueBeginDebugUtilsLabelEXT", userptr);
    vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT) load("vkQueueEndDebugUtilsLabelEXT", userptr);
    vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT) load("vkQueueInsertDebugUtilsLabelEXT", userptr);
    vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT) load("vkSetDebugUtilsObjectNameEXT", userptr);
    vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT) load("vkSetDebugUtilsObjectTagEXT", userptr);
    vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT) load("vkSubmitDebugUtilsMessageEXT", userptr);
}
static void glad_vk_load_VK_EXT_direct_mode_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_direct_mode_display) return;
    vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT) load("vkReleaseDisplayEXT", userptr);
}
static void glad_vk_load_VK_EXT_discard_rectangles( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_discard_rectangles) return;
    vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT) load("vkCmdSetDiscardRectangleEXT", userptr);
}
static void glad_vk_load_VK_EXT_display_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_display_control) return;
    vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT) load("vkDisplayPowerControlEXT", userptr);
    vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT) load("vkGetSwapchainCounterEXT", userptr);
    vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT) load("vkRegisterDeviceEventEXT", userptr);
    vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT) load("vkRegisterDisplayEventEXT", userptr);
}
static void glad_vk_load_VK_EXT_display_surface_counter( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_display_surface_counter) return;
    vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT) load("vkGetPhysicalDeviceSurfaceCapabilities2EXT", userptr);
}
static void glad_vk_load_VK_EXT_external_memory_host( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_external_memory_host) return;
    vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT) load("vkGetMemoryHostPointerPropertiesEXT", userptr);
}
static void glad_vk_load_VK_EXT_hdr_metadata( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_hdr_metadata) return;
    vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT) load("vkSetHdrMetadataEXT", userptr);
}
static void glad_vk_load_VK_EXT_sample_locations( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_sample_locations) return;
    vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT) load("vkCmdSetSampleLocationsEXT", userptr);
    vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT) load("vkGetPhysicalDeviceMultisamplePropertiesEXT", userptr);
}
static void glad_vk_load_VK_EXT_validation_cache( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_validation_cache) return;
    vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT) load("vkCreateValidationCacheEXT", userptr);
    vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT) load("vkDestroyValidationCacheEXT", userptr);
    vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT) load("vkGetValidationCacheDataEXT", userptr);
    vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT) load("vkMergeValidationCachesEXT", userptr);
}
static void glad_vk_load_VK_GOOGLE_display_timing( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_GOOGLE_display_timing) return;
    vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE) load("vkGetPastPresentationTimingGOOGLE", userptr);
    vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE) load("vkGetRefreshCycleDurationGOOGLE", userptr);
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
static void glad_vk_load_VK_KHR_android_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_android_surface) return;
    vkCreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR) load("vkCreateAndroidSurfaceKHR", userptr);
}

#endif
static void glad_vk_load_VK_KHR_bind_memory2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_bind_memory2) return;
    vkBindBufferMemory2 = (PFN_vkBindBufferMemory2) load("vkBindBufferMemory2", userptr);
    vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR) load("vkBindBufferMemory2KHR", userptr);
    vkBindImageMemory2 = (PFN_vkBindImageMemory2) load("vkBindImageMemory2", userptr);
    vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR) load("vkBindImageMemory2KHR", userptr);
}
static void glad_vk_load_VK_KHR_create_renderpass2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_create_renderpass2) return;
    vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR) load("vkCmdBeginRenderPass2KHR", userptr);
    vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR) load("vkCmdEndRenderPass2KHR", userptr);
    vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR) load("vkCmdNextSubpass2KHR", userptr);
    vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR) load("vkCreateRenderPass2KHR", userptr);
}
static void glad_vk_load_VK_KHR_descriptor_update_template( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_descriptor_update_template) return;
    vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) load("vkCmdPushDescriptorSetWithTemplateKHR", userptr);
    vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate) load("vkCreateDescriptorUpdateTemplate", userptr);
    vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR) load("vkCreateDescriptorUpdateTemplateKHR", userptr);
    vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate) load("vkDestroyDescriptorUpdateTemplate", userptr);
    vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR) load("vkDestroyDescriptorUpdateTemplateKHR", userptr);
    vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate) load("vkUpdateDescriptorSetWithTemplate", userptr);
    vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR) load("vkUpdateDescriptorSetWithTemplateKHR", userptr);
}
static void glad_vk_load_VK_KHR_device_group( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_device_group) return;
    vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) load("vkAcquireNextImage2KHR", userptr);
    vkCmdDispatchBase = (PFN_vkCmdDispatchBase) load("vkCmdDispatchBase", userptr);
    vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR) load("vkCmdDispatchBaseKHR", userptr);
    vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask) load("vkCmdSetDeviceMask", userptr);
    vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR) load("vkCmdSetDeviceMaskKHR", userptr);
    vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures) load("vkGetDeviceGroupPeerMemoryFeatures", userptr);
    vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR) load("vkGetDeviceGroupPeerMemoryFeaturesKHR", userptr);
    vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) load("vkGetDeviceGroupPresentCapabilitiesKHR", userptr);
    vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) load("vkGetDeviceGroupSurfacePresentModesKHR", userptr);
    vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) load("vkGetPhysicalDevicePresentRectanglesKHR", userptr);
}
static void glad_vk_load_VK_KHR_device_group_creation( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_device_group_creation) return;
    vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups) load("vkEnumeratePhysicalDeviceGroups", userptr);
    vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR) load("vkEnumeratePhysicalDeviceGroupsKHR", userptr);
}
static void glad_vk_load_VK_KHR_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_display) return;
    vkCreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR) load("vkCreateDisplayModeKHR", userptr);
    vkCreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR) load("vkCreateDisplayPlaneSurfaceKHR", userptr);
    vkGetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR) load("vkGetDisplayModePropertiesKHR", userptr);
    vkGetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR) load("vkGetDisplayPlaneCapabilitiesKHR", userptr);
    vkGetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR) load("vkGetDisplayPlaneSupportedDisplaysKHR", userptr);
    vkGetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR) load("vkGetPhysicalDeviceDisplayPlanePropertiesKHR", userptr);
    vkGetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR) load("vkGetPhysicalDeviceDisplayPropertiesKHR", userptr);
}
static void glad_vk_load_VK_KHR_display_swapchain( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_display_swapchain) return;
    vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR) load("vkCreateSharedSwapchainsKHR", userptr);
}
static void glad_vk_load_VK_KHR_draw_indirect_count( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_draw_indirect_count) return;
    vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR) load("vkCmdDrawIndexedIndirectCountKHR", userptr);
    vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR) load("vkCmdDrawIndirectCountKHR", userptr);
}
static void glad_vk_load_VK_KHR_external_fence_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_capabilities) return;
    vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties) load("vkGetPhysicalDeviceExternalFenceProperties", userptr);
    vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR) load("vkGetPhysicalDeviceExternalFencePropertiesKHR", userptr);
}
static void glad_vk_load_VK_KHR_external_fence_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_fd) return;
    vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR) load("vkGetFenceFdKHR", userptr);
    vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR) load("vkImportFenceFdKHR", userptr);
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_external_fence_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_win32) return;
    vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR) load("vkGetFenceWin32HandleKHR", userptr);
    vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR) load("vkImportFenceWin32HandleKHR", userptr);
}

#endif
static void glad_vk_load_VK_KHR_external_memory_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_capabilities) return;
    vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties) load("vkGetPhysicalDeviceExternalBufferProperties", userptr);
    vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR) load("vkGetPhysicalDeviceExternalBufferPropertiesKHR", userptr);
}
static void glad_vk_load_VK_KHR_external_memory_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_fd) return;
    vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR) load("vkGetMemoryFdKHR", userptr);
    vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR) load("vkGetMemoryFdPropertiesKHR", userptr);
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_external_memory_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_win32) return;
    vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR) load("vkGetMemoryWin32HandleKHR", userptr);
    vkGetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR) load("vkGetMemoryWin32HandlePropertiesKHR", userptr);
}

#endif
static void glad_vk_load_VK_KHR_external_semaphore_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_capabilities) return;
    vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) load("vkGetPhysicalDeviceExternalSemaphoreProperties", userptr);
    vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR) load("vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", userptr);
}
static void glad_vk_load_VK_KHR_external_semaphore_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_fd) return;
    vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR) load("vkGetSemaphoreFdKHR", userptr);
    vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR) load("vkImportSemaphoreFdKHR", userptr);
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_external_semaphore_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_win32) return;
    vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR) load("vkGetSemaphoreWin32HandleKHR", userptr);
    vkImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR) load("vkImportSemaphoreWin32HandleKHR", userptr);
}

#endif
static void glad_vk_load_VK_KHR_get_display_properties2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_display_properties2) return;
    vkGetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR) load("vkGetDisplayModeProperties2KHR", userptr);
    vkGetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR) load("vkGetDisplayPlaneCapabilities2KHR", userptr);
    vkGetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR) load("vkGetPhysicalDeviceDisplayPlaneProperties2KHR", userptr);
    vkGetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR) load("vkGetPhysicalDeviceDisplayProperties2KHR", userptr);
}
static void glad_vk_load_VK_KHR_get_memory_requirements2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_memory_requirements2) return;
    vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2) load("vkGetBufferMemoryRequirements2", userptr);
    vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR) load("vkGetBufferMemoryRequirements2KHR", userptr);
    vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2) load("vkGetImageMemoryRequirements2", userptr);
    vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR) load("vkGetImageMemoryRequirements2KHR", userptr);
    vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2) load("vkGetImageSparseMemoryRequirements2", userptr);
    vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR) load("vkGetImageSparseMemoryRequirements2KHR", userptr);
}
static void glad_vk_load_VK_KHR_get_physical_device_properties2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_physical_device_properties2) return;
    vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2) load("vkGetPhysicalDeviceFeatures2", userptr);
    vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR) load("vkGetPhysicalDeviceFeatures2KHR", userptr);
    vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2) load("vkGetPhysicalDeviceFormatProperties2", userptr);
    vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR) load("vkGetPhysicalDeviceFormatProperties2KHR", userptr);
    vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) load("vkGetPhysicalDeviceImageFormatProperties2", userptr);
    vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR) load("vkGetPhysicalDeviceImageFormatProperties2KHR", userptr);
    vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2) load("vkGetPhysicalDeviceMemoryProperties2", userptr);
    vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR) load("vkGetPhysicalDeviceMemoryProperties2KHR", userptr);
    vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2) load("vkGetPhysicalDeviceProperties2", userptr);
    vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR) load("vkGetPhysicalDeviceProperties2KHR", userptr);
    vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) load("vkGetPhysicalDeviceQueueFamilyProperties2", userptr);
    vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR) load("vkGetPhysicalDeviceQueueFamilyProperties2KHR", userptr);
    vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) load("vkGetPhysicalDeviceSparseImageFormatProperties2", userptr);
    vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR) load("vkGetPhysicalDeviceSparseImageFormatProperties2KHR", userptr);
}
static void glad_vk_load_VK_KHR_get_surface_capabilities2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_surface_capabilities2) return;
    vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR) load("vkGetPhysicalDeviceSurfaceCapabilities2KHR", userptr);
    vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR) load("vkGetPhysicalDeviceSurfaceFormats2KHR", userptr);
}
static void glad_vk_load_VK_KHR_maintenance1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance1) return;
    vkTrimCommandPool = (PFN_vkTrimCommandPool) load("vkTrimCommandPool", userptr);
    vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR) load("vkTrimCommandPoolKHR", userptr);
}
static void glad_vk_load_VK_KHR_maintenance3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance3) return;
    vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport) load("vkGetDescriptorSetLayoutSupport", userptr);
    vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR) load("vkGetDescriptorSetLayoutSupportKHR", userptr);
}
#if defined(VK_USE_PLATFORM_MIR_KHR)
static void glad_vk_load_VK_KHR_mir_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_mir_surface) return;
    vkCreateMirSurfaceKHR = (PFN_vkCreateMirSurfaceKHR) load("vkCreateMirSurfaceKHR", userptr);
    vkGetPhysicalDeviceMirPresentationSupportKHR = (PFN_vkGetPhysicalDeviceMirPresentationSupportKHR) load("vkGetPhysicalDeviceMirPresentationSupportKHR", userptr);
}

#endif
static void glad_vk_load_VK_KHR_push_descriptor( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_push_descriptor) return;
    vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR) load("vkCmdPushDescriptorSetKHR", userptr);
    vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) load("vkCmdPushDescriptorSetWithTemplateKHR", userptr);
}
static void glad_vk_load_VK_KHR_sampler_ycbcr_conversion( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_sampler_ycbcr_conversion) return;
    vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion) load("vkCreateSamplerYcbcrConversion", userptr);
    vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR) load("vkCreateSamplerYcbcrConversionKHR", userptr);
    vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion) load("vkDestroySamplerYcbcrConversion", userptr);
    vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR) load("vkDestroySamplerYcbcrConversionKHR", userptr);
}
static void glad_vk_load_VK_KHR_shared_presentable_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_shared_presentable_image) return;
    vkGetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR) load("vkGetSwapchainStatusKHR", userptr);
}
static void glad_vk_load_VK_KHR_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_surface) return;
    vkDestroySurfaceKHR = (PFN_vkDestroySurfaceKHR) load("vkDestroySurfaceKHR", userptr);
    vkGetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR) load("vkGetPhysicalDeviceSurfaceCapabilitiesKHR", userptr);
    vkGetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR) load("vkGetPhysicalDeviceSurfaceFormatsKHR", userptr);
    vkGetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR) load("vkGetPhysicalDeviceSurfacePresentModesKHR", userptr);
    vkGetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR) load("vkGetPhysicalDeviceSurfaceSupportKHR", userptr);
}
static void glad_vk_load_VK_KHR_swapchain( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_swapchain) return;
    vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) load("vkAcquireNextImage2KHR", userptr);
    vkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR) load("vkAcquireNextImageKHR", userptr);
    vkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR) load("vkCreateSwapchainKHR", userptr);
    vkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR) load("vkDestroySwapchainKHR", userptr);
    vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) load("vkGetDeviceGroupPresentCapabilitiesKHR", userptr);
    vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) load("vkGetDeviceGroupSurfacePresentModesKHR", userptr);
    vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) load("vkGetPhysicalDevicePresentRectanglesKHR", userptr);
    vkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR) load("vkGetSwapchainImagesKHR", userptr);
    vkQueuePresentKHR = (PFN_vkQueuePresentKHR) load("vkQueuePresentKHR", userptr);
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
static void glad_vk_load_VK_KHR_wayland_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_wayland_surface) return;
    vkCreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR) load("vkCreateWaylandSurfaceKHR", userptr);
    vkGetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR) load("vkGetPhysicalDeviceWaylandPresentationSupportKHR", userptr);
}

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_win32_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_win32_surface) return;
    vkCreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR) load("vkCreateWin32SurfaceKHR", userptr);
    vkGetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR) load("vkGetPhysicalDeviceWin32PresentationSupportKHR", userptr);
}

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
static void glad_vk_load_VK_KHR_xcb_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_xcb_surface) return;
    vkCreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR) load("vkCreateXcbSurfaceKHR", userptr);
    vkGetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR) load("vkGetPhysicalDeviceXcbPresentationSupportKHR", userptr);
}

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
static void glad_vk_load_VK_KHR_xlib_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_xlib_surface) return;
    vkCreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR) load("vkCreateXlibSurfaceKHR", userptr);
    vkGetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR) load("vkGetPhysicalDeviceXlibPresentationSupportKHR", userptr);
}

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
static void glad_vk_load_VK_MVK_ios_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_MVK_ios_surface) return;
    vkCreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK) load("vkCreateIOSSurfaceMVK", userptr);
}

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
static void glad_vk_load_VK_MVK_macos_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_MVK_macos_surface) return;
    vkCreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK) load("vkCreateMacOSSurfaceMVK", userptr);
}

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
static void glad_vk_load_VK_NN_vi_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NN_vi_surface) return;
    vkCreateViSurfaceNN = (PFN_vkCreateViSurfaceNN) load("vkCreateViSurfaceNN", userptr);
}

#endif
static void glad_vk_load_VK_NVX_device_generated_commands( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NVX_device_generated_commands) return;
    vkCmdProcessCommandsNVX = (PFN_vkCmdProcessCommandsNVX) load("vkCmdProcessCommandsNVX", userptr);
    vkCmdReserveSpaceForCommandsNVX = (PFN_vkCmdReserveSpaceForCommandsNVX) load("vkCmdReserveSpaceForCommandsNVX", userptr);
    vkCreateIndirectCommandsLayoutNVX = (PFN_vkCreateIndirectCommandsLayoutNVX) load("vkCreateIndirectCommandsLayoutNVX", userptr);
    vkCreateObjectTableNVX = (PFN_vkCreateObjectTableNVX) load("vkCreateObjectTableNVX", userptr);
    vkDestroyIndirectCommandsLayoutNVX = (PFN_vkDestroyIndirectCommandsLayoutNVX) load("vkDestroyIndirectCommandsLayoutNVX", userptr);
    vkDestroyObjectTableNVX = (PFN_vkDestroyObjectTableNVX) load("vkDestroyObjectTableNVX", userptr);
    vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX = (PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX) load("vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX", userptr);
    vkRegisterObjectsNVX = (PFN_vkRegisterObjectsNVX) load("vkRegisterObjectsNVX", userptr);
    vkUnregisterObjectsNVX = (PFN_vkUnregisterObjectsNVX) load("vkUnregisterObjectsNVX", userptr);
}
static void glad_vk_load_VK_NVX_raytracing( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NVX_raytracing) return;
    vkBindAccelerationStructureMemoryNVX = (PFN_vkBindAccelerationStructureMemoryNVX) load("vkBindAccelerationStructureMemoryNVX", userptr);
    vkCmdBuildAccelerationStructureNVX = (PFN_vkCmdBuildAccelerationStructureNVX) load("vkCmdBuildAccelerationStructureNVX", userptr);
    vkCmdCopyAccelerationStructureNVX = (PFN_vkCmdCopyAccelerationStructureNVX) load("vkCmdCopyAccelerationStructureNVX", userptr);
    vkCmdTraceRaysNVX = (PFN_vkCmdTraceRaysNVX) load("vkCmdTraceRaysNVX", userptr);
    vkCmdWriteAccelerationStructurePropertiesNVX = (PFN_vkCmdWriteAccelerationStructurePropertiesNVX) load("vkCmdWriteAccelerationStructurePropertiesNVX", userptr);
    vkCompileDeferredNVX = (PFN_vkCompileDeferredNVX) load("vkCompileDeferredNVX", userptr);
    vkCreateAccelerationStructureNVX = (PFN_vkCreateAccelerationStructureNVX) load("vkCreateAccelerationStructureNVX", userptr);
    vkCreateRaytracingPipelinesNVX = (PFN_vkCreateRaytracingPipelinesNVX) load("vkCreateRaytracingPipelinesNVX", userptr);
    vkDestroyAccelerationStructureNVX = (PFN_vkDestroyAccelerationStructureNVX) load("vkDestroyAccelerationStructureNVX", userptr);
    vkGetAccelerationStructureHandleNVX = (PFN_vkGetAccelerationStructureHandleNVX) load("vkGetAccelerationStructureHandleNVX", userptr);
    vkGetAccelerationStructureMemoryRequirementsNVX = (PFN_vkGetAccelerationStructureMemoryRequirementsNVX) load("vkGetAccelerationStructureMemoryRequirementsNVX", userptr);
    vkGetAccelerationStructureScratchMemoryRequirementsNVX = (PFN_vkGetAccelerationStructureScratchMemoryRequirementsNVX) load("vkGetAccelerationStructureScratchMemoryRequirementsNVX", userptr);
    vkGetRaytracingShaderHandlesNVX = (PFN_vkGetRaytracingShaderHandlesNVX) load("vkGetRaytracingShaderHandlesNVX", userptr);
}
static void glad_vk_load_VK_NV_clip_space_w_scaling( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_clip_space_w_scaling) return;
    vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV) load("vkCmdSetViewportWScalingNV", userptr);
}
static void glad_vk_load_VK_NV_device_diagnostic_checkpoints( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_device_diagnostic_checkpoints) return;
    vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV) load("vkCmdSetCheckpointNV", userptr);
    vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV) load("vkGetQueueCheckpointDataNV", userptr);
}
static void glad_vk_load_VK_NV_external_memory_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_memory_capabilities) return;
    vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV) load("vkGetPhysicalDeviceExternalImageFormatPropertiesNV", userptr);
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_NV_external_memory_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_memory_win32) return;
    vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV) load("vkGetMemoryWin32HandleNV", userptr);
}

#endif
static void glad_vk_load_VK_NV_mesh_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_mesh_shader) return;
    vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV) load("vkCmdDrawMeshTasksIndirectCountNV", userptr);
    vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV) load("vkCmdDrawMeshTasksIndirectNV", userptr);
    vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV) load("vkCmdDrawMeshTasksNV", userptr);
}
static void glad_vk_load_VK_NV_scissor_exclusive( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_scissor_exclusive) return;
    vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV) load("vkCmdSetExclusiveScissorNV", userptr);
}
static void glad_vk_load_VK_NV_shading_rate_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_shading_rate_image) return;
    vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV) load("vkCmdBindShadingRateImageNV", userptr);
    vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV) load("vkCmdSetCoarseSampleOrderNV", userptr);
    vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV) load("vkCmdSetViewportShadingRatePaletteNV", userptr);
}



static int glad_vk_get_extensions( VkPhysicalDevice physical_device, uint32_t *out_extension_count, char ***out_extensions) {
    uint32_t i;
    uint32_t instance_extension_count = 0;
    uint32_t device_extension_count = 0;
    uint32_t max_extension_count;
    uint32_t total_extension_count;
    char **extensions;
    VkExtensionProperties *ext_properties;
    VkResult result;

    if (vkEnumerateInstanceExtensionProperties == NULL || (physical_device != NULL && vkEnumerateDeviceExtensionProperties == NULL)) {
        return 0;
    }

    result = vkEnumerateInstanceExtensionProperties(NULL, &instance_extension_count, NULL);
    if (result != VK_SUCCESS) {
        return 0;
    }

    if (physical_device != NULL) {
        result = vkEnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, NULL);
        if (result != VK_SUCCESS) {
            return 0;
        }
    }

    total_extension_count = instance_extension_count + device_extension_count;
    max_extension_count = instance_extension_count > device_extension_count
        ? instance_extension_count : device_extension_count;

    ext_properties = (VkExtensionProperties*) malloc(max_extension_count * sizeof(VkExtensionProperties));
    if (ext_properties == NULL) {
        return 0;
    }

    result = vkEnumerateInstanceExtensionProperties(NULL, &instance_extension_count, ext_properties);
    if (result != VK_SUCCESS) {
        free((void*) ext_properties);
        return 0;
    }

    extensions = (char**) calloc(total_extension_count, sizeof(char*));
    if (extensions == NULL) {
        free((void*) ext_properties);
        return 0;
    }

    for (i = 0; i < instance_extension_count; ++i) {
        VkExtensionProperties ext = ext_properties[i];

        size_t extension_name_length = strlen(ext.extensionName) + 1;
        extensions[i] = (char*) malloc(extension_name_length * sizeof(char));
        memcpy(extensions[i], ext.extensionName, extension_name_length * sizeof(char));
    }

    if (physical_device != NULL) {
        result = vkEnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, ext_properties);
        if (result != VK_SUCCESS) {
            for (i = 0; i < instance_extension_count; ++i) {
                free((void*) extensions[i]);
            }
            free(extensions);
            return 0;
        }

        for (i = 0; i < device_extension_count; ++i) {
            VkExtensionProperties ext = ext_properties[i];

            size_t extension_name_length = strlen(ext.extensionName) + 1;
            extensions[instance_extension_count + i] = (char*) malloc(extension_name_length * sizeof(char));
            memcpy(extensions[instance_extension_count + i], ext.extensionName, extension_name_length * sizeof(char));
        }
    }

    free((void*) ext_properties);

    *out_extension_count = total_extension_count;
    *out_extensions = extensions;

    return 1;
}

static void glad_vk_free_extensions(uint32_t extension_count, char **extensions) {
    uint32_t i;

    for(i = 0; i < extension_count ; ++i) {
        free((void*) (extensions[i]));
    }

    free((void*) extensions);
}

static int glad_vk_has_extension(const char *name, uint32_t extension_count, char **extensions) {
    uint32_t i;

    for (i = 0; i < extension_count; ++i) {
        if(strcmp(name, extensions[i]) == 0) {
            return 1;
        }
    }

    return 0;
}

static GLADapiproc glad_vk_get_proc_from_userptr(const char* name, void *userptr) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_vk_find_extensions_vulkan( VkPhysicalDevice physical_device) {
    uint32_t extension_count = 0;
    char **extensions = NULL;
    if (!glad_vk_get_extensions(physical_device, &extension_count, &extensions)) return 0;

    GLAD_VK_AMD_buffer_marker = glad_vk_has_extension("VK_AMD_buffer_marker", extension_count, extensions);
    GLAD_VK_AMD_draw_indirect_count = glad_vk_has_extension("VK_AMD_draw_indirect_count", extension_count, extensions);
    GLAD_VK_AMD_gcn_shader = glad_vk_has_extension("VK_AMD_gcn_shader", extension_count, extensions);
    GLAD_VK_AMD_gpu_shader_half_float = glad_vk_has_extension("VK_AMD_gpu_shader_half_float", extension_count, extensions);
    GLAD_VK_AMD_gpu_shader_int16 = glad_vk_has_extension("VK_AMD_gpu_shader_int16", extension_count, extensions);
    GLAD_VK_AMD_mixed_attachment_samples = glad_vk_has_extension("VK_AMD_mixed_attachment_samples", extension_count, extensions);
    GLAD_VK_AMD_negative_viewport_height = glad_vk_has_extension("VK_AMD_negative_viewport_height", extension_count, extensions);
    GLAD_VK_AMD_rasterization_order = glad_vk_has_extension("VK_AMD_rasterization_order", extension_count, extensions);
    GLAD_VK_AMD_shader_ballot = glad_vk_has_extension("VK_AMD_shader_ballot", extension_count, extensions);
    GLAD_VK_AMD_shader_core_properties = glad_vk_has_extension("VK_AMD_shader_core_properties", extension_count, extensions);
    GLAD_VK_AMD_shader_explicit_vertex_parameter = glad_vk_has_extension("VK_AMD_shader_explicit_vertex_parameter", extension_count, extensions);
    GLAD_VK_AMD_shader_fragment_mask = glad_vk_has_extension("VK_AMD_shader_fragment_mask", extension_count, extensions);
    GLAD_VK_AMD_shader_image_load_store_lod = glad_vk_has_extension("VK_AMD_shader_image_load_store_lod", extension_count, extensions);
    GLAD_VK_AMD_shader_info = glad_vk_has_extension("VK_AMD_shader_info", extension_count, extensions);
    GLAD_VK_AMD_shader_trinary_minmax = glad_vk_has_extension("VK_AMD_shader_trinary_minmax", extension_count, extensions);
    GLAD_VK_AMD_texture_gather_bias_lod = glad_vk_has_extension("VK_AMD_texture_gather_bias_lod", extension_count, extensions);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    GLAD_VK_ANDROID_external_memory_android_hardware_buffer = glad_vk_has_extension("VK_ANDROID_external_memory_android_hardware_buffer", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    GLAD_VK_EXT_acquire_xlib_display = glad_vk_has_extension("VK_EXT_acquire_xlib_display", extension_count, extensions);

#endif
    GLAD_VK_EXT_astc_decode_mode = glad_vk_has_extension("VK_EXT_astc_decode_mode", extension_count, extensions);
    GLAD_VK_EXT_blend_operation_advanced = glad_vk_has_extension("VK_EXT_blend_operation_advanced", extension_count, extensions);
    GLAD_VK_EXT_conditional_rendering = glad_vk_has_extension("VK_EXT_conditional_rendering", extension_count, extensions);
    GLAD_VK_EXT_conservative_rasterization = glad_vk_has_extension("VK_EXT_conservative_rasterization", extension_count, extensions);
    GLAD_VK_EXT_debug_marker = glad_vk_has_extension("VK_EXT_debug_marker", extension_count, extensions);
    GLAD_VK_EXT_debug_report = glad_vk_has_extension("VK_EXT_debug_report", extension_count, extensions);
    GLAD_VK_EXT_debug_utils = glad_vk_has_extension("VK_EXT_debug_utils", extension_count, extensions);
    GLAD_VK_EXT_depth_range_unrestricted = glad_vk_has_extension("VK_EXT_depth_range_unrestricted", extension_count, extensions);
    GLAD_VK_EXT_descriptor_indexing = glad_vk_has_extension("VK_EXT_descriptor_indexing", extension_count, extensions);
    GLAD_VK_EXT_direct_mode_display = glad_vk_has_extension("VK_EXT_direct_mode_display", extension_count, extensions);
    GLAD_VK_EXT_discard_rectangles = glad_vk_has_extension("VK_EXT_discard_rectangles", extension_count, extensions);
    GLAD_VK_EXT_display_control = glad_vk_has_extension("VK_EXT_display_control", extension_count, extensions);
    GLAD_VK_EXT_display_surface_counter = glad_vk_has_extension("VK_EXT_display_surface_counter", extension_count, extensions);
    GLAD_VK_EXT_external_memory_dma_buf = glad_vk_has_extension("VK_EXT_external_memory_dma_buf", extension_count, extensions);
    GLAD_VK_EXT_external_memory_host = glad_vk_has_extension("VK_EXT_external_memory_host", extension_count, extensions);
    GLAD_VK_EXT_global_priority = glad_vk_has_extension("VK_EXT_global_priority", extension_count, extensions);
    GLAD_VK_EXT_hdr_metadata = glad_vk_has_extension("VK_EXT_hdr_metadata", extension_count, extensions);
    GLAD_VK_EXT_inline_uniform_block = glad_vk_has_extension("VK_EXT_inline_uniform_block", extension_count, extensions);
    GLAD_VK_EXT_post_depth_coverage = glad_vk_has_extension("VK_EXT_post_depth_coverage", extension_count, extensions);
    GLAD_VK_EXT_queue_family_foreign = glad_vk_has_extension("VK_EXT_queue_family_foreign", extension_count, extensions);
    GLAD_VK_EXT_sample_locations = glad_vk_has_extension("VK_EXT_sample_locations", extension_count, extensions);
    GLAD_VK_EXT_sampler_filter_minmax = glad_vk_has_extension("VK_EXT_sampler_filter_minmax", extension_count, extensions);
    GLAD_VK_EXT_shader_stencil_export = glad_vk_has_extension("VK_EXT_shader_stencil_export", extension_count, extensions);
    GLAD_VK_EXT_shader_subgroup_ballot = glad_vk_has_extension("VK_EXT_shader_subgroup_ballot", extension_count, extensions);
    GLAD_VK_EXT_shader_subgroup_vote = glad_vk_has_extension("VK_EXT_shader_subgroup_vote", extension_count, extensions);
    GLAD_VK_EXT_shader_viewport_index_layer = glad_vk_has_extension("VK_EXT_shader_viewport_index_layer", extension_count, extensions);
    GLAD_VK_EXT_swapchain_colorspace = glad_vk_has_extension("VK_EXT_swapchain_colorspace", extension_count, extensions);
    GLAD_VK_EXT_validation_cache = glad_vk_has_extension("VK_EXT_validation_cache", extension_count, extensions);
    GLAD_VK_EXT_validation_flags = glad_vk_has_extension("VK_EXT_validation_flags", extension_count, extensions);
    GLAD_VK_EXT_vertex_attribute_divisor = glad_vk_has_extension("VK_EXT_vertex_attribute_divisor", extension_count, extensions);
    GLAD_VK_GOOGLE_display_timing = glad_vk_has_extension("VK_GOOGLE_display_timing", extension_count, extensions);
    GLAD_VK_IMG_filter_cubic = glad_vk_has_extension("VK_IMG_filter_cubic", extension_count, extensions);
    GLAD_VK_IMG_format_pvrtc = glad_vk_has_extension("VK_IMG_format_pvrtc", extension_count, extensions);
    GLAD_VK_KHR_16bit_storage = glad_vk_has_extension("VK_KHR_16bit_storage", extension_count, extensions);
    GLAD_VK_KHR_8bit_storage = glad_vk_has_extension("VK_KHR_8bit_storage", extension_count, extensions);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    GLAD_VK_KHR_android_surface = glad_vk_has_extension("VK_KHR_android_surface", extension_count, extensions);

#endif
    GLAD_VK_KHR_bind_memory2 = glad_vk_has_extension("VK_KHR_bind_memory2", extension_count, extensions);
    GLAD_VK_KHR_create_renderpass2 = glad_vk_has_extension("VK_KHR_create_renderpass2", extension_count, extensions);
    GLAD_VK_KHR_dedicated_allocation = glad_vk_has_extension("VK_KHR_dedicated_allocation", extension_count, extensions);
    GLAD_VK_KHR_descriptor_update_template = glad_vk_has_extension("VK_KHR_descriptor_update_template", extension_count, extensions);
    GLAD_VK_KHR_device_group = glad_vk_has_extension("VK_KHR_device_group", extension_count, extensions);
    GLAD_VK_KHR_device_group_creation = glad_vk_has_extension("VK_KHR_device_group_creation", extension_count, extensions);
    GLAD_VK_KHR_display = glad_vk_has_extension("VK_KHR_display", extension_count, extensions);
    GLAD_VK_KHR_display_swapchain = glad_vk_has_extension("VK_KHR_display_swapchain", extension_count, extensions);
    GLAD_VK_KHR_draw_indirect_count = glad_vk_has_extension("VK_KHR_draw_indirect_count", extension_count, extensions);
    GLAD_VK_KHR_driver_properties = glad_vk_has_extension("VK_KHR_driver_properties", extension_count, extensions);
    GLAD_VK_KHR_external_fence = glad_vk_has_extension("VK_KHR_external_fence", extension_count, extensions);
    GLAD_VK_KHR_external_fence_capabilities = glad_vk_has_extension("VK_KHR_external_fence_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_fence_fd = glad_vk_has_extension("VK_KHR_external_fence_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_external_fence_win32 = glad_vk_has_extension("VK_KHR_external_fence_win32", extension_count, extensions);

#endif
    GLAD_VK_KHR_external_memory = glad_vk_has_extension("VK_KHR_external_memory", extension_count, extensions);
    GLAD_VK_KHR_external_memory_capabilities = glad_vk_has_extension("VK_KHR_external_memory_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_memory_fd = glad_vk_has_extension("VK_KHR_external_memory_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_external_memory_win32 = glad_vk_has_extension("VK_KHR_external_memory_win32", extension_count, extensions);

#endif
    GLAD_VK_KHR_external_semaphore = glad_vk_has_extension("VK_KHR_external_semaphore", extension_count, extensions);
    GLAD_VK_KHR_external_semaphore_capabilities = glad_vk_has_extension("VK_KHR_external_semaphore_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_semaphore_fd = glad_vk_has_extension("VK_KHR_external_semaphore_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_external_semaphore_win32 = glad_vk_has_extension("VK_KHR_external_semaphore_win32", extension_count, extensions);

#endif
    GLAD_VK_KHR_get_display_properties2 = glad_vk_has_extension("VK_KHR_get_display_properties2", extension_count, extensions);
    GLAD_VK_KHR_get_memory_requirements2 = glad_vk_has_extension("VK_KHR_get_memory_requirements2", extension_count, extensions);
    GLAD_VK_KHR_get_physical_device_properties2 = glad_vk_has_extension("VK_KHR_get_physical_device_properties2", extension_count, extensions);
    GLAD_VK_KHR_get_surface_capabilities2 = glad_vk_has_extension("VK_KHR_get_surface_capabilities2", extension_count, extensions);
    GLAD_VK_KHR_image_format_list = glad_vk_has_extension("VK_KHR_image_format_list", extension_count, extensions);
    GLAD_VK_KHR_incremental_present = glad_vk_has_extension("VK_KHR_incremental_present", extension_count, extensions);
    GLAD_VK_KHR_maintenance1 = glad_vk_has_extension("VK_KHR_maintenance1", extension_count, extensions);
    GLAD_VK_KHR_maintenance2 = glad_vk_has_extension("VK_KHR_maintenance2", extension_count, extensions);
    GLAD_VK_KHR_maintenance3 = glad_vk_has_extension("VK_KHR_maintenance3", extension_count, extensions);
#if defined(VK_USE_PLATFORM_MIR_KHR)
    GLAD_VK_KHR_mir_surface = glad_vk_has_extension("VK_KHR_mir_surface", extension_count, extensions);

#endif
    GLAD_VK_KHR_multiview = glad_vk_has_extension("VK_KHR_multiview", extension_count, extensions);
    GLAD_VK_KHR_push_descriptor = glad_vk_has_extension("VK_KHR_push_descriptor", extension_count, extensions);
    GLAD_VK_KHR_relaxed_block_layout = glad_vk_has_extension("VK_KHR_relaxed_block_layout", extension_count, extensions);
    GLAD_VK_KHR_sampler_mirror_clamp_to_edge = glad_vk_has_extension("VK_KHR_sampler_mirror_clamp_to_edge", extension_count, extensions);
    GLAD_VK_KHR_sampler_ycbcr_conversion = glad_vk_has_extension("VK_KHR_sampler_ycbcr_conversion", extension_count, extensions);
    GLAD_VK_KHR_shader_atomic_int64 = glad_vk_has_extension("VK_KHR_shader_atomic_int64", extension_count, extensions);
    GLAD_VK_KHR_shader_draw_parameters = glad_vk_has_extension("VK_KHR_shader_draw_parameters", extension_count, extensions);
    GLAD_VK_KHR_shared_presentable_image = glad_vk_has_extension("VK_KHR_shared_presentable_image", extension_count, extensions);
    GLAD_VK_KHR_storage_buffer_storage_class = glad_vk_has_extension("VK_KHR_storage_buffer_storage_class", extension_count, extensions);
    GLAD_VK_KHR_surface = glad_vk_has_extension("VK_KHR_surface", extension_count, extensions);
    GLAD_VK_KHR_swapchain = glad_vk_has_extension("VK_KHR_swapchain", extension_count, extensions);
    GLAD_VK_KHR_variable_pointers = glad_vk_has_extension("VK_KHR_variable_pointers", extension_count, extensions);
    GLAD_VK_KHR_vulkan_memory_model = glad_vk_has_extension("VK_KHR_vulkan_memory_model", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    GLAD_VK_KHR_wayland_surface = glad_vk_has_extension("VK_KHR_wayland_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_win32_keyed_mutex = glad_vk_has_extension("VK_KHR_win32_keyed_mutex", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_win32_surface = glad_vk_has_extension("VK_KHR_win32_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    GLAD_VK_KHR_xcb_surface = glad_vk_has_extension("VK_KHR_xcb_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    GLAD_VK_KHR_xlib_surface = glad_vk_has_extension("VK_KHR_xlib_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
    GLAD_VK_MVK_ios_surface = glad_vk_has_extension("VK_MVK_ios_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
    GLAD_VK_MVK_macos_surface = glad_vk_has_extension("VK_MVK_macos_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
    GLAD_VK_NN_vi_surface = glad_vk_has_extension("VK_NN_vi_surface", extension_count, extensions);

#endif
    GLAD_VK_NVX_device_generated_commands = glad_vk_has_extension("VK_NVX_device_generated_commands", extension_count, extensions);
    GLAD_VK_NVX_multiview_per_view_attributes = glad_vk_has_extension("VK_NVX_multiview_per_view_attributes", extension_count, extensions);
    GLAD_VK_NVX_raytracing = glad_vk_has_extension("VK_NVX_raytracing", extension_count, extensions);
    GLAD_VK_NV_clip_space_w_scaling = glad_vk_has_extension("VK_NV_clip_space_w_scaling", extension_count, extensions);
    GLAD_VK_NV_compute_shader_derivatives = glad_vk_has_extension("VK_NV_compute_shader_derivatives", extension_count, extensions);
    GLAD_VK_NV_corner_sampled_image = glad_vk_has_extension("VK_NV_corner_sampled_image", extension_count, extensions);
    GLAD_VK_NV_dedicated_allocation = glad_vk_has_extension("VK_NV_dedicated_allocation", extension_count, extensions);
    GLAD_VK_NV_device_diagnostic_checkpoints = glad_vk_has_extension("VK_NV_device_diagnostic_checkpoints", extension_count, extensions);
    GLAD_VK_NV_external_memory = glad_vk_has_extension("VK_NV_external_memory", extension_count, extensions);
    GLAD_VK_NV_external_memory_capabilities = glad_vk_has_extension("VK_NV_external_memory_capabilities", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_NV_external_memory_win32 = glad_vk_has_extension("VK_NV_external_memory_win32", extension_count, extensions);

#endif
    GLAD_VK_NV_fill_rectangle = glad_vk_has_extension("VK_NV_fill_rectangle", extension_count, extensions);
    GLAD_VK_NV_fragment_coverage_to_color = glad_vk_has_extension("VK_NV_fragment_coverage_to_color", extension_count, extensions);
    GLAD_VK_NV_fragment_shader_barycentric = glad_vk_has_extension("VK_NV_fragment_shader_barycentric", extension_count, extensions);
    GLAD_VK_NV_framebuffer_mixed_samples = glad_vk_has_extension("VK_NV_framebuffer_mixed_samples", extension_count, extensions);
    GLAD_VK_NV_geometry_shader_passthrough = glad_vk_has_extension("VK_NV_geometry_shader_passthrough", extension_count, extensions);
    GLAD_VK_NV_glsl_shader = glad_vk_has_extension("VK_NV_glsl_shader", extension_count, extensions);
    GLAD_VK_NV_mesh_shader = glad_vk_has_extension("VK_NV_mesh_shader", extension_count, extensions);
    GLAD_VK_NV_representative_fragment_test = glad_vk_has_extension("VK_NV_representative_fragment_test", extension_count, extensions);
    GLAD_VK_NV_sample_mask_override_coverage = glad_vk_has_extension("VK_NV_sample_mask_override_coverage", extension_count, extensions);
    GLAD_VK_NV_scissor_exclusive = glad_vk_has_extension("VK_NV_scissor_exclusive", extension_count, extensions);
    GLAD_VK_NV_shader_image_footprint = glad_vk_has_extension("VK_NV_shader_image_footprint", extension_count, extensions);
    GLAD_VK_NV_shader_subgroup_partitioned = glad_vk_has_extension("VK_NV_shader_subgroup_partitioned", extension_count, extensions);
    GLAD_VK_NV_shading_rate_image = glad_vk_has_extension("VK_NV_shading_rate_image", extension_count, extensions);
    GLAD_VK_NV_viewport_array2 = glad_vk_has_extension("VK_NV_viewport_array2", extension_count, extensions);
    GLAD_VK_NV_viewport_swizzle = glad_vk_has_extension("VK_NV_viewport_swizzle", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_NV_win32_keyed_mutex = glad_vk_has_extension("VK_NV_win32_keyed_mutex", extension_count, extensions);

#endif

    glad_vk_free_extensions(extension_count, extensions);

    return 1;
}

static int glad_vk_find_core_vulkan( VkPhysicalDevice physical_device) {
    int major = 1;
    int minor = 0;

#ifdef VK_VERSION_1_1
    if (vkEnumerateInstanceVersion  != NULL) {
        uint32_t version;
        VkResult result;

        result = vkEnumerateInstanceVersion(&version);
        if (result == VK_SUCCESS) {
            major = (int) VK_VERSION_MAJOR(version);
            minor = (int) VK_VERSION_MINOR(version);
        }
    }
#endif

    if (physical_device != NULL && vkGetPhysicalDeviceProperties  != NULL) {
        VkPhysicalDeviceProperties properties;
        vkGetPhysicalDeviceProperties(physical_device, &properties);

        major = (int) VK_VERSION_MAJOR(properties.apiVersion);
        minor = (int) VK_VERSION_MINOR(properties.apiVersion);
    }

    GLAD_VK_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLAD_VK_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadVulkanUserPtr( VkPhysicalDevice physical_device, GLADuserptrloadfunc load, void *userptr) {
    int version;

#ifdef VK_VERSION_1_1
    vkEnumerateInstanceVersion  = (PFN_vkEnumerateInstanceVersion) load("vkEnumerateInstanceVersion", userptr);
#endif
    version = glad_vk_find_core_vulkan( physical_device);
    if (!version) {
        return 0;
    }

    glad_vk_load_VK_VERSION_1_0(load, userptr);
    glad_vk_load_VK_VERSION_1_1(load, userptr);

    if (!glad_vk_find_extensions_vulkan( physical_device)) return 0;
    glad_vk_load_VK_AMD_buffer_marker(load, userptr);
    glad_vk_load_VK_AMD_draw_indirect_count(load, userptr);
    glad_vk_load_VK_AMD_shader_info(load, userptr);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_vk_load_VK_ANDROID_external_memory_android_hardware_buffer(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    glad_vk_load_VK_EXT_acquire_xlib_display(load, userptr);

#endif
    glad_vk_load_VK_EXT_conditional_rendering(load, userptr);
    glad_vk_load_VK_EXT_debug_marker(load, userptr);
    glad_vk_load_VK_EXT_debug_report(load, userptr);
    glad_vk_load_VK_EXT_debug_utils(load, userptr);
    glad_vk_load_VK_EXT_direct_mode_display(load, userptr);
    glad_vk_load_VK_EXT_discard_rectangles(load, userptr);
    glad_vk_load_VK_EXT_display_control(load, userptr);
    glad_vk_load_VK_EXT_display_surface_counter(load, userptr);
    glad_vk_load_VK_EXT_external_memory_host(load, userptr);
    glad_vk_load_VK_EXT_hdr_metadata(load, userptr);
    glad_vk_load_VK_EXT_sample_locations(load, userptr);
    glad_vk_load_VK_EXT_validation_cache(load, userptr);
    glad_vk_load_VK_GOOGLE_display_timing(load, userptr);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_vk_load_VK_KHR_android_surface(load, userptr);

#endif
    glad_vk_load_VK_KHR_bind_memory2(load, userptr);
    glad_vk_load_VK_KHR_create_renderpass2(load, userptr);
    glad_vk_load_VK_KHR_descriptor_update_template(load, userptr);
    glad_vk_load_VK_KHR_device_group(load, userptr);
    glad_vk_load_VK_KHR_device_group_creation(load, userptr);
    glad_vk_load_VK_KHR_display(load, userptr);
    glad_vk_load_VK_KHR_display_swapchain(load, userptr);
    glad_vk_load_VK_KHR_draw_indirect_count(load, userptr);
    glad_vk_load_VK_KHR_external_fence_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_fence_fd(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_external_fence_win32(load, userptr);

#endif
    glad_vk_load_VK_KHR_external_memory_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_memory_fd(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_external_memory_win32(load, userptr);

#endif
    glad_vk_load_VK_KHR_external_semaphore_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_semaphore_fd(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_external_semaphore_win32(load, userptr);

#endif
    glad_vk_load_VK_KHR_get_display_properties2(load, userptr);
    glad_vk_load_VK_KHR_get_memory_requirements2(load, userptr);
    glad_vk_load_VK_KHR_get_physical_device_properties2(load, userptr);
    glad_vk_load_VK_KHR_get_surface_capabilities2(load, userptr);
    glad_vk_load_VK_KHR_maintenance1(load, userptr);
    glad_vk_load_VK_KHR_maintenance3(load, userptr);
#if defined(VK_USE_PLATFORM_MIR_KHR)
    glad_vk_load_VK_KHR_mir_surface(load, userptr);

#endif
    glad_vk_load_VK_KHR_push_descriptor(load, userptr);
    glad_vk_load_VK_KHR_sampler_ycbcr_conversion(load, userptr);
    glad_vk_load_VK_KHR_shared_presentable_image(load, userptr);
    glad_vk_load_VK_KHR_surface(load, userptr);
    glad_vk_load_VK_KHR_swapchain(load, userptr);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    glad_vk_load_VK_KHR_wayland_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_win32_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    glad_vk_load_VK_KHR_xcb_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    glad_vk_load_VK_KHR_xlib_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
    glad_vk_load_VK_MVK_ios_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
    glad_vk_load_VK_MVK_macos_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
    glad_vk_load_VK_NN_vi_surface(load, userptr);

#endif
    glad_vk_load_VK_NVX_device_generated_commands(load, userptr);
    glad_vk_load_VK_NVX_raytracing(load, userptr);
    glad_vk_load_VK_NV_clip_space_w_scaling(load, userptr);
    glad_vk_load_VK_NV_device_diagnostic_checkpoints(load, userptr);
    glad_vk_load_VK_NV_external_memory_capabilities(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_NV_external_memory_win32(load, userptr);

#endif
    glad_vk_load_VK_NV_mesh_shader(load, userptr);
    glad_vk_load_VK_NV_scissor_exclusive(load, userptr);
    glad_vk_load_VK_NV_shading_rate_image(load, userptr);


    return version;
}


int gladLoadVulkan( VkPhysicalDevice physical_device, GLADloadfunc load) {
    return gladLoadVulkanUserPtr( physical_device, glad_vk_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}




#ifdef GLAD_VULKAN

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


static const char* DEVICE_FUNCTIONS[] = {
    "vkAcquireNextImage2KHR",
    "vkAcquireNextImageKHR",
    "vkAllocateCommandBuffers",
    "vkAllocateDescriptorSets",
    "vkAllocateMemory",
    "vkBeginCommandBuffer",
    "vkBindAccelerationStructureMemoryNVX",
    "vkBindBufferMemory",
    "vkBindBufferMemory2",
    "vkBindBufferMemory2KHR",
    "vkBindImageMemory",
    "vkBindImageMemory2",
    "vkBindImageMemory2KHR",
    "vkCmdBeginConditionalRenderingEXT",
    "vkCmdBeginDebugUtilsLabelEXT",
    "vkCmdBeginQuery",
    "vkCmdBeginRenderPass",
    "vkCmdBeginRenderPass2KHR",
    "vkCmdBindDescriptorSets",
    "vkCmdBindIndexBuffer",
    "vkCmdBindPipeline",
    "vkCmdBindShadingRateImageNV",
    "vkCmdBindVertexBuffers",
    "vkCmdBlitImage",
    "vkCmdBuildAccelerationStructureNVX",
    "vkCmdClearAttachments",
    "vkCmdClearColorImage",
    "vkCmdClearDepthStencilImage",
    "vkCmdCopyAccelerationStructureNVX",
    "vkCmdCopyBuffer",
    "vkCmdCopyBufferToImage",
    "vkCmdCopyImage",
    "vkCmdCopyImageToBuffer",
    "vkCmdCopyQueryPoolResults",
    "vkCmdDebugMarkerBeginEXT",
    "vkCmdDebugMarkerEndEXT",
    "vkCmdDebugMarkerInsertEXT",
    "vkCmdDispatch",
    "vkCmdDispatchBase",
    "vkCmdDispatchBaseKHR",
    "vkCmdDispatchIndirect",
    "vkCmdDraw",
    "vkCmdDrawIndexed",
    "vkCmdDrawIndexedIndirect",
    "vkCmdDrawIndexedIndirectCountAMD",
    "vkCmdDrawIndexedIndirectCountKHR",
    "vkCmdDrawIndirect",
    "vkCmdDrawIndirectCountAMD",
    "vkCmdDrawIndirectCountKHR",
    "vkCmdDrawMeshTasksIndirectCountNV",
    "vkCmdDrawMeshTasksIndirectNV",
    "vkCmdDrawMeshTasksNV",
    "vkCmdEndConditionalRenderingEXT",
    "vkCmdEndDebugUtilsLabelEXT",
    "vkCmdEndQuery",
    "vkCmdEndRenderPass",
    "vkCmdEndRenderPass2KHR",
    "vkCmdExecuteCommands",
    "vkCmdFillBuffer",
    "vkCmdInsertDebugUtilsLabelEXT",
    "vkCmdNextSubpass",
    "vkCmdNextSubpass2KHR",
    "vkCmdPipelineBarrier",
    "vkCmdProcessCommandsNVX",
    "vkCmdPushConstants",
    "vkCmdPushDescriptorSetKHR",
    "vkCmdPushDescriptorSetWithTemplateKHR",
    "vkCmdReserveSpaceForCommandsNVX",
    "vkCmdResetEvent",
    "vkCmdResetQueryPool",
    "vkCmdResolveImage",
    "vkCmdSetBlendConstants",
    "vkCmdSetCheckpointNV",
    "vkCmdSetCoarseSampleOrderNV",
    "vkCmdSetDepthBias",
    "vkCmdSetDepthBounds",
    "vkCmdSetDeviceMask",
    "vkCmdSetDeviceMaskKHR",
    "vkCmdSetDiscardRectangleEXT",
    "vkCmdSetEvent",
    "vkCmdSetExclusiveScissorNV",
    "vkCmdSetLineWidth",
    "vkCmdSetSampleLocationsEXT",
    "vkCmdSetScissor",
    "vkCmdSetStencilCompareMask",
    "vkCmdSetStencilReference",
    "vkCmdSetStencilWriteMask",
    "vkCmdSetViewport",
    "vkCmdSetViewportShadingRatePaletteNV",
    "vkCmdSetViewportWScalingNV",
    "vkCmdTraceRaysNVX",
    "vkCmdUpdateBuffer",
    "vkCmdWaitEvents",
    "vkCmdWriteAccelerationStructurePropertiesNVX",
    "vkCmdWriteBufferMarkerAMD",
    "vkCmdWriteTimestamp",
    "vkCompileDeferredNVX",
    "vkCreateAccelerationStructureNVX",
    "vkCreateBuffer",
    "vkCreateBufferView",
    "vkCreateCommandPool",
    "vkCreateComputePipelines",
    "vkCreateDescriptorPool",
    "vkCreateDescriptorSetLayout",
    "vkCreateDescriptorUpdateTemplate",
    "vkCreateDescriptorUpdateTemplateKHR",
    "vkCreateEvent",
    "vkCreateFence",
    "vkCreateFramebuffer",
    "vkCreateGraphicsPipelines",
    "vkCreateImage",
    "vkCreateImageView",
    "vkCreateIndirectCommandsLayoutNVX",
    "vkCreateObjectTableNVX",
    "vkCreatePipelineCache",
    "vkCreatePipelineLayout",
    "vkCreateQueryPool",
    "vkCreateRaytracingPipelinesNVX",
    "vkCreateRenderPass",
    "vkCreateRenderPass2KHR",
    "vkCreateSampler",
    "vkCreateSamplerYcbcrConversion",
    "vkCreateSamplerYcbcrConversionKHR",
    "vkCreateSemaphore",
    "vkCreateShaderModule",
    "vkCreateSharedSwapchainsKHR",
    "vkCreateSwapchainKHR",
    "vkCreateValidationCacheEXT",
    "vkDebugMarkerSetObjectNameEXT",
    "vkDebugMarkerSetObjectTagEXT",
    "vkDestroyAccelerationStructureNVX",
    "vkDestroyBuffer",
    "vkDestroyBufferView",
    "vkDestroyCommandPool",
    "vkDestroyDescriptorPool",
    "vkDestroyDescriptorSetLayout",
    "vkDestroyDescriptorUpdateTemplate",
    "vkDestroyDescriptorUpdateTemplateKHR",
    "vkDestroyDevice",
    "vkDestroyEvent",
    "vkDestroyFence",
    "vkDestroyFramebuffer",
    "vkDestroyImage",
    "vkDestroyImageView",
    "vkDestroyIndirectCommandsLayoutNVX",
    "vkDestroyObjectTableNVX",
    "vkDestroyPipeline",
    "vkDestroyPipelineCache",
    "vkDestroyPipelineLayout",
    "vkDestroyQueryPool",
    "vkDestroyRenderPass",
    "vkDestroySampler",
    "vkDestroySamplerYcbcrConversion",
    "vkDestroySamplerYcbcrConversionKHR",
    "vkDestroySemaphore",
    "vkDestroyShaderModule",
    "vkDestroySwapchainKHR",
    "vkDestroyValidationCacheEXT",
    "vkDeviceWaitIdle",
    "vkDisplayPowerControlEXT",
    "vkEndCommandBuffer",
    "vkFlushMappedMemoryRanges",
    "vkFreeCommandBuffers",
    "vkFreeDescriptorSets",
    "vkFreeMemory",
    "vkGetAccelerationStructureHandleNVX",
    "vkGetAccelerationStructureMemoryRequirementsNVX",
    "vkGetAccelerationStructureScratchMemoryRequirementsNVX",
    "vkGetAndroidHardwareBufferPropertiesANDROID",
    "vkGetBufferMemoryRequirements",
    "vkGetBufferMemoryRequirements2",
    "vkGetBufferMemoryRequirements2KHR",
    "vkGetDescriptorSetLayoutSupport",
    "vkGetDescriptorSetLayoutSupportKHR",
    "vkGetDeviceGroupPeerMemoryFeatures",
    "vkGetDeviceGroupPeerMemoryFeaturesKHR",
    "vkGetDeviceGroupPresentCapabilitiesKHR",
    "vkGetDeviceGroupSurfacePresentModesKHR",
    "vkGetDeviceMemoryCommitment",
    "vkGetDeviceProcAddr",
    "vkGetDeviceQueue",
    "vkGetDeviceQueue2",
    "vkGetEventStatus",
    "vkGetFenceFdKHR",
    "vkGetFenceStatus",
    "vkGetFenceWin32HandleKHR",
    "vkGetImageMemoryRequirements",
    "vkGetImageMemoryRequirements2",
    "vkGetImageMemoryRequirements2KHR",
    "vkGetImageSparseMemoryRequirements",
    "vkGetImageSparseMemoryRequirements2",
    "vkGetImageSparseMemoryRequirements2KHR",
    "vkGetImageSubresourceLayout",
    "vkGetMemoryAndroidHardwareBufferANDROID",
    "vkGetMemoryFdKHR",
    "vkGetMemoryFdPropertiesKHR",
    "vkGetMemoryHostPointerPropertiesEXT",
    "vkGetMemoryWin32HandleKHR",
    "vkGetMemoryWin32HandleNV",
    "vkGetMemoryWin32HandlePropertiesKHR",
    "vkGetPastPresentationTimingGOOGLE",
    "vkGetPipelineCacheData",
    "vkGetQueryPoolResults",
    "vkGetQueueCheckpointDataNV",
    "vkGetRaytracingShaderHandlesNVX",
    "vkGetRefreshCycleDurationGOOGLE",
    "vkGetRenderAreaGranularity",
    "vkGetSemaphoreFdKHR",
    "vkGetSemaphoreWin32HandleKHR",
    "vkGetShaderInfoAMD",
    "vkGetSwapchainCounterEXT",
    "vkGetSwapchainImagesKHR",
    "vkGetSwapchainStatusKHR",
    "vkGetValidationCacheDataEXT",
    "vkImportFenceFdKHR",
    "vkImportFenceWin32HandleKHR",
    "vkImportSemaphoreFdKHR",
    "vkImportSemaphoreWin32HandleKHR",
    "vkInvalidateMappedMemoryRanges",
    "vkMapMemory",
    "vkMergePipelineCaches",
    "vkMergeValidationCachesEXT",
    "vkQueueBeginDebugUtilsLabelEXT",
    "vkQueueBindSparse",
    "vkQueueEndDebugUtilsLabelEXT",
    "vkQueueInsertDebugUtilsLabelEXT",
    "vkQueuePresentKHR",
    "vkQueueSubmit",
    "vkQueueWaitIdle",
    "vkRegisterDeviceEventEXT",
    "vkRegisterDisplayEventEXT",
    "vkRegisterObjectsNVX",
    "vkResetCommandBuffer",
    "vkResetCommandPool",
    "vkResetDescriptorPool",
    "vkResetEvent",
    "vkResetFences",
    "vkSetDebugUtilsObjectNameEXT",
    "vkSetDebugUtilsObjectTagEXT",
    "vkSetEvent",
    "vkSetHdrMetadataEXT",
    "vkTrimCommandPool",
    "vkTrimCommandPoolKHR",
    "vkUnmapMemory",
    "vkUnregisterObjectsNVX",
    "vkUpdateDescriptorSetWithTemplate",
    "vkUpdateDescriptorSetWithTemplateKHR",
    "vkUpdateDescriptorSets",
    "vkWaitForFences",
};

static int glad_vulkan_is_device_function(const char *name) {
    /* Exists as a workaround for:
     * https://github.com/KhronosGroup/Vulkan-LoaderAndValidationLayers/issues/2323
     *
     * `vkGetDeviceProcAddr` does not return NULL for non-device functions.
     */
    int i;
    int length = sizeof(DEVICE_FUNCTIONS) / sizeof(DEVICE_FUNCTIONS[0]);

    for (i=0; i < length; ++i) {
        if (strcmp(DEVICE_FUNCTIONS[i], name) == 0) {
            return 1;
        }
    }

    return 0;
}

struct _glad_vulkan_userptr {
    void *vk_handle;
    VkInstance vk_instance;
    VkDevice vk_device;
    PFN_vkGetInstanceProcAddr get_instance_proc_addr;
    PFN_vkGetDeviceProcAddr get_device_proc_addr;
};

static GLADapiproc glad_vulkan_get_proc(const char *name, void *vuserptr) {
    struct _glad_vulkan_userptr userptr = *(struct _glad_vulkan_userptr*) vuserptr;
    PFN_vkVoidFunction result = NULL;

    if (userptr.vk_device != NULL && glad_vulkan_is_device_function(name)) {
        result = userptr.get_device_proc_addr(userptr.vk_device, name);
    }

    if (result == NULL && userptr.vk_instance != NULL) {
        result = userptr.get_instance_proc_addr(userptr.vk_instance, name);
    }

    if(result == NULL) {
        result = (PFN_vkVoidFunction) glad_dlsym_handle(userptr.vk_handle, name);
    }

    return (GLADapiproc) result;
}


static void* _vulkan_handle;

int gladLoaderLoadVulkan( VkInstance instance, VkPhysicalDevice physical_device, VkDevice device) {
    static const char *NAMES[] = {
#if GLAD_PLATFORM_APPLE
        "libvulkan.1.dylib",
#elif GLAD_PLATFORM_WIN32
        "vulkan-1.dll",
        "vulkan.dll",
#else
        "libvulkan.so.1",
        "libvulkan.so",
#endif
    };

    int version = 0;
    int did_load = 0;
    struct _glad_vulkan_userptr userptr;

    if (_vulkan_handle == NULL) {
        _vulkan_handle = glad_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
        did_load = _vulkan_handle != NULL;
    }

    if (_vulkan_handle != NULL) {
        userptr.vk_handle = _vulkan_handle;
        userptr.vk_instance = instance;
        userptr.vk_device = device;
        userptr.get_instance_proc_addr = (PFN_vkGetInstanceProcAddr) glad_dlsym_handle(_vulkan_handle, "vkGetInstanceProcAddr");
        userptr.get_device_proc_addr = (PFN_vkGetDeviceProcAddr) glad_dlsym_handle(_vulkan_handle, "vkGetDeviceProcAddr");

        if (userptr.get_instance_proc_addr != NULL && userptr.get_device_proc_addr != NULL) {
            version = gladLoadVulkanUserPtr( physical_device, glad_vulkan_get_proc, &userptr);
        }

        if (!version && did_load) {
            glad_close_dlopen_handle(_vulkan_handle);
            _vulkan_handle = NULL;
        }
    }

    return version;
}


void gladLoaderUnloadVulkan(void) {
    if (_vulkan_handle != NULL) {
        glad_close_dlopen_handle(_vulkan_handle);
        _vulkan_handle = NULL;
    }
}

#endif /* GLAD_VULKAN */
