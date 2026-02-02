//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLivePromoteExtInfo, FinderLivePromoteMsgInfo, MMFinderLiveCouponItem, MMFinderLivePromoteDisplayLease, MMFinderLivePromoteDisplayRecordInfo, MMFinderLivePromotePubbleContainerView, MMFinderLiveSyncPromoteModel, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveQueue, NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface MMFinderLivePromoteDisplayLogic : NSObject
{
    _Bool _disablePubbleDisplay;
    _Bool _isUpdating;
    _Bool _isWaitingForActionReport;
    unsigned long long _lastAnalyseRet;
    CDUnknownBlockType _pubbleCreateCallback;
    CDUnknownBlockType _pubbleDismissCallback;
    CDUnknownBlockType _pubbleDisplayCallback;
    CDUnknownBlockType _getPubbleDisplayPosCallback;
    CDUnknownBlockType _displayLeaseViewLayoutRequestedCallback;
    NSString *_ignoreStockID;
    MMFinderLivePromotePubbleContainerView *_currentPromotePubbleView;
    MMFinderLivePromotePubbleContainerView *_nextPromotePubbleView;
    unsigned long long _idIsWaitingFetchData;
    unsigned long long _userClosedPromoteInfoID;
    NSData *_currentSyncContext;
    MMFinderLiveSyncPromoteModel *_liveSyncPromoteModel;
    double _displayLeaseViewAlpha;
    unsigned long long _closeButtonPreemptions;
    MMFinderLiveTaskId *_taskId;
    FinderLivePromoteMsgInfo *_currentPromoteMsgInfo;
    FinderLivePromoteMsgInfo *_pendingPromoteMsgInfo;
    NSData *_currentExtBuffer;
    NSMutableDictionary *_promoteDisplayRecordDict;
    MMFinderLivePromoteDisplayRecordInfo *_previousPrepareDisplayRecordInfo;
    FinderLivePromoteExtInfo *_promoteExtInfo;
    NSMutableArray *_actionReportItemList;
    MMLiveQueue *_displayLeases;
    MMFinderLivePromoteDisplayLease *_currentPrecedingDisplayLease;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePromoteDisplayLease *currentPrecedingDisplayLease; // @synthesize currentPrecedingDisplayLease=_currentPrecedingDisplayLease;
@property(retain, nonatomic) MMLiveQueue *displayLeases; // @synthesize displayLeases=_displayLeases;
@property(retain, nonatomic) NSMutableArray *actionReportItemList; // @synthesize actionReportItemList=_actionReportItemList;
@property(nonatomic) _Bool isWaitingForActionReport; // @synthesize isWaitingForActionReport=_isWaitingForActionReport;
@property(retain, nonatomic) FinderLivePromoteExtInfo *promoteExtInfo; // @synthesize promoteExtInfo=_promoteExtInfo;
@property(retain, nonatomic) MMFinderLivePromoteDisplayRecordInfo *previousPrepareDisplayRecordInfo; // @synthesize previousPrepareDisplayRecordInfo=_previousPrepareDisplayRecordInfo;
@property(retain, nonatomic) NSMutableDictionary *promoteDisplayRecordDict; // @synthesize promoteDisplayRecordDict=_promoteDisplayRecordDict;
@property(retain, nonatomic) NSData *currentExtBuffer; // @synthesize currentExtBuffer=_currentExtBuffer;
@property(retain, nonatomic) FinderLivePromoteMsgInfo *pendingPromoteMsgInfo; // @synthesize pendingPromoteMsgInfo=_pendingPromoteMsgInfo;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(retain, nonatomic) FinderLivePromoteMsgInfo *currentPromoteMsgInfo; // @synthesize currentPromoteMsgInfo=_currentPromoteMsgInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long closeButtonPreemptions; // @synthesize closeButtonPreemptions=_closeButtonPreemptions;
@property(nonatomic) double displayLeaseViewAlpha; // @synthesize displayLeaseViewAlpha=_displayLeaseViewAlpha;
@property(nonatomic) _Bool disablePubbleDisplay; // @synthesize disablePubbleDisplay=_disablePubbleDisplay;
@property(retain, nonatomic) MMFinderLiveSyncPromoteModel *liveSyncPromoteModel; // @synthesize liveSyncPromoteModel=_liveSyncPromoteModel;
@property(retain, nonatomic) NSData *currentSyncContext; // @synthesize currentSyncContext=_currentSyncContext;
@property(nonatomic) unsigned long long userClosedPromoteInfoID; // @synthesize userClosedPromoteInfoID=_userClosedPromoteInfoID;
@property(nonatomic) unsigned long long idIsWaitingFetchData; // @synthesize idIsWaitingFetchData=_idIsWaitingFetchData;
@property(retain, nonatomic) MMFinderLivePromotePubbleContainerView *nextPromotePubbleView; // @synthesize nextPromotePubbleView=_nextPromotePubbleView;
@property(retain, nonatomic) MMFinderLivePromotePubbleContainerView *currentPromotePubbleView; // @synthesize currentPromotePubbleView=_currentPromotePubbleView;
@property(copy, nonatomic) NSString *ignoreStockID; // @synthesize ignoreStockID=_ignoreStockID;
@property(copy, nonatomic) CDUnknownBlockType displayLeaseViewLayoutRequestedCallback; // @synthesize displayLeaseViewLayoutRequestedCallback=_displayLeaseViewLayoutRequestedCallback;
@property(copy, nonatomic) CDUnknownBlockType getPubbleDisplayPosCallback; // @synthesize getPubbleDisplayPosCallback=_getPubbleDisplayPosCallback;
@property(copy, nonatomic) CDUnknownBlockType pubbleDisplayCallback; // @synthesize pubbleDisplayCallback=_pubbleDisplayCallback;
@property(copy, nonatomic) CDUnknownBlockType pubbleDismissCallback; // @synthesize pubbleDismissCallback=_pubbleDismissCallback;
@property(copy, nonatomic) CDUnknownBlockType pubbleCreateCallback; // @synthesize pubbleCreateCallback=_pubbleCreateCallback;
@property(nonatomic) unsigned long long lastAnalyseRet; // @synthesize lastAnalyseRet=_lastAnalyseRet;
- (void)onPromoteDisplayLeaseUserDismissed:(id)arg1;
- (void)onPromoteDisplayLeaseExpired:(id)arg1;
- (void)onPromoteDisplayLeaseRelinquished:(id)arg1;
- (void)onPromoteDisplayLeaseViewLayoutRequested:(id)arg1;
- (void)requestDisplayLeaseViewLayoutForLease:(id)arg1;
- (id)displayLeaseForToken:(id)arg1;
- (void)initializeDisplayLeaseQueue;
- (void)updateViewsForDisplayLeaseChanges;
- (_Bool)containsDisplayLeaseSatisfying:(CDUnknownBlockType)arg1;
- (id)applyForDisplayLeaseWithRequest:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveCouponItem *currentCoupon;
- (void)onFontSizeChange;
- (void)onFinderLivePromoteMsgEndPush:(id)arg1;
- (id)createDisplayRecordInfo:(id)arg1;
- (void)onCurrentPromoteMsgInfoUpdate:(id)arg1;
@property(readonly, nonatomic) double displayLeaseViewPreferredHeight;
@property(readonly, nonatomic) FinderLivePromoteMsgInfo *localPromoteMsgInfo;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onExitLive;
- (void)onEnterLive;
- (void)updatePromoteExtInfo:(id)arg1;
- (id)getCurrentExtBuffer;
- (double)getDisplayTriTipX:(id)arg1;
- (double)getDisplayLeft:(id)arg1;
- (double)getPopPointY:(id)arg1;
- (double)getDisplayPointY:(id)arg1;
- (struct CGPoint)getNewProductPubbleAnimationStartPoint:(id)arg1;
- (double)getProductPubbleAnimationAppearY:(id)arg1;
- (double)getHorizontalExtendCenter:(id)arg1;
- (double)getDismissPointY:(id)arg1;
- (_Bool)istReqPromotingIdFitWithCurrent:(id)arg1;
- (id)getReqPromotingInfo:(id)arg1;
- (void)updateFromSyncPromoteWithSeqResp:(id)arg1;
- (_Bool)isCurrentPromotePubbleUnVisible;
- (_Bool)hasPubbleFromAnchorPromote;
- (_Bool)isPromoteMsgInfoNeedHandle:(id)arg1;
- (void)dismissAllPromotePubbleViews:(_Bool)arg1;
- (void)updatePromotePubblesHidden;
- (_Bool)isDisplayCurrentPromotePubbleView;
- (void)layoutDisplayLeaseContainerView;
- (void)layoutPromotePubbleView;
- (void)cancelReportForPromoteAction;
- (void)reportForPromoteAction;
- (void)addActionReportItem:(id)arg1;
- (_Bool)isPromoteMsgInfoSupportDisplay:(id)arg1;
- (void)notifyPromotePubbleCreate:(id)arg1;
- (void)notifyPromotePubbleDisplay:(id)arg1 state:(unsigned long long)arg2;
- (void)notifyPromotePubblePop:(id)arg1 state:(unsigned long long)arg2;
- (void)notifyPromotePubbleDismiss:(id)arg1 userDirectlyClosed:(_Bool)arg2 state:(unsigned long long)arg3;
- (id)createPromotePubbleView;
- (void)dismissPromotePubble:(id)arg1 userDirectlyClosed:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissPromotePubble:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popPromotePubble:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showPromotePubble:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isCurrentPromoteMsgInfo:(id)arg1;
- (_Bool)judgeNeedIgnoreForCoupon:(id)arg1;
- (unsigned long long)anlysePromoteMsgInfo:(id)arg1 fromSrc:(unsigned long long)arg2;
- (void)updateCurrentPendingPromoteInfo:(id)arg1;
- (void)invokePendingPromoteHandle;
- (void)cancelPendingPromote;
- (void)updatePendingPromote:(id)arg1;
- (void)updateCurrentSyncContext:(id)arg1;
- (void)updateCurrentExtBufferFromPromoteMsgInfo:(id)arg1;
- (void)updateNewPromoteMsgInfoAndShow:(id)arg1;
- (void)inner_updatePromoteMsgInfo:(id)arg1 fromSrc:(unsigned long long)arg2;
- (void)updatePromoteMsgInfo:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)initDefaultSrc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

