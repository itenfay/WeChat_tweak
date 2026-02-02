//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderWindowProductImgButtonInfo, MMUILabel, UIImageView, UIView;

@interface MMFinderLiveGoodsPromotionReplayFloatView
{
    unsigned long long _uiType;
    CDUnknownBlockType _replayFloatViewDidClickedBlock;
    UIImageView *_iconView;
    MMUILabel *_descriptionLabel;
    UIView *_maskView;
    FinderWindowProductImgButtonInfo *_imageButtonStatus;
}

- (void).cxx_destruct;
@property(nonatomic) FinderWindowProductImgButtonInfo *imageButtonStatus; // @synthesize imageButtonStatus=_imageButtonStatus;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType replayFloatViewDidClickedBlock; // @synthesize replayFloatViewDidClickedBlock=_replayFloatViewDidClickedBlock;
@property(nonatomic) unsigned long long uiType; // @synthesize uiType=_uiType;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTapInside:(id)arg1;
- (void)updateWithImageButtonStatus:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

