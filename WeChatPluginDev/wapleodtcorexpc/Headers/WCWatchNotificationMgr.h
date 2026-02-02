//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCYoWindowController;

@interface WCWatchNotificationMgr
{
    unsigned int _yoTime;
    NSMutableArray *_yoCounts;
    WCYoWindowController *_yoWindowController;
    NSString *_isShowingUsername;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int yoTime; // @synthesize yoTime=_yoTime;
@property(copy, nonatomic) NSString *isShowingUsername; // @synthesize isShowingUsername=_isShowingUsername;
@property(retain, nonatomic) WCYoWindowController *yoWindowController; // @synthesize yoWindowController=_yoWindowController;
@property(retain, nonatomic) NSMutableArray *yoCounts; // @synthesize yoCounts=_yoCounts;
- (void)didHitInside;
- (void)didHitOutside;
- (void)dismissYoWindow;
- (void)prepareToCloseYoWindow;
- (void)dequeue;
- (void)addYoCount:(unsigned long long)arg1 contact:(id)arg2 type:(int)arg3;
- (void)displaySignalMessage:(id)arg1;
- (id)getYoWindow;
- (void)onServiceEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

