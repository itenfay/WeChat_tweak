//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMFinderLiveAnchorCustomizeRewardImageOptionContentView, MMFinderLiveAnchorCustomizeRewardStyleSelectLogic, MMFinderLiveAnchorCustomizeRewardTextOptionContentView, NSArray, UIView;

@interface MMFinderLiveAnchorCustomizeRewardStyleSelectPanelOptionsView : UIScrollView
{
    MMFinderLiveAnchorCustomizeRewardStyleSelectLogic *_logic;
    NSArray *_contentSubViewArray;
    UIView *_contentView;
    MMFinderLiveAnchorCustomizeRewardImageOptionContentView *_colorOptionView;
    MMFinderLiveAnchorCustomizeRewardTextOptionContentView *_textOptionView;
    MMFinderLiveAnchorCustomizeRewardImageOptionContentView *_imageOptionView;
    long long _curSubviewIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long curSubviewIndex; // @synthesize curSubviewIndex=_curSubviewIndex;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardImageOptionContentView *imageOptionView; // @synthesize imageOptionView=_imageOptionView;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardTextOptionContentView *textOptionView; // @synthesize textOptionView=_textOptionView;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardImageOptionContentView *colorOptionView; // @synthesize colorOptionView=_colorOptionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *contentSubViewArray; // @synthesize contentSubViewArray=_contentSubViewArray;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectLogic *logic; // @synthesize logic=_logic;
@property(readonly, nonatomic) double currentContainerPerferHeight;
- (void)refreshImageOptionViewData;
- (void)refreshTextOptionViewData;
- (void)refreshColorOptionViewData;
- (double)calcContentSubViewLeftAtIndex:(long long)arg1;
- (void)checkIsNeedSelectImageWhenCurTabIsImageView;
- (void)setSubviewDisplayAtIndex:(long long)arg1;
- (void)refreshCurViewData;
- (void)layoutSubviews;
- (void)initImageOptionView;
- (void)initTextOptionView;
- (void)initColorOptionView;
- (void)initContentView;
- (id)initWithStyleSelectLogic:(id)arg1;

@end

