//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, PAGView, UILabel;
@protocol WCFinderLongPressRateEduViewDelegate;

@interface WCFinderLongPressRateEduView : UIView
{
    double _tipsLabelMarginCenter;
    id <WCFinderLongPressRateEduViewDelegate> _delegate;
    UILabel *_tipsLabel;
    PAGView *_animationView;
    struct CGSize _layoutSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic) __weak id <WCFinderLongPressRateEduViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double tipsLabelMarginCenter; // @synthesize tipsLabelMarginCenter=_tipsLabelMarginCenter;
- (void)onAnimationEnd:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)animateToHideWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToShow;
- (id)initWithFrame:(struct CGRect)arg1 pathForResource:(id)arg2 tipsWording:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

