//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel;

@interface WCCanvasBottomSwipeComponent
{
    UIImageView *_swipeUpIcon;
    UILabel *_swipeUpText;
    UIButton *_hotZone;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *hotZone; // @synthesize hotZone=_hotZone;
@property(retain, nonatomic) UILabel *swipeUpText; // @synthesize swipeUpText=_swipeUpText;
@property(retain, nonatomic) UIImageView *swipeUpIcon; // @synthesize swipeUpIcon=_swipeUpIcon;
- (void)jumpToUrl:(id)arg1;
- (void)didBottomSwipeActionComplete;
- (_Bool)shouldAllowBottomSwipeAction;
- (_Bool)shouldForbidDelegateShowFloatActionBtn;
- (void)componentAppearFactorChagneInMainScreen;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)generateKeyframeAnimationWithKeyPath:(id)arg1 duration:(double)arg2;
- (void)beginSwipeUpAnimation;
- (void)initSwipeUpView;
- (void)initViews;
- (void)layoutSubviews;

@end

