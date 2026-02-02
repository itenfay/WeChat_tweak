//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel;

@interface MMFinderLiveMultiCouponSenderView
{
    UIButton *_actionButton;
    UILabel *_countLabel;
    UILabel *_platformLabel;
}

+ (id)countWordingForCoupon:(id)arg1;
+ (double)preferHeightForCoupon:(id)arg1 width:(double)arg2;
+ (id)countWordingFont;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *platformLabel; // @synthesize platformLabel=_platformLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)setActionButtonHidden:(_Bool)arg1;
- (void)setContainerColor;
- (void)setActionButtonWithStatus:(int)arg1;
- (void)fillWithCouponItem:(id)arg1;
- (void)onActionButtonClicked;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

