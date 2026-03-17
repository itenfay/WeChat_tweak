//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface FlutterDartProject : NSObject
{
    struct Settings {
        void * vm_snapshot_data_path;
        struct function<std::unique_ptr<fml::Mapping>()> vm_snapshot_data;
        void * vm_snapshot_instr_path;
        struct function<std::unique_ptr<fml::Mapping>()> vm_snapshot_instr;
        void * isolate_snapshot_data_path;
        struct function<std::unique_ptr<fml::Mapping>()> isolate_snapshot_data;
        void * isolate_snapshot_instr_path;
        struct function<std::unique_ptr<fml::Mapping>()> isolate_snapshot_instr;
        void * route;
        struct function<std::unique_ptr<fml::Mapping>()> dart_library_sources_kernel;
        void * application_library_path;
        void * vmservice_snapshot_library_path;
        void * application_kernel_asset;
        void * application_kernel_list_asset;
        struct function<std::vector<std::unique_ptr<const fml::Mapping>>()> application_kernels;
        void * temp_directory_path;
        void * dart_flags;
        _Bool enable_checked_mode;
        _Bool start_paused;
        _Bool trace_skia;
        void * trace_allowlist;
        struct optional<std::vector<std::string>> trace_skia_allowlist;
        _Bool trace_startup;
        _Bool trace_systrace;
        void * trace_to_file;
        _Bool enable_timeline_event_handler;
        _Bool dump_skp_on_shader_compilation;
        _Bool cache_sksl;
        _Bool purge_persistent_cache;
        _Bool endless_trace_buffer;
        _Bool enable_dart_profiling;
        _Bool disable_dart_asserts;
        _Bool enable_serial_gc;
        _Bool may_insecurely_connect_to_all_domains;
        void * domain_network_policy;
        void * advisory_script_uri;
        void * advisory_script_entrypoint;
        void * executable_name;
        _Bool enable_vm_service;
        _Bool enable_vm_service_publication;
        void * vm_service_host;
        unsigned int vm_service_port;
        _Bool disable_service_auth_codes;
        _Bool enable_service_port_fallback;
        _Bool use_test_fonts;
        _Bool use_asset_fonts;
        _Bool prefetched_default_font_manager;
        _Bool enable_wide_gamut;
        _Bool enable_impeller;
        _Bool warn_on_impeller_opt_out;
        int android_rendering_api;
        int ohos_rendering_api;
        optional_9436b898 requested_rendering_backend;
        _Bool enable_vulkan_validation;
        _Bool enable_opengl_gpu_tracing;
        _Bool enable_vulkan_gpu_tracing;
        unsigned int font_initialization_data;
        _Bool leak_vm;
        struct function<void (long, std::function<void ()>)> task_observer_add;
        struct function<void (long)> task_observer_remove;
        struct function<void (const flutter::DartIsolate &)> root_isolate_create_callback;
        function_ffe40f9b isolate_create_callback;
        function_ffe40f9b root_isolate_shutdown_callback;
        function_ffe40f9b isolate_shutdown_callback;
        function_ffe40f9b service_isolate_create_callback;
        struct function<void (long long)> idle_notification_callback;
        struct function<bool (const std::string &, const std::string &)> unhandled_exception_callback;
        struct function<void (const std::string &, const std::string &)> log_message_callback;
        _Bool enable_software_rendering;
        _Bool skia_deterministic_rendering_on_cpu;
        _Bool verbose_logging;
        void * log_tag;
        _Bool icu_initialization_required;
        void * icu_data_path;
        struct function<std::unique_ptr<fml::Mapping>()> icu_mapper;
        int assets_dir;
        void * assets_path;
        struct function<void (const flutter::FrameTiming &)> frame_rasterized_callback;
        struct shared_ptr<const fml::Mapping> persistent_isolate_data;
        long long old_gen_heap_size;
        unsigned long long resource_cache_max_bytes_threshold;
        unsigned char msaa_samples;
        _Bool enable_embedder_api;
        _Bool use_aot_reload;
        void * update_path;
        _Bool bind_cpu_cores;
        _Bool enable_mmprofiler;
        _Bool enable_raster_profiling;
        void * update_assets_path;
        struct function<std::vector<std::unique_ptr<const fml::Mapping>>()> update_kernels;
        struct function<void (const char *, long)> isolate_report_callback;
        function_ffe40f9b dart_worker_thread_start_callback;
        struct function<void (const std::string &, long long, const std::string &)> anr_callback;
        struct function<void (const std::string &, long long, const std::vector<std::string>&, const std::string &)> slow_runner_report_callback;
    } _settings;
}

+ (id)defaultBundleIdentifier;
+ (id)lookupKeyForAsset:(id)arg1 fromPackage:(id)arg2 fromBundle:(id)arg3;
+ (id)lookupKeyForAsset:(id)arg1 fromPackage:(id)arg2;
+ (id)lookupKeyForAsset:(id)arg1 fromBundle:(id)arg2;
+ (id)lookupKeyForAsset:(id)arg1;
+ (_Bool)allowsArbitraryLoads:(id)arg1;
+ (id)domainNetworkPolicy:(id)arg1;
+ (id)flutterAssetsName:(id)arg1;
@property(readonly, nonatomic) _Bool isImpellerEnabled;
@property(readonly, nonatomic) _Bool isWideGamutEnabled;
- (struct RunConfiguration)runConfigurationForEntrypoint:(id)arg1 libraryOrNil:(id)arg2 entrypointArgs:(id)arg3;
- (struct RunConfiguration)runConfigurationForEntrypoint:(id)arg1 libraryOrNil:(id)arg2;
- (struct RunConfiguration)runConfigurationForEntrypoint:(id)arg1;
- (struct RunConfiguration)runConfiguration;
- (const void *)settings;
- (struct PlatformData)defaultPlatformData;
- (id)initWithSettings:(const void *)arg1;
- (id)initWithPrecompiledDartBundle:(id)arg1;
- (id)initWithArgs:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSArray *dartEntrypointArguments; // @dynamic dartEntrypointArguments;

@end

