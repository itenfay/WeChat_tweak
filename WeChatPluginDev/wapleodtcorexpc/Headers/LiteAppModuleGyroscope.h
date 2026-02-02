//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppDynamicModuleCallback, NSString, UIViewController;

@interface LiteAppModuleGyroscope : NSObject
{
    LiteAppDynamicModuleCallback *_callback;
}

+ (id)liteapp_export_method_sync_31;
+ (id)liteapp_export_method_async_30;
+ (id)liteapp_export_method_sync_29;
+ (id)liteapp_export_method_sync_28;
- (void).cxx_destruct;
@property(retain, nonatomic) LiteAppDynamicModuleCallback *callback;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"LiteAppDynamicModuleCallback",?,&,N

- (long long)getSensorRefreshInterval:(long long)arg1;
- (_Bool)offGyroscopeChange;
- (_Bool)onGyroscopeChange;
- (_Bool)stopGyroscope;
- (_Bool)startGyroscope:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak UIViewController *viewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,W,N


@end

