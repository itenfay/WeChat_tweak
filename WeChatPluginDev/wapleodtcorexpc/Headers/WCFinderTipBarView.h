//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView, WCFinderFeedContentVM;

@interface WCFinderTipBarView
{
    UILabel *_topTipsBarLabel;
    UIView *_rightTipView;
    UIImageView *_rightArrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(retain, nonatomic) UIView *rightTipView; // @synthesize rightTipView=_rightTipView;
@property(retain, nonatomic) UILabel *topTipsBarLabel; // @synthesize topTipsBarLabel=_topTipsBarLabel;
- (void)onClickTipBarView;
- (void)updateContentWithLeftTitle:(id)arg1 rightInfoView:(id)arg2 showRightArrow:(_Bool)arg3;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTipsBarText:(id)arg1 tipBarUIStyle:(unsigned long long)arg2;
- (void)updateTipsBarText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM;

@end

