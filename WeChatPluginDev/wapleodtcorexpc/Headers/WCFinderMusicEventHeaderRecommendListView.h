//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITableView, UITableViewDiffableDataSource, WCFinderMusicEventHeaderRecommendListVM;
@protocol WCFinderMusicEventHeaderRecommendListViewDelegate;

@interface WCFinderMusicEventHeaderRecommendListView
{
    id <WCFinderMusicEventHeaderRecommendListViewDelegate> _delegate;
    UILabel *_titleLabel;
    UITableView *_tableView;
    UITableViewDiffableDataSource *_diffDataSource;
    WCFinderMusicEventHeaderRecommendListVM *_viewModel;
}

+ (double)heightWithMusicTopicInfo:(id)arg1;
+ (double)tableViewHeightWithMusicTopicInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMusicEventHeaderRecommendListVM *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableViewDiffableDataSource *diffDataSource; // @synthesize diffDataSource=_diffDataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderMusicEventHeaderRecommendListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onfinderMusicEventHeadTableViewCellClickActionButton:(id)arg1;
- (void)updateWithMusicTopicInfo:(id)arg1;
- (void)applyDiffSnapshot;
- (void)setupSubViews;
- (void)setupViewModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

