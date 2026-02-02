//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDiffableDataSourceSnapshot, NSString, UITableView, UITableViewDiffableDataSource;

@interface WCFinderCommentFriendLikeListView
{
    UITableView *_tableView;
    NSArray *_likeInfoArray;
    NSDiffableDataSourceSnapshot *_snapShot;
    UITableViewDiffableDataSource *_source;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableViewDiffableDataSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *snapShot; // @synthesize snapShot=_snapShot;
@property(retain, nonatomic) NSArray *likeInfoArray; // @synthesize likeInfoArray=_likeInfoArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)onClickMore;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)loadContentView;
- (_Bool)hideMaskBackGroundView;
- (void)viewDidLoad;
- (id)initWithContactArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

