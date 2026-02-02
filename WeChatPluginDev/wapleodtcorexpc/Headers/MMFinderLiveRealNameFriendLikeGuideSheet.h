//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMUIButton, UIButton, UIImageView, UILabel, UIView;

@interface MMFinderLiveRealNameFriendLikeGuideSheet
{
    UIButton *_actionButton;
    MMUIButton *_cancelRecommendButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_previewContainerView;
    UIImageView *_previewImageView;
    UIView *_fakeCellContainerView;
    UIImageView *_fakeCellLogoImageView;
    UILabel *_fakeCellTitleLabel;
    MMHeadImageView *_fakeCellHeaderImageView;
    UIView *_fakeCellHeaderReddotView;
    UILabel *_fakeCellNickNameLabel;
    UIImageView *_fakeCellLikeImageView;
    UIImageView *_fakeCellArrowView;
    CDUnknownBlockType _cancelRecommendBlock;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _disAppearAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType disAppearAction; // @synthesize disAppearAction=_disAppearAction;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelRecommendBlock; // @synthesize cancelRecommendBlock=_cancelRecommendBlock;
@property(retain, nonatomic) UIImageView *fakeCellArrowView; // @synthesize fakeCellArrowView=_fakeCellArrowView;
@property(retain, nonatomic) UIImageView *fakeCellLikeImageView; // @synthesize fakeCellLikeImageView=_fakeCellLikeImageView;
@property(retain, nonatomic) UILabel *fakeCellNickNameLabel; // @synthesize fakeCellNickNameLabel=_fakeCellNickNameLabel;
@property(retain, nonatomic) UIView *fakeCellHeaderReddotView; // @synthesize fakeCellHeaderReddotView=_fakeCellHeaderReddotView;
@property(retain, nonatomic) MMHeadImageView *fakeCellHeaderImageView; // @synthesize fakeCellHeaderImageView=_fakeCellHeaderImageView;
@property(retain, nonatomic) UILabel *fakeCellTitleLabel; // @synthesize fakeCellTitleLabel=_fakeCellTitleLabel;
@property(retain, nonatomic) UIImageView *fakeCellLogoImageView; // @synthesize fakeCellLogoImageView=_fakeCellLogoImageView;
@property(retain, nonatomic) UIView *fakeCellContainerView; // @synthesize fakeCellContainerView=_fakeCellContainerView;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) UIView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *cancelRecommendButton; // @synthesize cancelRecommendButton=_cancelRecommendButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)layoutPreview;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithTaskId:(id)arg1 cancelRecommendBlock:(CDUnknownBlockType)arg2 confirmBlock:(CDUnknownBlockType)arg3 disAppearAction:(CDUnknownBlockType)arg4;

@end

