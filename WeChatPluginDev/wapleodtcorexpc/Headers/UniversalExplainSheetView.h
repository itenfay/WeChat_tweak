//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton;

@interface UniversalExplainSheetView
{
    UIButton *_settingButton;
    NSString *_title;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
- (void)onTapSettingRing;
- (void)initView;
- (void)initPageSheet;
- (id)initWithTitle:(id)arg1 desc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

