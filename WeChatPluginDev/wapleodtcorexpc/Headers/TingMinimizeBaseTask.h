//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TingMinimizeStayStatics, TingTapePlayingInfo;
@protocol TingMinimizeTaskDelegate;

@interface TingMinimizeBaseTask : NSObject
{
    _Bool _bActive;
    _Bool _bFold;
    _Bool _disableOpenMinimizeTask;
    id <TingMinimizeTaskDelegate> _delegate;
    TingTapePlayingInfo *_playingInfo;
    TingMinimizeStayStatics *_statics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingMinimizeStayStatics *statics; // @synthesize statics=_statics;
@property(nonatomic) _Bool disableOpenMinimizeTask; // @synthesize disableOpenMinimizeTask=_disableOpenMinimizeTask;
@property(retain, nonatomic) TingTapePlayingInfo *playingInfo; // @synthesize playingInfo=_playingInfo;
@property(nonatomic) _Bool bFold; // @synthesize bFold=_bFold;
@property(nonatomic) _Bool bActive; // @synthesize bActive=_bActive;
@property(nonatomic) __weak id <TingMinimizeTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handleOpenTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAutoFoldTask;
- (void)startAutoFoldTask;
- (void)foldTask;
- (_Bool)canMinimizeBecomeActive:(id)arg1;
- (void)updateContentViewIfNeedWithForce:(_Bool)arg1;
- (id)taskContainerView;
- (void)openTask;
- (id)copyContainerView;
- (_Bool)isTaskActive;
- (void)hideTaskAnimated:(_Bool)arg1;
- (void)tryShowTaskAnimated:(_Bool)arg1 voiceTic:(_Bool)arg2;
- (void)updateMinimizeTaskStateWithContext:(id)arg1 animated:(_Bool)arg2 voiceTic:(_Bool)arg3;
- (void)updateMinimizeTaskStateWithContext:(id)arg1 animated:(_Bool)arg2;
- (void)onMinimizeTaskFoldedStateChanged:(_Bool)arg1 reason:(long long)arg2;
- (void)onMinimizeTaskEngagedForReason:(long long)arg1 premptReason:(id)arg2;
- (void)onMinimizeTaskEngagedForReason:(long long)arg1;
- (void)onMinimizeTaskActive;
- (void)updatePlayingInfo:(id)arg1;
- (_Bool)isFold;
- (id)currentPlayer;
- (_Bool)isModuleActive;
- (_Bool)canAddMinimization;
- (_Bool)isTingViewControllerTop:(id)arg1;
- (void)removeMinimizeTaskAnimiated:(_Bool)arg1 onlyFade:(_Bool)arg2;
- (void)addMinimizeTaskAnimiated:(_Bool)arg1 voiceTic:(_Bool)arg2 fold:(_Bool)arg3;
- (void)addMinimizeTaskAnimiated:(_Bool)arg1;
- (_Bool)disableMinimizeTask;
- (_Bool)hasMinimizeTask;
- (void)dealloc;
- (id)baseReportParams;
- (void)reportTaskViewExpEvent;
- (void)reportTaskViewClickEvent:(long long)arg1;
- (void)reportTaskActiveEvent;
- (void)reportTaskCloseEventForReason:(long long)arg1 outterPremptReason:(id)arg2;
- (void)reportTaskCloseEventForReason:(long long)arg1;
- (void)reportTaskFoldStateChangedForReason:(long long)arg1;

@end

