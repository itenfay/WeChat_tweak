//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LotteryWinnerListFooterView, LotteryWinnerListHeaderView, MMFinderLiveLotteryInfo, MMFinderLiveLotteryRecordExpiredTipView, MMFinderLiveTaskId, MMTableView, NSData, NSMutableArray, NSString, WCTimeLineFooterView;

@interface WCFinderLiveLotteryWinnerListViewController
{
    _Bool _enableToFinderChat;
    _Bool _isInLive;
    _Bool _isAssistant;
    _Bool _showDownLoad;
    unsigned int _isUrlExpired;
    NSMutableArray *_winnerList;
    MMFinderLiveLotteryInfo *_lotteryInfo;
    NSString *_lotteryId;
    unsigned long long _liveId;
    unsigned long long _objectId;
    NSString *_nonceId;
    NSString *_finderUserName;
    MMTableView *_lotteryWinnerTableView;
    LotteryWinnerListHeaderView *_headerView;
    WCTimeLineFooterView *_footerView;
    LotteryWinnerListFooterView *_noMemAttendFooterView;
    NSData *_lastBuffer;
    MMFinderLiveTaskId *_currentLiveTaskId;
    NSString *_recordUrl;
    NSString *_expiredWording;
    MMFinderLiveLotteryRecordExpiredTipView *_expiredTipView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLotteryRecordExpiredTipView *expiredTipView; // @synthesize expiredTipView=_expiredTipView;
@property(retain, nonatomic) NSString *expiredWording; // @synthesize expiredWording=_expiredWording;
@property(nonatomic) unsigned int isUrlExpired; // @synthesize isUrlExpired=_isUrlExpired;
@property(nonatomic) _Bool showDownLoad; // @synthesize showDownLoad=_showDownLoad;
@property(retain, nonatomic) NSString *recordUrl; // @synthesize recordUrl=_recordUrl;
@property(retain, nonatomic) MMFinderLiveTaskId *currentLiveTaskId; // @synthesize currentLiveTaskId=_currentLiveTaskId;
@property(nonatomic) _Bool isAssistant; // @synthesize isAssistant=_isAssistant;
@property(nonatomic) _Bool isInLive; // @synthesize isInLive=_isInLive;
@property(nonatomic) _Bool enableToFinderChat; // @synthesize enableToFinderChat=_enableToFinderChat;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) LotteryWinnerListFooterView *noMemAttendFooterView; // @synthesize noMemAttendFooterView=_noMemAttendFooterView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) LotteryWinnerListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMTableView *lotteryWinnerTableView; // @synthesize lotteryWinnerTableView=_lotteryWinnerTableView;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) NSMutableArray *winnerList; // @synthesize winnerList=_winnerList;
- (void)gotoChatViewVCWithUserName:(id)arg1 objectId:(unsigned long long)arg2 lotteryId:(id)arg3 contact:(id)arg4 liveContactExtInfo:(id)arg5;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)downLoadClick;
- (void)timeOutClick;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)reloadData;
- (void)fetchWinRecordList;
- (void)layoutLotteryWinnerTableView;
- (void)layoutUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3 finderUserName:(id)arg4 lotteryInfo:(id)arg5 inLive:(_Bool)arg6 isAssistant:(_Bool)arg7 currentLiveTaskId:(id)arg8;
- (id)initWithLiveTaskId:(id)arg1 lotteryInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

