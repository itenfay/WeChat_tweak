//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SettingAlertLoginView
{
    NSString *_tipString;
    NSString *_titleString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) NSString *tipString; // @synthesize tipString=_tipString;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)setupDetailView;
- (id)initForAlertLogin;
- (id)initForAlertWin;
- (id)initForAlertMac;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

