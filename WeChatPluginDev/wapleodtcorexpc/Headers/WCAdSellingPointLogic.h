//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer;
@protocol WCAdSellingPointLogicDelegate;

@interface WCAdSellingPointLogic
{
    id <WCAdSellingPointLogicDelegate> _delegate;
    unsigned long long _itemCount;
    unsigned long long _switchCount;
    MMTimer *_logicTimer;
    unsigned long long _currentTick;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentTick; // @synthesize currentTick=_currentTick;
@property(retain, nonatomic) MMTimer *logicTimer; // @synthesize logicTimer=_logicTimer;
@property(nonatomic) unsigned long long switchCount; // @synthesize switchCount=_switchCount;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) __weak id <WCAdSellingPointLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldFireTouchEvent;
- (void)scheduleSwitchSellingPoint;
- (void)touchWithAnimated:(_Bool)arg1;
- (id)fetchSwitchCountToReport;
- (void)reset;
- (void)stop;
- (void)start;
- (void)touch;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)addNotifications;
- (void)dealloc;
- (id)init;

@end

