//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppCommunicateData, NSString, ShareMessageConfirmLogicHelper;
@protocol OnGotAppMsgHandleDelegate;

@interface OnGotAppMsgHandler
{
    NSString *m_nsAppid;
    AppCommunicateData *m_appData;
    ShareMessageConfirmLogicHelper *_confirmHelper;
    id <OnGotAppMsgHandleDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <OnGotAppMsgHandleDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageOK:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)removeConfirmView;
- (void)jumpToMessageContentViewAndConfirm;
- (void)createConfirmView;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (void)cancelGotAppMsg;
- (void)onGotAppMsg:(id)arg1 withData:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

