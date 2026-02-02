//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveBannerCellViewModel, MMFinderLiveBannerInfo, MMWebImageView, NSString, UIButton, UIImageView, UILabel;

@interface WCFinderLiveBannerBaseCell : UICollectionViewCell
{
    _Bool _isScrollAnimating;
    MMFinderLiveBannerCellViewModel *_bannerVM;
    CDUnknownBlockType _viewEventAction;
    MMWebImageView *_bgView;
    UILabel *_titleLabel;
    UIImageView *_arrowView;
    UIButton *_button;
}

+ (struct CGSize)viewSizeByDataModel:(id)arg1 hostView:(id)arg2;
+ (struct CGSize)bannerSizeByInfo:(id)arg1;
+ (long long)titleWidthByInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool isScrollAnimating; // @synthesize isScrollAnimating=_isScrollAnimating;
@property(copy, nonatomic) CDUnknownBlockType viewEventAction; // @synthesize viewEventAction=_viewEventAction;
@property(retain, nonatomic) MMFinderLiveBannerCellViewModel *bannerVM; // @synthesize bannerVM=_bannerVM;
- (void)forceStopPagAnimation;
- (_Bool)showDeleteAnimationWithCompleteAction:(CDUnknownBlockType)arg1;
- (void)stopScrollAnimation;
- (void)startScrollAnimation:(_Bool)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) MMFinderLiveBannerInfo *bannerInfo;
- (void)onButtonLongPress;
- (void)setupUIIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

