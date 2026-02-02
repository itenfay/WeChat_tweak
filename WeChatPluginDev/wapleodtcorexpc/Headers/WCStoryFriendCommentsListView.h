//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITableView;
@protocol WCStoryFriendCommentsListViewDataSource, WCStoryFriendCommentsListViewDelegate;

@interface WCStoryFriendCommentsListView
{
    id <WCStoryFriendCommentsListViewDelegate> _delegate;
    id <WCStoryFriendCommentsListViewDataSource> _dataSource;
    UITableView *_tableView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCStoryFriendCommentsListViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCStoryFriendCommentsListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)StoryFriendCommmentHeadCellD:(id)arg1 didClickHeadViewWithComment:(id)arg2;
- (void)StoryFriendCommmentHeadCellD:(id)arg1 didClickBodyViewWithComment:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)setupGesture;
- (void)updateUI;
- (void)setupSubViews;
- (void)setup;
- (void)reloadData;
- (void)scrollToBottom:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

