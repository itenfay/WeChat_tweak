//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveRealnameLikeClientBubble, MMFinderLiveRealNameFriendLikeBubble, MMFinderLiveRealNameFriendLikeBubbleView, MMFinderLiveRealNameFriendLikeMenuInfo, MMFinderLiveRealNameFriendLikeNotificationMsg, NSString;

@interface MMFinderLiveRealNameFriendLikeLogicPlugin
{
    _Bool _isLiked;
    _Bool _hasBubbleShowed;
    _Bool _hasDismissBubble;
    MMFinderLiveRealNameFriendLikeBubble *_currentBubble;
    MMFinderLiveRealNameFriendLikeMenuInfo *_currentMenuInfo;
    MMFinderLiveRealNameFriendLikeNotificationMsg *_currentNotificationMsg;
    FinderLiveRealnameLikeClientBubble *_clientBubble;
    MMFinderLiveRealNameFriendLikeBubbleView *_bubbleView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasDismissBubble; // @synthesize hasDismissBubble=_hasDismissBubble;
@property(nonatomic) __weak MMFinderLiveRealNameFriendLikeBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) _Bool hasBubbleShowed; // @synthesize hasBubbleShowed=_hasBubbleShowed;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(retain, nonatomic) FinderLiveRealnameLikeClientBubble *clientBubble; // @synthesize clientBubble=_clientBubble;
@property(retain, nonatomic) MMFinderLiveRealNameFriendLikeNotificationMsg *currentNotificationMsg; // @synthesize currentNotificationMsg=_currentNotificationMsg;
@property(retain, nonatomic) MMFinderLiveRealNameFriendLikeMenuInfo *currentMenuInfo; // @synthesize currentMenuInfo=_currentMenuInfo;
@property(retain, nonatomic) MMFinderLiveRealNameFriendLikeBubble *currentBubble; // @synthesize currentBubble=_currentBubble;
@property(readonly, nonatomic) _Bool isCurrentBubbleShow;
@property(readonly, nonatomic) _Bool hasNotLikedBefore;
- (void)onJoinFinderLiveError:(id)arg1 finderDataItem:(id)arg2 joinLiveContext:(id)arg3 errorPage:(id)arg4;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)checkShowBubbleWhenLikeAction;
- (void)showBubbleIfNeeded:(id)arg1;
- (void)notifyLikeStatus;
- (void)postFriendLike:(_Bool)arg1 source:(long long)arg2;
- (void)notifyExitFriendLikeGuidePage:(long long)arg1;
- (void)notifyEnterFriendLikeGuidePage:(long long)arg1 sendReason:(unsigned long long)arg2;
- (_Bool)checkShowGuideIfNeeded:(long long)arg1;
- (void)delayDismissBubble;
- (void)checkPerformDismissBubble;
- (void)likeEvent:(_Bool)arg1 source:(long long)arg2;
- (void)dismissBubble:(_Bool)arg1;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

