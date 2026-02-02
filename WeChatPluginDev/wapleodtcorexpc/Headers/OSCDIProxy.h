//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class NSMapTable, NSString;

@interface OSCDIProxy : NSProxy
{
    NSMapTable *_objectsByProtocolName;
    NSMapTable *_targetsByActionName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *targetsByActionName; // @synthesize targetsByActionName=_targetsByActionName;
@property(retain, nonatomic) NSMapTable *objectsByProtocolName; // @synthesize objectsByProtocolName=_objectsByProtocolName;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)injectedObjectForProtocol:(id)arg1;
- (void)injectDependencyTarget:(id)arg1 forAction:(SEL)arg2;
- (void)injectDependencyObject:(id)arg1 forProtocol:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

