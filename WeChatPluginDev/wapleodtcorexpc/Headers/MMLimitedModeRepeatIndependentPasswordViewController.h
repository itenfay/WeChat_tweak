//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLimitedModeSetIndependentPasswordViewController, MMLimitedModeSetPasswordLogic, NSString;

@interface MMLimitedModeRepeatIndependentPasswordViewController
{
    MMLimitedModeSetPasswordLogic *m_setPasswordLogic;
    NSString *_m_firsetInputPassword;
    MMLimitedModeSetIndependentPasswordViewController *_firstInputViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLimitedModeSetIndependentPasswordViewController *firstInputViewController; // @synthesize firstInputViewController=_firstInputViewController;
@property(retain, nonatomic) NSString *m_firsetInputPassword; // @synthesize m_firsetInputPassword=_m_firsetInputPassword;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(id)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)doInputFinishAction;
- (_Bool)isShowDesclabel;
- (_Bool)isShowGoToWechatPassWordButton;
- (id)getTitleLabelText;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int m_setLimitedModePwdType;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *ticket;

@end

