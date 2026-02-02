//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel;

@interface WXGRoamHalfNotifyView
{
    CDUnknownBlockType _buttonBlock;
    unsigned long long _curPackageId;
    UILabel *_subTitle;
    UILabel *_title;
    UIButton *_scanBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *scanBtn; // @synthesize scanBtn=_scanBtn;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) unsigned long long curPackageId; // @synthesize curPackageId=_curPackageId;
@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
- (void)onRoamBackupPackageServiceStartTask:(unsigned long long)arg1;
- (void)tapButton;
- (void)updateUSBTipsView;
- (void)setupDotTipsView;
- (id)initWithDetailHeight:(double)arg1 navLeftStyle:(unsigned int)arg2 iconName:(id)arg3 iconSize:(struct CGSize)arg4 iconColor:(id)arg5 title:(id)arg6 subTitle:(id)arg7 buttonType:(unsigned long long)arg8 buttonTitle:(id)arg9 buttonBlock:(CDUnknownBlockType)arg10;
- (id)initWithDetailHeight:(double)arg1 navLeftStyle:(unsigned int)arg2 iconName:(id)arg3 iconColor:(id)arg4 title:(id)arg5 subTitle:(id)arg6 buttonType:(unsigned long long)arg7 buttonTitle:(id)arg8 buttonBlock:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

