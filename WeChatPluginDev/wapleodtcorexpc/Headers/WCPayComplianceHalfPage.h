//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayComplianceHalfPage : NSObject
{
    CDUnknownBlockType _actionHandler;
    long long _sessionId;
}

+ (id)showWithPbData:(id)arg1 closedActionHandler:(CDUnknownBlockType)arg2;
+ (id)showWithData:(id)arg1 closedActionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)call:(id)arg1;
- (void)close;
- (void)show:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

