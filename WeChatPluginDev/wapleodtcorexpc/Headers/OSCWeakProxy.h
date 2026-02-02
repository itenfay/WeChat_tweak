//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class Protocol;

@interface OSCWeakProxy : NSProxy
{
    Protocol *_protocol;
    id _target;
}

+ (id)proxyWithTarget:(id)arg1 protocol:(id)arg2;
+ (id)proxyWithTarget:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (id)initWithTarget:(id)arg1;

@end

