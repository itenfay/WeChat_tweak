//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTFinderItemBackgroundImageView, BTFinderItemCoverContainerView, BTFinderItemHeaderContainerView, BTFinderItemViewModel, MMUIButton, MMUILabel, MMWebImageView, NSString, RichTextView, SightIconView, UIImageView, WCFinderTagView;

@interface BTFixedFinderBaseItemView
{
    BTFinderItemViewModel *_viewModel;
    MMWebImageView *_coverImageView;
    RichTextView *_titleTextView;
    BTFinderItemBackgroundImageView *_backgroundCoverImageView;
    SightIconView *_playIconView;
    MMUILabel *_digestLabel;
    MMUILabel *_timeLabel;
    MMUIButton *_feedbackBtn;
    UIImageView *_timeLabelBackgroundImageView;
    CDUnknownBlockType _onClickCoverAreaBlock;
    CDUnknownBlockType _onLongClickCoverAreaBlock;
    CDUnknownBlockType _onClickInfoAreaBlock;
    CDUnknownBlockType _onLongClickInfoAreaBlock;
    CDUnknownBlockType _onClickFeedbackBtnBlock;
    BTFinderItemHeaderContainerView *_headerContainerView;
    MMWebImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIImageView *_finderImageView;
    BTFinderItemCoverContainerView *_coverContainerView;
    MMUILabel *_createTimeLabel;
    WCFinderTagView *_membershipTagView;
    MMUILabel *_recommendTipLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *recommendTipLabel; // @synthesize recommendTipLabel=_recommendTipLabel;
@property(retain, nonatomic) WCFinderTagView *membershipTagView; // @synthesize membershipTagView=_membershipTagView;
@property(retain, nonatomic) MMUILabel *createTimeLabel; // @synthesize createTimeLabel=_createTimeLabel;
@property(retain, nonatomic) BTFinderItemCoverContainerView *coverContainerView; // @synthesize coverContainerView=_coverContainerView;
@property(retain, nonatomic) UIImageView *finderImageView; // @synthesize finderImageView=_finderImageView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) BTFinderItemHeaderContainerView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(copy, nonatomic) CDUnknownBlockType onClickFeedbackBtnBlock; // @synthesize onClickFeedbackBtnBlock=_onClickFeedbackBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType onLongClickInfoAreaBlock; // @synthesize onLongClickInfoAreaBlock=_onLongClickInfoAreaBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickInfoAreaBlock; // @synthesize onClickInfoAreaBlock=_onClickInfoAreaBlock;
@property(copy, nonatomic) CDUnknownBlockType onLongClickCoverAreaBlock; // @synthesize onLongClickCoverAreaBlock=_onLongClickCoverAreaBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickCoverAreaBlock; // @synthesize onClickCoverAreaBlock=_onClickCoverAreaBlock;
@property(retain, nonatomic) UIImageView *timeLabelBackgroundImageView; // @synthesize timeLabelBackgroundImageView=_timeLabelBackgroundImageView;
@property(retain, nonatomic) MMUIButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *digestLabel; // @synthesize digestLabel=_digestLabel;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) BTFinderItemBackgroundImageView *backgroundCoverImageView; // @synthesize backgroundCoverImageView=_backgroundCoverImageView;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) BTFinderItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)doShareAnimation;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onLongClickContentArea;
- (void)onClickContentArea;
- (void)onLongClickInfoArea;
- (void)onClickInfoArea;
- (void)onClickFeedbackBtn;
- (double)getExpectedWHRatio;
- (void)onLoadCoverImage:(id)arg1;
- (void)layoutSubviews;
- (void)layoutCoverContainerView:(id)arg1;
- (void)layoutHeader;
- (void)layoutTitleTextView;
- (void)loadData:(_Bool)arg1;
- (void)setupSubviews;
- (id)getContentView;
- (struct CGRect)getContentAreaFrame;
- (struct CGRect)getInfoAreaFrame;
- (void)setContentAreaHighlight:(_Bool)arg1;
- (void)setInfoAreaHighlight:(_Bool)arg1;
- (void)setupCoverContainer:(id)arg1;
- (void)setHeaderContainerViewToOpaque;
- (void)setupHeader:(id)arg1;
- (void)updateWithItemViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 itemViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

