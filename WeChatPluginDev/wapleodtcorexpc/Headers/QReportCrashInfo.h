//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSException, NSString;

@interface QReportCrashInfo : NSObject
{
    int _source;
    int _crash_category;
    int _crash_type;
    NSString *_package_name;
    NSString *_process;
    NSString *_thread;
    NSString *_message;
    NSString *_crash_address;
    NSException *_stack_trace;
    NSString *_extra_message;
    NSString *_crash_sub_type;
    NSString *_module_name;
    NSString *_scene;
    long long _duration;
    long long _crash_time;
    NSString *_crash_uuid;
    NSString *_user_id;
    NSString *_device_id;
    NSString *_map_key;
    NSString *_nav_key;
    NSString *_map_version;
    NSString *_nav_version;
    NSString *_ext;
    NSString *_session_uuid;
    NSString *_os_version;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *os_version; // @synthesize os_version=_os_version;
@property(copy, nonatomic) NSString *session_uuid; // @synthesize session_uuid=_session_uuid;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *nav_version; // @synthesize nav_version=_nav_version;
@property(copy, nonatomic) NSString *map_version; // @synthesize map_version=_map_version;
@property(copy, nonatomic) NSString *nav_key; // @synthesize nav_key=_nav_key;
@property(copy, nonatomic) NSString *map_key; // @synthesize map_key=_map_key;
@property(copy, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *crash_uuid; // @synthesize crash_uuid=_crash_uuid;
@property(nonatomic) long long crash_time; // @synthesize crash_time=_crash_time;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *module_name; // @synthesize module_name=_module_name;
@property(copy, nonatomic) NSString *crash_sub_type; // @synthesize crash_sub_type=_crash_sub_type;
@property(nonatomic) int crash_type; // @synthesize crash_type=_crash_type;
@property(nonatomic) int crash_category; // @synthesize crash_category=_crash_category;
@property(copy, nonatomic) NSString *extra_message; // @synthesize extra_message=_extra_message;
@property(copy, nonatomic) NSException *stack_trace; // @synthesize stack_trace=_stack_trace;
@property(copy, nonatomic) NSString *crash_address; // @synthesize crash_address=_crash_address;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *thread; // @synthesize thread=_thread;
@property(copy, nonatomic) NSString *process; // @synthesize process=_process;
@property(copy, nonatomic) NSString *package_name; // @synthesize package_name=_package_name;
@property(nonatomic) int source; // @synthesize source=_source;

@end

