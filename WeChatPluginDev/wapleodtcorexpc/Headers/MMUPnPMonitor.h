//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMUPnPMonitor
{
}

- (void)UPnPAction:(id)arg1 didCompleteTakingActionWithRecord:(id)arg2;
- (void)UPnPDevice:(id)arg1 didCompleteRequestingDescriptionWithRecord:(id)arg2;
- (void)reportEvent:(long long)arg1 withDevice:(id)arg2 action:(id)arg3 record:(id)arg4;
- (void)initMonitor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

