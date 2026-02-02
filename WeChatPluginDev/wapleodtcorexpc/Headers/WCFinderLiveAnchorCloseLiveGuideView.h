//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveSyncAnchorCloseLiveGuideInfoResp, MMUIButton, NSString, RichTextView, UIView;

@interface WCFinderLiveAnchorCloseLiveGuideView
{
    CDUnknownBlockType _closeLiveGuideBlock;
    CDUnknownBlockType _learnMoreBlock;
    FinderLiveSyncAnchorCloseLiveGuideInfoResp *_guideInfo;
    UIView *_contentView;
    RichTextView *_titleLabel;
    MMUIButton *_continueButton;
    MMUIButton *_closeLiveButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeLiveButton; // @synthesize closeLiveButton=_closeLiveButton;
@property(retain, nonatomic) MMUIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) RichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) FinderLiveSyncAnchorCloseLiveGuideInfoResp *guideInfo; // @synthesize guideInfo=_guideInfo;
@property(copy, nonatomic) CDUnknownBlockType learnMoreBlock; // @synthesize learnMoreBlock=_learnMoreBlock;
@property(copy, nonatomic) CDUnknownBlockType closeLiveGuideBlock; // @synthesize closeLiveGuideBlock=_closeLiveGuideBlock;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)continueButtonClick;
- (void)closeLiveButtonClick;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithGuideInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

