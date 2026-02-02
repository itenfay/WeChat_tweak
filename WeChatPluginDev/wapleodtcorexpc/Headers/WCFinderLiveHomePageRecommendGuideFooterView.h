//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UILabel, UIView, WCFinderLiveStreamJumpModel;
@protocol WCFinderLiveHomePageRecommendGuideFooterViewDelegate;

@interface WCFinderLiveHomePageRecommendGuideFooterView : UICollectionReusableView
{
    id <WCFinderLiveHomePageRecommendGuideFooterViewDelegate> _delegate;
    WCFinderLiveStreamJumpModel *_jumpModel;
    UIView *_scrollLabelContainer;
    UILabel *_swipeEducationLabel;
    UIImageView *_labelArrowView;
}

+ (double)footerWidth;
+ (id)footerIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *labelArrowView; // @synthesize labelArrowView=_labelArrowView;
@property(retain, nonatomic) UILabel *swipeEducationLabel; // @synthesize swipeEducationLabel=_swipeEducationLabel;
@property(retain, nonatomic) UIView *scrollLabelContainer; // @synthesize scrollLabelContainer=_scrollLabelContainer;
@property(retain, nonatomic) WCFinderLiveStreamJumpModel *jumpModel; // @synthesize jumpModel=_jumpModel;
@property(nonatomic) __weak id <WCFinderLiveHomePageRecommendGuideFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onScrollEducationAction:(id)arg1;
- (id)accessibilityLabel;
- (void)initView;
- (void)layoutUI;
- (void)updateWithJumpModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

