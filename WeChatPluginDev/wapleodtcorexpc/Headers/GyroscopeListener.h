//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMotionManager, LiteAppDynamicModuleCallback;

@interface GyroscopeListener : NSObject
{
    CMMotionManager *__manager;
    LiteAppDynamicModuleCallback *__callback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LiteAppDynamicModuleCallback *_callback; // @synthesize _callback=__callback;
@property(retain, nonatomic) CMMotionManager *_manager; // @synthesize _manager=__manager;

@end

