//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardGiftItem, MMFinderLiveTask, MMFinderLiveTaskId, MMTimer, NSString, PAGFile;
@protocol MMFinderLiveDropGiftViewModelDelegate;

@interface MMFinderLiveDropGiftViewModel : NSObject
{
    _Bool _viewNeedShow;
    _Bool _isLoading;
    PAGFile *_pagFile;
    MMFinderLiveRewardGiftItem *_giftItem;
    NSString *_packageId;
    id <MMFinderLiveDropGiftViewModelDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    MMTimer *_timer;
    long long _currRemainTime;
    double _currentTimeOnEnterBackground;
    NSString *_currentComboId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSString *currentComboId; // @synthesize currentComboId=_currentComboId;
@property(nonatomic) double currentTimeOnEnterBackground; // @synthesize currentTimeOnEnterBackground=_currentTimeOnEnterBackground;
@property(nonatomic) long long currRemainTime; // @synthesize currRemainTime=_currRemainTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic, getter=isViewNeedShow) _Bool viewNeedShow; // @synthesize viewNeedShow=_viewNeedShow;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveDropGiftViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) PAGFile *pagFile; // @synthesize pagFile=_pagFile;
- (void)onDeliveryGiftWithError:(id)arg1 taskId:(id)arg2;
- (void)sendError:(id)arg1;
- (void)sendDeliveryGift:(id)arg1;
- (void)handleGetDropGiftDetailForAudience;
- (void)handleGetDropGiftDetailForAnchor;
- (void)sendGetDropGift;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)onGetFinderLiveDropGiftForAnchor:(id)arg1;
- (void)onGetFinderLiveDropGift:(id)arg1 giftInfo:(id)arg2;
- (void)updateAnchorGiftView:(_Bool)arg1;
- (void)showGiftViewAfter:(double)arg1;
- (void)refreshRemainTime:(long long)arg1;
- (void)refreshRemainTime;
- (void)startTimerWithCurrentRemainTime;
- (void)unregisterExt;
- (void)registerExt;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

