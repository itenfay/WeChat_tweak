//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, WCAdCardMultiProductsView, WCDataItem;
@protocol WCAdMultiProductsLogicDelegate;

@interface WCAdMultiProductsLogic
{
    WCAdCardMultiProductsView *_multiProductsView;
    id <WCAdMultiProductsLogicDelegate> _delegate;
    WCDataItem *_dataItem;
    MMTimer *_logicTimer;
    unsigned long long _currentTick;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentTick; // @synthesize currentTick=_currentTick;
@property(retain, nonatomic) MMTimer *logicTimer; // @synthesize logicTimer=_logicTimer;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdMultiProductsLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCAdCardMultiProductsView *multiProductsView; // @synthesize multiProductsView=_multiProductsView;
- (void)updateActionButtonWithScale:(double)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)updateActionButton;
- (void)tryToSwitchMultiProductsView;
- (void)scheduleMultiProductsViewAction;
- (void)stop;
- (void)start;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)addNotifications;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1;

@end

