//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppDynamicModuleCallback, NSDictionary, UIViewController;

@interface RealNameVerifyImpl : NSObject
{
    LiteAppDynamicModuleCallback *_callBack;
    UIViewController *_vc;
    NSDictionary *_option;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *option; // @synthesize option=_option;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) LiteAppDynamicModuleCallback *callBack; // @synthesize callBack=_callBack;
- (void)dealloc;
- (void)handleCancelNotification:(id)arg1;
- (void)handleSuccessNotification:(id)arg1;
- (void)startRealNameVerify:(id)arg1 currentVc:(id)arg2 resultCallback:(id)arg3;

@end

