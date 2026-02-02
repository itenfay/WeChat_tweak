//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMPageSheetConfig, MMPageSheetProgressiveAnimationView, MMPageSheetProgressiveDragView, MMUIButton, NSArray, UIImageView, UILabel, UIStackView;
@protocol MMPageSheetNavigationBarDelegate;

@interface MMPageSheetNavigationBar : UIView
{
    _Bool _isChildPage;
    _Bool _preferredCenterAlignment;
    _Bool _isTranslucent;
    _Bool _isNavAddDragDown;
    id <MMPageSheetNavigationBarDelegate> _delegate;
    MMPageSheetConfig *_config;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MMUIButton *_dragDownButton;
    UIImageView *_iconImageView;
    UIView *_leftNavButton;
    UIView *_rightNavButton;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    UIView *_customTitleView;
    UIView *_titleRightIconView;
    UIStackView *_leftButtonStackView;
    UIStackView *_rightButtonStackView;
    UIView *_navSepLine;
    MMPageSheetProgressiveDragView *_progressiveDragDownView;
    MMPageSheetProgressiveAnimationView *_progressiveStickDragDownView;
    long long _navType;
    double _leftSideLeftMargin;
    double _titleOffset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNavAddDragDown; // @synthesize isNavAddDragDown=_isNavAddDragDown;
@property(nonatomic) double titleOffset; // @synthesize titleOffset=_titleOffset;
@property(nonatomic) double leftSideLeftMargin; // @synthesize leftSideLeftMargin=_leftSideLeftMargin;
@property(nonatomic) _Bool isTranslucent; // @synthesize isTranslucent=_isTranslucent;
@property(nonatomic) _Bool preferredCenterAlignment; // @synthesize preferredCenterAlignment=_preferredCenterAlignment;
@property(nonatomic) long long navType; // @synthesize navType=_navType;
@property(retain, nonatomic) MMPageSheetProgressiveAnimationView *progressiveStickDragDownView; // @synthesize progressiveStickDragDownView=_progressiveStickDragDownView;
@property(retain, nonatomic) MMPageSheetProgressiveDragView *progressiveDragDownView; // @synthesize progressiveDragDownView=_progressiveDragDownView;
@property(retain, nonatomic) UIView *navSepLine; // @synthesize navSepLine=_navSepLine;
@property(retain, nonatomic) UIStackView *rightButtonStackView; // @synthesize rightButtonStackView=_rightButtonStackView;
@property(retain, nonatomic) UIStackView *leftButtonStackView; // @synthesize leftButtonStackView=_leftButtonStackView;
@property(retain, nonatomic) UIView *titleRightIconView; // @synthesize titleRightIconView=_titleRightIconView;
@property(retain, nonatomic) UIView *customTitleView; // @synthesize customTitleView=_customTitleView;
@property(retain, nonatomic) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(retain, nonatomic) NSArray *leftBarButtonItems; // @synthesize leftBarButtonItems=_leftBarButtonItems;
@property(retain, nonatomic) UIView *rightNavButton; // @synthesize rightNavButton=_rightNavButton;
@property(retain, nonatomic) UIView *leftNavButton; // @synthesize leftNavButton=_leftNavButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUIButton *dragDownButton; // @synthesize dragDownButton=_dragDownButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMPageSheetConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isChildPage; // @synthesize isChildPage=_isChildPage;
@property(nonatomic) __weak id <MMPageSheetNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fixSizeAndAddArrangedSubview:(id)arg1 onStackView:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onPageSheetDragToDismissOffset:(double)arg1 animated:(_Bool)arg2;
- (void)onPageSheetDragToDismissOffset:(double)arg1;
- (void)onPageSheetDidAppear;
- (void)applyGradientMaskToLabel:(id)arg1;
- (id)makeBackButtonWithImageColor:(id)arg1;
- (id)makeCloseButtonWithImageColor:(id)arg1 style:(unsigned int)arg2;
- (void)clickDragDownButton:(id)arg1;
- (void)clickCloseButton:(id)arg1;
- (void)layoutSubviews;
- (void)buttonDidGetReleased:(id)arg1;
- (void)buttonDidGetPressed:(id)arg1;
- (void)addPressedEventsForButton:(id)arg1;
- (id)extractConstrainedCsutomViewFromButtonItem:(id)arg1;
- (void)updateConfig:(id)arg1 isChildPage:(_Bool)arg2;

@end

