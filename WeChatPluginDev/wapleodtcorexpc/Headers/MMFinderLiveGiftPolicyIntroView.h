//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLegalPromotConfig, NSString, RichTextView, UIButton, UILabel, UIView;

@interface MMFinderLiveGiftPolicyIntroView
{
    RichTextView *_introDetailLabel;
    UIView *_contentView;
    UILabel *_introTitleLabel;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    CDUnknownBlockType _actionBlock;
    MMFinderLiveLegalPromotConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLegalPromotConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *introTitleLabel; // @synthesize introTitleLabel=_introTitleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) RichTextView *introDetailLabel; // @synthesize introDetailLabel=_introDetailLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (void)updateIntroDetailLabel;
- (void)updateIntroTitleLabel;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

