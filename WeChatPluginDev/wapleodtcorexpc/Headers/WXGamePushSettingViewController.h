//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, SwitchBlockList, UILabel, WXGameGetUserSwitchCGI, WXGameSetUserSwitchCGI;

@interface WXGamePushSettingViewController
{
    MMTableViewInfo *m_tableViewInfo;
    WXGameGetUserSwitchCGI *_getUserSwitchCGI;
    WXGameSetUserSwitchCGI *_setUserSwitchCGI;
    SwitchBlockList *_userSwitchBlockList;
    UILabel *_errorLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) SwitchBlockList *userSwitchBlockList; // @synthesize userSwitchBlockList=_userSwitchBlockList;
@property(retain, nonatomic) WXGameSetUserSwitchCGI *setUserSwitchCGI; // @synthesize setUserSwitchCGI=_setUserSwitchCGI;
@property(retain, nonatomic) WXGameGetUserSwitchCGI *getUserSwitchCGI; // @synthesize getUserSwitchCGI=_getUserSwitchCGI;
- (double)labelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
- (void)setUserSwitchCGI:(id)arg1 didFailWithError:(id)arg2;
- (void)setUserSwitchCGI:(id)arg1 didGetResponse:(id)arg2;
- (void)getUserSwitchCGI:(id)arg1 didFailWithError:(id)arg2;
- (void)getUserSwitchCGI:(id)arg1 didGetResponse:(id)arg2;
- (void)handleSetSwitched:(id)arg1 cellInfo:(id)arg2;
- (void)getUserSwitchInfo;
- (void)showError;
- (void)initTable;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

