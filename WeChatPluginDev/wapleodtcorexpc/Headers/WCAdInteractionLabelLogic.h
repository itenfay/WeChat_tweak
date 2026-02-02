//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, UIView;
@protocol WCAdInteractionLabelLogicDelegate;

@interface WCAdInteractionLabelLogic
{
    id <WCAdInteractionLabelLogicDelegate> _delegate;
    unsigned long long _itemCount;
    UIView *_iconViewCache;
    unsigned long long _switchCount;
    MMTimer *_logicTimer;
    unsigned long long _currentTick;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentTick; // @synthesize currentTick=_currentTick;
@property(retain, nonatomic) MMTimer *logicTimer; // @synthesize logicTimer=_logicTimer;
@property(nonatomic) unsigned long long switchCount; // @synthesize switchCount=_switchCount;
@property(retain, nonatomic) UIView *iconViewCache; // @synthesize iconViewCache=_iconViewCache;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) __weak id <WCAdInteractionLabelLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setIconPlaying:(_Bool)arg1 reset:(_Bool)arg2;
- (void)resetIcon;
- (void)tryToSetIconPlaying:(_Bool)arg1;
- (_Bool)shouldFireTouchEvent;
- (void)scheduleSwitchLabel;
- (void)touchWithAnimated:(_Bool)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)stop;
- (void)start;
- (void)touch;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)addNotifications;
- (void)dealloc;
- (id)init;

@end

