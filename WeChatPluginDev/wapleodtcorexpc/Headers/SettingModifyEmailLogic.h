//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol SettingModifyEmailLogicDelegate;

@interface SettingModifyEmailLogic
{
    NSString *m_unbindOKTip;
    id <SettingModifyEmailLogicDelegate> _delegate;
    CDUnknownBlockType _bindEmailBlock;
    CDUnknownBlockType _checkUnbindBlock;
    CDUnknownBlockType _unbindEmailBlock;
    CDUnknownBlockType _sendVerifyEmailBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sendVerifyEmailBlock; // @synthesize sendVerifyEmailBlock=_sendVerifyEmailBlock;
@property(copy, nonatomic) CDUnknownBlockType unbindEmailBlock; // @synthesize unbindEmailBlock=_unbindEmailBlock;
@property(copy, nonatomic) CDUnknownBlockType checkUnbindBlock; // @synthesize checkUnbindBlock=_checkUnbindBlock;
@property(copy, nonatomic) CDUnknownBlockType bindEmailBlock; // @synthesize bindEmailBlock=_bindEmailBlock;
@property(nonatomic) __weak id <SettingModifyEmailLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)CgiFail:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSendVerifyEmailResponse:(id)arg1;
- (void)onSetPwd;
- (void)handleCheckUnbindResponse:(id)arg1;
- (void)handleUnBindEmailResponse:(id)arg1;
- (void)handleBindEmailResponse:(id)arg1;
- (void)checkUnbind:(CDUnknownBlockType)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)sendVerifyEmail:(CDUnknownBlockType)arg1;
- (void)unbindEmail:(CDUnknownBlockType)arg1;
- (void)bindEmail:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

