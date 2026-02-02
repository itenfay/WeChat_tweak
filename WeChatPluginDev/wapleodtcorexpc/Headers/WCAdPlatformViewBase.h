//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdPlatformViewBase : NSObject
{
}

- (id)view;
- (void)handleJsEvent:(id)arg1 params:(id)arg2 needCallback:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

