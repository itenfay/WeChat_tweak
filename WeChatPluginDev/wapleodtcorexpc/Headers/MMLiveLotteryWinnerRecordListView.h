//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveLotteryDisplayLogic, MMFinderLiveLotteryInfo, MMFinderLiveTaskId, MMLoadingView, MMTableView, NSData, NSMutableArray, NSString, UIImageView, WCTimeLineFooterView;

@interface MMLiveLotteryWinnerRecordListView : UIView
{
    _Bool _isAssistant;
    MMTableView *_lotteryWinnersTableView;
    NSMutableArray *_winnerList;
    MMFinderLiveTaskId *_liveTaskId;
    NSString *_lotteryId;
    NSData *_lastBuffer;
    MMFinderLiveLotteryInfo *_lotteryInfo;
    MMLoadingView *_loadingView;
    WCTimeLineFooterView *_footerView;
    MMFinderLiveLotteryDisplayLogic *_lotteryDisplayLogic;
    UIImageView *_bgImageView;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak MMFinderLiveLotteryDisplayLogic *lotteryDisplayLogic; // @synthesize lotteryDisplayLogic=_lotteryDisplayLogic;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(nonatomic) _Bool isAssistant; // @synthesize isAssistant=_isAssistant;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSMutableArray *winnerList; // @synthesize winnerList=_winnerList;
@property(retain, nonatomic) MMTableView *lotteryWinnersTableView; // @synthesize lotteryWinnersTableView=_lotteryWinnersTableView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)fetchWinnerList;
- (void)resetWinnerList;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 liveTaskId:(id)arg2 lotteryId:(id)arg3 lotteryDisplayLogic:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

