//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppDynamicModuleCallback, NSDictionary, NSString, UIViewController;

@interface NativeRouteImpl : NSObject
{
    LiteAppDynamicModuleCallback *_callBack;
    UIViewController *_vc;
    NSDictionary *_option;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *option; // @synthesize option=_option;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) LiteAppDynamicModuleCallback *callBack; // @synthesize callBack=_callBack;
- (void)kindaCloseWebViewImpl:(_Bool)arg1 completion:(id)arg2;
- (void)kindaEndWithResult:(id)arg1 extraInfo:(id)arg2;
- (long long)kindaGetType;
- (void)nativeRoute:(id)arg1 currentVc:(id)arg2 resultCallback:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

