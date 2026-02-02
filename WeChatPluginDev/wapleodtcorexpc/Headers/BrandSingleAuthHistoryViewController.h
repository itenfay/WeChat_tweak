//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, NSMutableArray, NSString;

@interface BrandSingleAuthHistoryViewController
{
    unsigned int _state;
    int _initialUpdatedTimeStamp;
    MMTableView *_tableView;
    MMUILabel *_emptyContentLabel;
    NSString *_userName;
    NSMutableArray *_recordsList;
}

- (void).cxx_destruct;
@property(nonatomic) int initialUpdatedTimeStamp; // @synthesize initialUpdatedTimeStamp=_initialUpdatedTimeStamp;
@property(retain, nonatomic) NSMutableArray *recordsList; // @synthesize recordsList=_recordsList;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) MMUILabel *emptyContentLabel; // @synthesize emptyContentLabel=_emptyContentLabel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (void)initRefreshControl;
- (void)loadMoreData;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initTableView;
- (id)navigationBarBackgroundColor;
- (void)initEmptyLabel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

