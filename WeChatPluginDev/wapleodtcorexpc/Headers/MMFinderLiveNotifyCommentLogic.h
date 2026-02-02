//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFollowNotifyCommentLogic, MMFinderLiveFollowNotifyDataItem, MMFinderLiveLikeNotifyCommentLogic, MMFinderLiveLikeNotifyDataItem, MMFinderLiveRealNameFriendLikeCommentDataItem, MMFinderLiveTaskId, MMLiveCommentDataItem, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSString, PAGFile, PAGView, UITableView, UIView;

@interface MMFinderLiveNotifyCommentLogic : NSObject
{
    _Bool _notifyCommentViewIsShown;
    _Bool _isNotifyCommentItemArrAsyncOrderring;
    _Bool _isDisplaying;
    _Bool _allow30FpsAnimation;
    CDUnknownBlockType _notifyCommentViewWillShownBlock;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveLikeNotifyCommentLogic *_likeNotifyCommentLogic;
    MMFinderLiveFollowNotifyCommentLogic *_followNotifyCommentLogic;
    UIView *_containerView;
    UITableView *_bottomTableView;
    NSMutableArray *_notifyCommentItemArr;
    NSMutableArray *_pendingNotifyCommentItemArr;
    NSMutableArray *_removedNotifyCommentItemArr;
    NSMutableOrderedSet *_commentMsgIdSet;
    NSMutableSet *_notifyProductIdSet;
    MMLiveCommentDataItem *_currentDisplayCommentItem;
    MMFinderLiveLikeNotifyDataItem *_currentPreparingLikeNotifyDataItem;
    MMFinderLiveFollowNotifyDataItem *_currentPreparingFollowNotifyDataItem;
    MMFinderLiveRealNameFriendLikeCommentDataItem *_currentPreparingFriendLikeNotifyDataItem;
    PAGView *_audienceJoinPAGAnimationView;
    PAGFile *_audienceJoinPAGFile;
    NSString *_lastAudienceJoinRankImageName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allow30FpsAnimation; // @synthesize allow30FpsAnimation=_allow30FpsAnimation;
@property(retain, nonatomic) NSString *lastAudienceJoinRankImageName; // @synthesize lastAudienceJoinRankImageName=_lastAudienceJoinRankImageName;
@property(retain, nonatomic) PAGFile *audienceJoinPAGFile; // @synthesize audienceJoinPAGFile=_audienceJoinPAGFile;
@property(retain, nonatomic) PAGView *audienceJoinPAGAnimationView; // @synthesize audienceJoinPAGAnimationView=_audienceJoinPAGAnimationView;
@property(nonatomic) __weak MMFinderLiveRealNameFriendLikeCommentDataItem *currentPreparingFriendLikeNotifyDataItem; // @synthesize currentPreparingFriendLikeNotifyDataItem=_currentPreparingFriendLikeNotifyDataItem;
@property(nonatomic) __weak MMFinderLiveFollowNotifyDataItem *currentPreparingFollowNotifyDataItem; // @synthesize currentPreparingFollowNotifyDataItem=_currentPreparingFollowNotifyDataItem;
@property(nonatomic) __weak MMFinderLiveLikeNotifyDataItem *currentPreparingLikeNotifyDataItem; // @synthesize currentPreparingLikeNotifyDataItem=_currentPreparingLikeNotifyDataItem;
@property(retain, nonatomic) MMLiveCommentDataItem *currentDisplayCommentItem; // @synthesize currentDisplayCommentItem=_currentDisplayCommentItem;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
@property(nonatomic) _Bool isNotifyCommentItemArrAsyncOrderring; // @synthesize isNotifyCommentItemArrAsyncOrderring=_isNotifyCommentItemArrAsyncOrderring;
@property(retain, nonatomic) NSMutableSet *notifyProductIdSet; // @synthesize notifyProductIdSet=_notifyProductIdSet;
@property(retain, nonatomic) NSMutableOrderedSet *commentMsgIdSet; // @synthesize commentMsgIdSet=_commentMsgIdSet;
@property(retain, nonatomic) NSMutableArray *removedNotifyCommentItemArr; // @synthesize removedNotifyCommentItemArr=_removedNotifyCommentItemArr;
@property(retain, nonatomic) NSMutableArray *pendingNotifyCommentItemArr; // @synthesize pendingNotifyCommentItemArr=_pendingNotifyCommentItemArr;
@property(retain, nonatomic) NSMutableArray *notifyCommentItemArr; // @synthesize notifyCommentItemArr=_notifyCommentItemArr;
@property(retain, nonatomic) UITableView *bottomTableView; // @synthesize bottomTableView=_bottomTableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMFinderLiveFollowNotifyCommentLogic *followNotifyCommentLogic; // @synthesize followNotifyCommentLogic=_followNotifyCommentLogic;
@property(retain, nonatomic) MMFinderLiveLikeNotifyCommentLogic *likeNotifyCommentLogic; // @synthesize likeNotifyCommentLogic=_likeNotifyCommentLogic;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool notifyCommentViewIsShown; // @synthesize notifyCommentViewIsShown=_notifyCommentViewIsShown;
@property(copy, nonatomic) CDUnknownBlockType notifyCommentViewWillShownBlock; // @synthesize notifyCommentViewWillShownBlock=_notifyCommentViewWillShownBlock;
- (void)onFinderLiveRealNameFriendLikeNotificationShow;
- (void)onPreparingDisplayFollowNotifyUpdate:(id)arg1;
- (void)onPreparingDisplayLikeMsgInfoUpdate:(id)arg1;
- (id)getCommentArrayFilterUnNeedCommit:(id)arg1;
- (id)getCommentArrayFilterType:(id)arg1 validType:(id)arg2;
- (id)getCommentArrayFilterRepeatCommit:(id)arg1;
- (id)getFilterNotifyCommentArr:(id)arg1;
- (id)getFinderLiveTask;
- (void)removeNotifyCommentItem:(id)arg1;
- (void)removeUnusedCommentMsgId;
- (void)removeUnusedCommentItem;
- (void)innerAppendFilterNotifyCommentsWithAsyncSort:(id)arg1;
- (void)innerAppendFilterNotifyCommentsWithSyncSort:(id)arg1;
- (_Bool)innerAppendNewNotifyComments:(id)arg1;
- (void)onNewNotifyCommentUpdate:(id)arg1;
- (void)tagHasNotifyShopping:(id)arg1;
- (_Bool)checkIsShoppingHasNotify:(id)arg1;
- (_Bool)appendNotifyComment:(id)arg1;
- (unsigned int)getNextNotifyCommentType;
- (long long)animationTypeForNextCommentItem:(id)arg1 last:(id)arg2;
- (double)displayDurationForCommentItem:(id)arg1;
- (void)updateDisplayNextNotifyItemWithCurrentPubbleCell:(id)arg1;
- (void)stopAudienceJoinAnimation;
- (void)startAudienceJoinAnimationForComment:(id)arg1;
- (_Bool)startDisplayWithLast:(id)arg1;
- (void)rejectHotSalesForCurrentPromotingProduct;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)onExitLive;
- (void)onEnterLive;
- (id)initWithContainerView:(id)arg1 bottomTableView:(id)arg2 taskId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

