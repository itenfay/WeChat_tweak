//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class NSObject, NSString, UIWindow;

@interface MMProxySceneDelegate : NSProxy
{
    NSObject *_target;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *target; // @synthesize target=_target;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)isProxy;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindow",?,&,N


@end

