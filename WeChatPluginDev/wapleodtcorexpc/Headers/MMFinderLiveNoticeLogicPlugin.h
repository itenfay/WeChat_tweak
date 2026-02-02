//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveNoticeInfo, FinderLiveNoticeListInfo, MMFinderLiveBuyTicketHandle, NSString, UIView;

@interface MMFinderLiveNoticeLogicPlugin
{
    _Bool _isDisplayingNoticeBubble;
    unsigned int _delayDisappearDurationAfterReserve;
    UIView *_noticeBubbleView;
    MMFinderLiveBuyTicketHandle *_ticketHandle;
    FinderLiveNoticeListInfo *_noticeListInfo;
    FinderLiveNoticeInfo *_bubbleNoticeInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int delayDisappearDurationAfterReserve; // @synthesize delayDisappearDurationAfterReserve=_delayDisappearDurationAfterReserve;
@property(retain, nonatomic) FinderLiveNoticeInfo *bubbleNoticeInfo; // @synthesize bubbleNoticeInfo=_bubbleNoticeInfo;
@property(retain, nonatomic) FinderLiveNoticeListInfo *noticeListInfo; // @synthesize noticeListInfo=_noticeListInfo;
@property(retain, nonatomic) MMFinderLiveBuyTicketHandle *ticketHandle; // @synthesize ticketHandle=_ticketHandle;
@property(nonatomic) __weak UIView *noticeBubbleView; // @synthesize noticeBubbleView=_noticeBubbleView;
@property(nonatomic) _Bool isDisplayingNoticeBubble; // @synthesize isDisplayingNoticeBubble=_isDisplayingNoticeBubble;
- (void)delayDismissBubble;
- (void)dismissBubbleOnReseveIfNeeded;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)onLiveNoticeListInfoForAudienceDisplayUpdatedWithTaskId:(id)arg1 noticeListInfo:(id)arg2;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (_Bool)isNoticeValidForDisplay:(id)arg1 checkReserveState:(_Bool)arg2;
- (id)usableNoticeInfoForAudience;
- (id)reserveableNoticeInfoForAudience;
- (id)getNoticeListInfo;
- (void)updateNoticeListInfo:(id)arg1;
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

