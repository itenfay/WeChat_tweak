//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol LQTDepositPlanIndexlAfterManageDelegate;

@interface LQTDepositPlanIndexlAfterManage : NSObject
{
    id <LQTDepositPlanIndexlAfterManageDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <LQTDepositPlanIndexlAfterManageDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWCPayLQTDepositPlanIndexCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositPlanIndexCgiResponseOK:(id)arg1 fromServer:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

