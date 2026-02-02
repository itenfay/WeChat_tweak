//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, MMUILabel, UIScrollView, UIView;

@interface MMFinderLiveFeedHideNoticeTipView
{
    CDUnknownBlockType _actionBlock;
    UIScrollView *_scrollView;
    UIView *_contentView;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    MMUIButton *_actionButton;
    MMUIImageView *_tipImageView;
    long long _previousOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(retain, nonatomic) MMUIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)onFeedHideNoticeTipViewReport:(_Bool)arg1;
- (void)actionButtonClick;
- (double)showViewHeight;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)createUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pageSheetDidRotation;

@end

