//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UICollectionView, UILabel;
@protocol WCStoryFriendVisitorListViewDataSource, WCStoryFriendVisitorListViewDelegate;

@interface WCStoryFriendVisitorListView
{
    id <WCStoryFriendVisitorListViewDelegate> _delegate;
    id <WCStoryFriendVisitorListViewDataSource> _dataSource;
    UICollectionView *_collectionView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCStoryFriendVisitorListViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCStoryFriendVisitorListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)flowLayout;
- (void)WCStoryFriendVisitHeadCell:(id)arg1 didClickHeadViewWithComment:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)updateUI;
- (void)setupGesture;
- (void)setupSubViews;
- (void)setup;
- (void)scrollToBottom:(_Bool)arg1;
- (void)reloadData;
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

