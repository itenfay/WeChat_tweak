//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTLiveBarItemViewModel, CAGradientLayer, MMHeadImageView, MMUILabel, MMWebImageView, NSString, UIView;

@interface BTLiveBarItemView
{
    unsigned int _index;
    BTLiveBarItemViewModel *_itemViewModel;
    UIView *_containerView;
    MMHeadImageView *_headImageView;
    MMUILabel *_brandNameLabel;
    UIView *_headImageBorderView;
    MMWebImageView *_liveImageView;
    CAGradientLayer *_mainColorGradientLayer;
    CAGradientLayer *_shadowGradientLayer;
}

+ (double)iconWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *shadowGradientLayer; // @synthesize shadowGradientLayer=_shadowGradientLayer;
@property(retain, nonatomic) CAGradientLayer *mainColorGradientLayer; // @synthesize mainColorGradientLayer=_mainColorGradientLayer;
@property(retain, nonatomic) MMWebImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) UIView *headImageBorderView; // @synthesize headImageBorderView=_headImageBorderView;
@property(retain, nonatomic) MMUILabel *brandNameLabel; // @synthesize brandNameLabel=_brandNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) BTLiveBarItemViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
- (void)onLoadImageOK:(id)arg1;
- (void)layoutSubviews;
- (void)updateHeaderView;
- (void)initSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

