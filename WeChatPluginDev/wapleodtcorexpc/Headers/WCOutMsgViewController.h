//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, WCTimeLineFooterView;

@interface WCOutMsgViewController
{
    _Bool _bHasMoreItems;
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_arrMsgInMemory;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasMoreItems; // @synthesize bHasMoreItems=_bHasMoreItems;
@property(retain, nonatomic) NSMutableArray *arrMsgInMemory; // @synthesize arrMsgInMemory=_arrMsgInMemory;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)getMoreData;
- (void)getData;
- (void)addMsgWithArray:(id)arg1 MoreData:(_Bool)arg2;
- (void)initTableView;
- (void)initTableFooterView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

