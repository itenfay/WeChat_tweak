//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCCollectionViewManager, GCLoadingMoreCellModel, GCMessageRequestServer, GCMessageView, GCMessageViewModelConfig, GCTipLabel, GameChatRoomDataSource, NSMutableArray, NSMutableDictionary, NSString, NoticeMsg;
@protocol GCMessageViewModelDelegate;

@interface GCMessageViewModel : NSObject
{
    _Bool _isSelected;
    _Bool _isReused;
    _Bool _hasLoadFirstPage;
    _Bool _hasLoadCachedMsg;
    _Bool _isAtStatus;
    _Bool _hasReceiveFirstPage;
    _Bool _isFirstPageLayouted;
    _Bool _isWaitAtFirstPageLayout;
    _Bool _isChosenChannel;
    _Bool _isAllChannel;
    long long _channelId;
    GCMessageViewModelConfig *_viewModelConfig;
    GCMessageView *_messageView;
    id <GCMessageViewModelDelegate> _viewModelDelgate;
    GCCollectionViewManager *_messageCollectionViewManager;
    GCLoadingMoreCellModel *_atLoadMore;
    GameChatRoomDataSource *_atDataSource;
    GameChatRoomDataSource *_normalDataSource;
    GCTipLabel *_atTipView;
    NSMutableDictionary *_cellModelDict;
    NoticeMsg *_curShowNotice;
    NSMutableDictionary *_noticeDict;
    NSMutableArray *_noticeMsgList;
    GCMessageRequestServer *_normalRequestServer;
    GCMessageRequestServer *_atServer;
    double _notificationBarBtm;
    NSMutableDictionary *_lockLoadMoreDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *lockLoadMoreDict; // @synthesize lockLoadMoreDict=_lockLoadMoreDict;
@property(nonatomic) _Bool isAllChannel; // @synthesize isAllChannel=_isAllChannel;
@property(nonatomic) _Bool isChosenChannel; // @synthesize isChosenChannel=_isChosenChannel;
@property(nonatomic) double notificationBarBtm; // @synthesize notificationBarBtm=_notificationBarBtm;
@property(retain, nonatomic) GCMessageRequestServer *atServer; // @synthesize atServer=_atServer;
@property(retain, nonatomic) GCMessageRequestServer *normalRequestServer; // @synthesize normalRequestServer=_normalRequestServer;
@property(nonatomic) _Bool isWaitAtFirstPageLayout; // @synthesize isWaitAtFirstPageLayout=_isWaitAtFirstPageLayout;
@property(nonatomic) _Bool isFirstPageLayouted; // @synthesize isFirstPageLayouted=_isFirstPageLayouted;
@property(nonatomic) _Bool hasReceiveFirstPage; // @synthesize hasReceiveFirstPage=_hasReceiveFirstPage;
@property(retain, nonatomic) NSMutableArray *noticeMsgList; // @synthesize noticeMsgList=_noticeMsgList;
@property(retain, nonatomic) NSMutableDictionary *noticeDict; // @synthesize noticeDict=_noticeDict;
@property(retain, nonatomic) NoticeMsg *curShowNotice; // @synthesize curShowNotice=_curShowNotice;
@property(retain, nonatomic) NSMutableDictionary *cellModelDict; // @synthesize cellModelDict=_cellModelDict;
@property(retain, nonatomic) GCTipLabel *atTipView; // @synthesize atTipView=_atTipView;
@property(retain, nonatomic) GameChatRoomDataSource *normalDataSource; // @synthesize normalDataSource=_normalDataSource;
@property(retain, nonatomic) GameChatRoomDataSource *atDataSource; // @synthesize atDataSource=_atDataSource;
@property(retain, nonatomic) GCLoadingMoreCellModel *atLoadMore; // @synthesize atLoadMore=_atLoadMore;
@property(nonatomic) _Bool isAtStatus; // @synthesize isAtStatus=_isAtStatus;
@property(retain, nonatomic) GCCollectionViewManager *messageCollectionViewManager; // @synthesize messageCollectionViewManager=_messageCollectionViewManager;
@property(nonatomic) __weak id <GCMessageViewModelDelegate> viewModelDelgate; // @synthesize viewModelDelgate=_viewModelDelgate;
@property(retain, nonatomic) GCMessageView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) _Bool hasLoadCachedMsg; // @synthesize hasLoadCachedMsg=_hasLoadCachedMsg;
@property(nonatomic) _Bool hasLoadFirstPage; // @synthesize hasLoadFirstPage=_hasLoadFirstPage;
@property(nonatomic) _Bool isReused; // @synthesize isReused=_isReused;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) GCMessageViewModelConfig *viewModelConfig; // @synthesize viewModelConfig=_viewModelConfig;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
- (id)chatRoomServer;
- (id)noticeMsgWithSeq:(unsigned long long)arg1;
- (void)commonConfigData:(id)arg1 uiArea:(unsigned long long)arg2 positionId:(unsigned long long)arg3 op:(unsigned long long)arg4;
- (void)contactDidUpdate:(id)arg1;
- (void)recordNewChatBaseCellModel:(id)arg1;
- (_Bool)ownCurChatBaseCellModel:(id)arg1;
- (void)addReportInfo:(id)arg1;
- (id)cellModelFromChatroomMessage:(id)arg1 isFromCache:(_Bool)arg2;
- (id)cellModelArrayFromChatRoomMessageArray:(id)arg1 isFromCache:(_Bool)arg2;
- (void)notifySomeoneTickleAtMeBy:(id)arg1;
- (void)filterRelatedTickleMsg:(id)arg1 shouldImmediately:(_Bool)arg2;
- (id)lastTickleMeHandleSeqKey;
- (void)scrollToBottom:(_Bool)arg1;
- (void)scrollToBottomWithAnimation;
- (void)updateMoreMessageReceived:(unsigned long long)arg1;
- (void)clearUnreadCntIfSupport;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)supportUnReadCnt;
- (void)onLastItemVisible:(id)arg1;
- (void)onLoadMoreData;
- (id)chatCellModelForIndexPath:(id)arg1;
- (id)currentServer;
- (id)otherDataSource;
- (id)currentDataSource;
- (void)switchToAtStatus:(_Bool)arg1 force:(_Bool)arg2;
- (void)switchToAtStatus:(_Bool)arg1;
- (void)onLoadMorePreviousMessage;
- (void)bindMessageView:(id)arg1;
- (void)logWithFormat:(id)arg1;
- (void)logStr:(id)arg1;
- (id)getNewDataSource;
- (void)refreshWithCellModelArray:(id)arg1 andInvisibleList:(id)arg2;
- (void)logLoadMoreLockForReason:(id)arg1 isAdd:(_Bool)arg2;
- (void)removeLoadMoreLockForReason:(id)arg1;
- (void)markLoadMoreLockForReason:(id)arg1;
- (_Bool)hasLockLoadMoreReason;
- (void)configureViewModelConfig:(id)arg1;
- (void)invalidAllModelCacheLayout;
@property(readonly, copy) NSString *description;
- (id)initWithViewModelConfig:(id)arg1;
- (void)saveMsgIfNeed;
- (void)handleRefreshList:(id)arg1 andInvisibleList:(id)arg2;
- (void)perfromLoadFirstPage:(id)arg1;
- (void)onUserDataDictUpdate:(id)arg1;
- (void)loadFirstPageIfNeed;
- (void)loadCachedMsgDataIfNeed;
- (id)bindViewModelConfig;
- (void)jumpToChannelId:(long long)arg1 seq:(unsigned long long)arg2;
- (void)updateUserDataCell:(id)arg1;
- (void)updateNoticeBarView:(id)arg1;
- (void)updateCellModel:(id)arg1 messageSendStatus:(unsigned long long)arg2;
- (void)updatCellModel:(id)arg1 withResponse:(id)arg2;
- (void)setDisableChildViewEvent:(_Bool)arg1;
- (void)reloadCellModelInNextLoop:(id)arg1;
- (void)reconfigChatCellForUserName:(id)arg1 relayout:(_Bool)arg2;
- (void)onInputViewAdjustMessageView:(_Bool)arg1 topYOfInputView:(double)arg2;
- (void)handleChatRoomMsg:(id)arg1;
- (void)handleNotice:(id)arg1;
- (void)handleReceiveNewMsg:(id)arg1;
- (void)exitViewModel;
- (long long)currentChannelId;
- (void)hightLightVisibleNoticeCellWithForceClearSeq:(unsigned long long)arg1;
- (id)noticeLog:(id)arg1;
- (void)checkShowNotice:(id)arg1;
- (void)clearCurShowNotice;
- (void)removeNoticeForSeq:(unsigned long long)arg1;
- (void)checkShowNotice:(id)arg1 showNextNotice:(_Bool)arg2 addtionSeq:(unsigned long long)arg3;
- (void)playHighlightAnimationForCellModel:(id)arg1;
- (void)scrollToTargetNoticeSeq:(unsigned long long)arg1;
- (_Bool)changeToAtStatusWithMsgArray:(id)arg1 noticeSeq:(unsigned long long)arg2;
- (_Bool)switchAndScrollToTargetSeq:(unsigned long long)arg1;
- (void)jumpToTargetSeq:(unsigned long long)arg1;
- (void)atTipTaped;
- (void)updateAtTipTopOffset;
- (void)checkShowNextNotice;
- (void)reportWithUiArea:(unsigned long long)arg1 positionId:(unsigned long long)arg2 op:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

