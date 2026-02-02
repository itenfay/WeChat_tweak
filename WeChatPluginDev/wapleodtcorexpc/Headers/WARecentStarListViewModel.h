//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAMainListPageLogic, WAMainListStarLogic, WAPackageSweeperLogic;
@protocol WADesktopStarListReportDelegate;

@interface WARecentStarListViewModel
{
    WAPackageSweeperLogic *m_sweepLogic;
    id <WADesktopStarListReportDelegate> _reportDelegate;
    WAMainListStarLogic *_starLogic;
    WAMainListPageLogic *_pageLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAMainListPageLogic *pageLogic; // @synthesize pageLogic=_pageLogic;
@property(nonatomic) __weak WAMainListStarLogic *starLogic; // @synthesize starLogic=_starLogic;
@property(nonatomic) __weak id <WADesktopStarListReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)onWeAppItemOpened:(id)arg1;
- (void)didFinishFetchNextPageItemsErrorWithErrCode:(int)arg1;
- (void)didFinishFetchNextPageItems:(id)arg1 pageNum:(unsigned int)arg2 beginPos:(unsigned long long)arg3;
- (void)reportItemMoveFrom:(id)arg1 fromIndex:(long long)arg2 to:(long long)arg3;
- (void)reportItemStared:(id)arg1 index:(long long)arg2;
- (void)reportItemDeleted:(id)arg1 index:(long long)arg2;
- (void)fetchNextPageItems;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)starOrMoveItem:(id)arg1;
- (_Bool)starItem:(long long)arg1;
- (_Bool)deleteItem:(long long)arg1;
- (void)moveItemFrom:(long long)arg1 toIndex:(long long)arg2;
- (_Bool)canMove;
- (void)refreshData;
- (void)initPageLogic;
- (id)dataForIndex:(long long)arg1;
- (long long)getStarNumberLimitation;
- (_Bool)isReachLimit;
- (_Bool)hasNoMore;
- (_Bool)hasData;
- (long long)count;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

