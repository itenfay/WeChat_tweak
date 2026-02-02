//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMBadgeView, NSAttributedString, NSString, UIImageView, UILabel, UITapGestureRecognizer, WCFinderRedDotTipsShowInfo, YYLabel;

@interface WCFinderPersonalCenterSidesButton : UIView
{
    _Bool _hasTouchDown;
    WCFinderRedDotTipsShowInfo *_redDotInfo;
    WCFinderRedDotTipsShowInfo *_rightRedDotInfo;
    NSString *_zeroCountRedDotaccessibilityLabel;
    NSString *_oneCountRedDotaccessibilityLabel;
    NSString *_multCountRedDotaccessibilityLabel;
    id _target;
    SEL _action;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    MMBadgeView *_leftBadgeView;
    UILabel *_redDotLabel;
    MMBadgeView *_rightBadgeView;
    YYLabel *_tailTextLabel;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool hasTouchDown; // @synthesize hasTouchDown=_hasTouchDown;
@property(retain, nonatomic) YYLabel *tailTextLabel; // @synthesize tailTextLabel=_tailTextLabel;
@property(retain, nonatomic) MMBadgeView *rightBadgeView; // @synthesize rightBadgeView=_rightBadgeView;
@property(retain, nonatomic) UILabel *redDotLabel; // @synthesize redDotLabel=_redDotLabel;
@property(retain, nonatomic) MMBadgeView *leftBadgeView; // @synthesize leftBadgeView=_leftBadgeView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *multCountRedDotaccessibilityLabel; // @synthesize multCountRedDotaccessibilityLabel=_multCountRedDotaccessibilityLabel;
@property(retain, nonatomic) NSString *oneCountRedDotaccessibilityLabel; // @synthesize oneCountRedDotaccessibilityLabel=_oneCountRedDotaccessibilityLabel;
@property(retain, nonatomic) NSString *zeroCountRedDotaccessibilityLabel; // @synthesize zeroCountRedDotaccessibilityLabel=_zeroCountRedDotaccessibilityLabel;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *rightRedDotInfo; // @synthesize rightRedDotInfo=_rightRedDotInfo;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *redDotInfo; // @synthesize redDotInfo=_redDotInfo;
- (void)buildElementLayouts;
- (void)updateRedDotLeftRightConfig;
- (void)layoutSubviews;
@property(retain, nonatomic) NSAttributedString *tailAttrText;
- (_Bool)showRedDot;
- (_Bool)showRedText;
@property(retain, nonatomic) NSString *tailText;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) NSString *title;
- (void)_handleClick;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

