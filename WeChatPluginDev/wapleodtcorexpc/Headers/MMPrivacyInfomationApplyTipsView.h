//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPrivacyInfomationApplyTipsViewConfig, NSString;

@interface MMPrivacyInfomationApplyTipsView
{
    MMPrivacyInfomationApplyTipsViewConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPrivacyInfomationApplyTipsViewConfig *config; // @synthesize config=_config;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)viewDidLoad;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

