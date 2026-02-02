//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedFriendsLikeListViewController;

@interface NewLifeOpenLikeListHandler
{
    int _scene;
    WCFinderFeedFriendsLikeListViewController *_tmpLikeListVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderFeedFriendsLikeListViewController *tmpLikeListVC; // @synthesize tmpLikeListVC=_tmpLikeListVC;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)onFriendsLikeListViewControllerDisappear;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (_Bool)canShowMore;
- (void)handleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

