//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUILabel, NSArray;

@interface WCAdRollTextView
{
    _Bool _pauseFlag;
    NSArray *_textList;
    MMUILabel *_currentLabel;
    MMUILabel *_nextLabel;
    MMTimer *_animateTimer;
    long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pauseFlag; // @synthesize pauseFlag=_pauseFlag;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) MMTimer *animateTimer; // @synthesize animateTimer=_animateTimer;
@property(retain, nonatomic) MMUILabel *nextLabel; // @synthesize nextLabel=_nextLabel;
@property(retain, nonatomic) MMUILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(copy, nonatomic) NSArray *textList; // @synthesize textList=_textList;
- (void)onViewDidBecomeActive:(id)arg1;
- (void)onViewDidEnterBackground:(id)arg1;
- (void)initNotificationObserver;
- (void)setHidden:(_Bool)arg1;
- (void)stopRoll;
- (void)tryStartRoll;
- (_Bool)canRoll;
- (void)setViewAfterRoll;
- (void)setViewBeforeRoll;
- (void)rollLabel;
- (void)refreshLabelText;
- (void)initTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

