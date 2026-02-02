//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, WCAdConsultBarCarouselInfo, WCAdConsultBarView;

@interface WCAdConsultBarLogic
{
    _Bool _isFirstAnimation;
    long long _currentIndex;
    WCAdConsultBarView *_barView;
    NSString *_tid;
    MMTimer *_animateTimer;
    WCAdConsultBarCarouselInfo *_barCarouselInfo;
}

+ (id)getConsultLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstAnimation; // @synthesize isFirstAnimation=_isFirstAnimation;
@property(retain, nonatomic) WCAdConsultBarCarouselInfo *barCarouselInfo; // @synthesize barCarouselInfo=_barCarouselInfo;
@property(retain, nonatomic) MMTimer *animateTimer; // @synthesize animateTimer=_animateTimer;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) WCAdConsultBarView *barView; // @synthesize barView=_barView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void)timerFired;
- (void)startTimerIfNeed;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)addNotifications;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;

@end

