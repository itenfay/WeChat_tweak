//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppDynamicModuleCallback, NSString, UIViewController;

@interface LiteAppDebugPannelModule : NSObject
{
    LiteAppDynamicModuleCallback *_callback;
}

+ (id)liteapp_export_method_sync_33;
+ (id)liteapp_export_method_sync_32;
+ (id)liteapp_export_method_sync_31;
- (void).cxx_destruct;
@property(retain, nonatomic) LiteAppDynamicModuleCallback *callback;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"LiteAppDynamicModuleCallback",?,&,N

- (_Bool)removeLiteApp:(id)arg1;
- (id)getLiteAppConfigList;
- (id)getLiteAppList;

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

