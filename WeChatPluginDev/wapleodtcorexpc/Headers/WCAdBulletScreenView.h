//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMTimer, MMUIView, NSMutableArray, WCAdBulletScreenInfo;

@interface WCAdBulletScreenView
{
    _Bool _endureTimerScheduled;
    WCAdBulletScreenInfo *_adBulletScreenInfo;
    MMUIView *_bulletTextContainerView;
    CAGradientLayer *_gradientLayer;
    NSMutableArray *_bulletTextViews;
    MMTimer *_logicTimer;
    struct CGSize _lastLayoutSize;
}

+ (double)calcBulletTextContainerHeightWithBulletScreenInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *logicTimer; // @synthesize logicTimer=_logicTimer;
@property(nonatomic) _Bool endureTimerScheduled; // @synthesize endureTimerScheduled=_endureTimerScheduled;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(retain, nonatomic) NSMutableArray *bulletTextViews; // @synthesize bulletTextViews=_bulletTextViews;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUIView *bulletTextContainerView; // @synthesize bulletTextContainerView=_bulletTextContainerView;
@property(retain, nonatomic) WCAdBulletScreenInfo *adBulletScreenInfo; // @synthesize adBulletScreenInfo=_adBulletScreenInfo;
- (void)scheduleBulletShootingAnimation;
- (void)scheduledTimerWithShootingTime:(double)arg1 repeats:(_Bool)arg2;
- (void)tryToScheduleEndureTimer;
- (void)resumeBulletAnimation;
- (void)pauseBulletAnimation;
- (void)stopBulletAnimation;
- (void)startBulletAnimation;
- (void)layoutSubviews;
- (void)generateSubviews;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)addNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 adBulletScreenInfo:(id)arg2;

@end

