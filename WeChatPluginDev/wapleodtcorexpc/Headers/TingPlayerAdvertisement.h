//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListenMembershipJoinInfo_AdSchemeInfo, MMTimer, MMUIViewController, NSString, WAAppTaskHandlerWrapper;

@interface TingPlayerAdvertisement : NSObject
{
    _Bool _preloadDone;
    int _uiScene;
    CDUnknownBlockType _completeHandler;
    CDUnknownBlockType _preloadFinishHandler;
    MMUIViewController *_displayViewController;
    WAAppTaskHandlerWrapper *_handlerWrapper;
    MMListenMembershipJoinInfo_AdSchemeInfo *_adInfo;
    NSString *_sessionId;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool preloadDone; // @synthesize preloadDone=_preloadDone;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) MMListenMembershipJoinInfo_AdSchemeInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) WAAppTaskHandlerWrapper *handlerWrapper; // @synthesize handlerWrapper=_handlerWrapper;
@property(nonatomic) __weak MMUIViewController *displayViewController; // @synthesize displayViewController=_displayViewController;
@property(nonatomic) int uiScene; // @synthesize uiScene=_uiScene;
@property(copy, nonatomic) CDUnknownBlockType preloadFinishHandler; // @synthesize preloadFinishHandler=_preloadFinishHandler;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
- (void)handlePreloadAdLoadDone:(unsigned long long)arg1 preloadSuccess:(_Bool)arg2;
- (void)handleBizDataPipeHandler:(id)arg1;
- (void)handleAdvertisementClosed:(id)arg1;
- (void)show:(CDUnknownBlockType)arg1;
- (void)show;
- (void)preload;
- (id)openInfo;
- (_Bool)isAdActive;
- (void)onTimerCheck:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)closeSession;
- (void)startSession;
- (id)appid;
- (id)initWithADInfo:(id)arg1;

@end

