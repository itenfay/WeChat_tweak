//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIWindow, NSDate, NSObject, NSString;
@protocol WCYoDelegate;

@interface WCYoWindowController
{
    unsigned int _yoTime;
    MMUIWindow *_window;
    NSDate *_showedDate;
    NSObject<WCYoDelegate> *_yoDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<WCYoDelegate> *yoDelegate; // @synthesize yoDelegate=_yoDelegate;
@property(nonatomic) unsigned int yoTime; // @synthesize yoTime=_yoTime;
@property(retain, nonatomic) NSDate *showedDate; // @synthesize showedDate=_showedDate;
- (void)setWindow:(id)arg1;
- (void)hideYoWindow:(id)arg1;
- (id)window:(id)arg1 hitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)showWindowAnimateType:(int)arg1 withTransitionAnimation:(int)arg2;
- (void)addYoCount:(unsigned long long)arg1 forUsername:(id)arg2 type:(int)arg3;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 delegate:(id)arg4 nameLabelString:(id)arg5 descriptionString:(id)arg6 timeString:(id)arg7 allowReply:(_Bool)arg8;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 delegate:(id)arg4 nameLabelString:(id)arg5 descriptionString:(id)arg6 allowReply:(_Bool)arg7;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 delegate:(id)arg4;
- (void)restartAnimation;
- (void)dealloc;
- (id)window;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

