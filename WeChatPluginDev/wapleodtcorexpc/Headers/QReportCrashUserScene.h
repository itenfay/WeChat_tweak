//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QReportCrashUserScene : NSObject
{
    NSString *_scene_name;
    NSString *_session_uuid;
    NSString *_user_id;
    NSString *_device_id;
    NSString *_map_key;
    NSString *_nav_key;
    NSString *_map_version;
    NSString *_nav_version;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nav_version; // @synthesize nav_version=_nav_version;
@property(copy, nonatomic) NSString *map_version; // @synthesize map_version=_map_version;
@property(copy, nonatomic) NSString *nav_key; // @synthesize nav_key=_nav_key;
@property(copy, nonatomic) NSString *map_key; // @synthesize map_key=_map_key;
@property(copy, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *session_uuid; // @synthesize session_uuid=_session_uuid;
@property(copy, nonatomic) NSString *scene_name; // @synthesize scene_name=_scene_name;

@end

