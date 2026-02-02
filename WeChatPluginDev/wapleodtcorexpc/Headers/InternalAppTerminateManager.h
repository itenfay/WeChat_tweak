//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface InternalAppTerminateManager : NSObject
{
    struct list<liteav::LogUploaderInterface::InstanceInfo, std::allocator<liteav::LogUploaderInterface::InstanceInfo>> _instance_info_list;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onAppTerminate;
- (void)deleteInstanceInfo:(unsigned int)arg1 roomId:(const void *)arg2 userId:(const void *)arg3 strRole:(const void *)arg4;
- (void)saveInstanceInfo:(unsigned int)arg1 roomId:(const void *)arg2 userId:(const void *)arg3 strRole:(const void *)arg4;
- (id)init;

@end

