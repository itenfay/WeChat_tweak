//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMSUserBehaviorMgr
{
}

- (void)reportChatScreenshot:(id)arg1;
- (void)didPaidOrderDetailTakeScreenshot:(id)arg1;
- (void)didChatTakeScreenshot:(id)arg1;
- (void)didWebTakeScreenshot:(id)arg1 viewController:(id)arg2;
- (void)didTakeScreenshot:(id)arg1;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

