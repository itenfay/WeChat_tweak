//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, StrongNotificationViewController;
@protocol StrongNotificationExclusiveMsgLogicDelegate;

@interface StrongNotificationExclusiveMsgLogic
{
    StrongNotificationViewController *m_strongNotificationViewController;
    id <StrongNotificationExclusiveMsgLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StrongNotificationExclusiveMsgLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)closeStrongNotificationWithItemWithForcePushId:(id)arg1;
- (void)clearAllStrongNotificationItemAndMessageHiddenWindow;
- (id)p_getStrongNotificationViewController;
- (id)p_getExclusiveMsgQueue;
- (void)processMsg;
- (void)p_internalCheckMsgQueue;
- (void)onFromBackgroundToForeground;
- (_Bool)isWindowShowing;
- (void)checkMsgQueue;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

