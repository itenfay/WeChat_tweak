//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMBadgeView, UIButton;

@interface MMBarItemCustomView : UIView
{
    _Bool _showRedDot;
    long long _badgeValue;
    long long _alignBadgRightMargin;
    MMBadgeView *_badgeView;
    UIButton *_barButton;
    struct UIEdgeInsets _extendTouchEdges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *barButton; // @synthesize barButton=_barButton;
@property(nonatomic) struct UIEdgeInsets extendTouchEdges; // @synthesize extendTouchEdges=_extendTouchEdges;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) long long alignBadgRightMargin; // @synthesize alignBadgRightMargin=_alignBadgRightMargin;
@property(nonatomic) long long badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
- (void)addBarItemButton:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateRedDotView;

@end

