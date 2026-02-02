//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, NSMutableArray, NSString, UIView;

@interface BrandAuthListViewController
{
    unsigned int _state;
    int _initialUpdatedTimeStamp;
    unsigned long long _brandContactType;
    MMTableView *_tableView;
    UIView *_headerView;
    MMUILabel *_headerLabel;
    UIView *_topSeperatorLineView;
    unsigned long long _requestCount;
    MMUILabel *_emptyContentLabel;
    NSMutableArray *_scopeItemList;
}

- (void).cxx_destruct;
@property(nonatomic) int initialUpdatedTimeStamp; // @synthesize initialUpdatedTimeStamp=_initialUpdatedTimeStamp;
@property(retain, nonatomic) NSMutableArray *scopeItemList; // @synthesize scopeItemList=_scopeItemList;
@property(retain, nonatomic) MMUILabel *emptyContentLabel; // @synthesize emptyContentLabel=_emptyContentLabel;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) UIView *topSeperatorLineView; // @synthesize topSeperatorLineView=_topSeperatorLineView;
@property(retain, nonatomic) MMUILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned long long brandContactType; // @synthesize brandContactType=_brandContactType;
- (void)loadMoreData;
- (void)initRefreshControl;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initEmptyLabel;
- (void)initTableView;
- (void)initHeaderView;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

