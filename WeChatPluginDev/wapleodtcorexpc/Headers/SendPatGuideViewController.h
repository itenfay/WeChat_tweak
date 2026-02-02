//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton;

@interface SendPatGuideViewController
{
    unsigned long long _guideType;
    CDUnknownBlockType _dismissBlock;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) unsigned long long guideType; // @synthesize guideType=_guideType;
- (void)showWithAnimated:(_Bool)arg1;
- (void)onTapConfirmButton;
- (void)updateDetailViewLayout:(id)arg1;
- (void)updateContent;
- (void)configDetailView;
- (void)viewDidTransitionToNewSize;
- (void)configPageSheet;
- (void)viewDidLoad;

@end

