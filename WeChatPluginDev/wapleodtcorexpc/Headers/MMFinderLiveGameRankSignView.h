//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, FinderLiveBadgeInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveGameRankSignView : UIView
{
    _Bool _isCustomizedAccessibilityLabel;
    unsigned int _rank;
    FinderLiveBadgeInfo *_badgeInfo;
    long long _uiStyle;
    long long _uiMode;
    MMWebImageView *_rankImgView;
    MMUILabel *_signLabel;
    CAGradientLayer *_gradientLayer;
    CALayer *_colorLayer;
    double _currentLayoutFontScale;
}

+ (double)insetTopForStyle:(long long)arg1;
+ (double)fixHeightForStyle:(long long)arg1;
+ (double)insetRightForStyle:(long long)arg1;
+ (double)insetLeftForStyle:(long long)arg1;
+ (double)signIconHeightForStyle:(long long)arg1;
+ (double)signIconWidthForStyle:(long long)arg1;
+ (id)signLabelFontForStyle:(long long)arg1;
+ (struct CGSize)getGameRankSizeWithRank:(id)arg1 uiStyle:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) double currentLayoutFontScale; // @synthesize currentLayoutFontScale=_currentLayoutFontScale;
@property(retain, nonatomic) CALayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) MMWebImageView *rankImgView; // @synthesize rankImgView=_rankImgView;
@property(nonatomic) long long uiMode; // @synthesize uiMode=_uiMode;
@property(nonatomic) long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(retain, nonatomic) FinderLiveBadgeInfo *badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(nonatomic) _Bool isCustomizedAccessibilityLabel; // @synthesize isCustomizedAccessibilityLabel=_isCustomizedAccessibilityLabel;
- (id)getSignTextColor;
- (void)updateSelfSize;
- (void)initDefaultLayoutFontScale;
- (_Bool)isSameBadgeInfo:(id)arg1;
- (id)accessibilityLabel;
- (void)refresh;
- (void)updateLayoutFontScale;
- (void)updateBadgeInfo:(id)arg1;
- (void)updateUIStyle:(long long)arg1;
- (void)layoutSignLabel;
- (void)layoutRankImgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2;

@end

