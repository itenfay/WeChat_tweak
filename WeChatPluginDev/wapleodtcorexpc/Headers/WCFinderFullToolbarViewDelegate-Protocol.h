//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSURL, UIButton, WCFinderFeedContentVM;

@protocol WCFinderFullToolbarViewDelegate <NSObject>

@optional
- (_Bool)canShowTriangleShadowViewWithSourceType:(unsigned long long)arg1;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 commentOpenStateChanged:(_Bool)arg2;
- (void)onClickToolbarFeedAllViewedAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarFeedAllFavAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarFeedAllLikeAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarShareAction:(WCFinderFeedContentVM *)arg1 shareButton:(UIButton *)arg2;
- (void)onClickToolbarCollectionAction:(WCFinderFeedContentVM *)arg1 sourceType:(int)arg2;
- (void)onWillClickToolbarCollectionAction:(WCFinderFeedContentVM *)arg1;
- (void)clickRecommentUrl:(NSURL *)arg1;
- (void)onDidClickToolbarLikeAction:(WCFinderFeedContentVM *)arg1 isPrivateLike:(_Bool)arg2;
- (void)onWillClickToolbarLikeAction:(WCFinderFeedContentVM *)arg1 isPrivateLike:(_Bool)arg2;
- (void)onClickRealNameAction;
- (void)onRefreshToolbarUpdateFavDataFinished:(WCFinderFeedContentVM *)arg1;
- (void)onRefreshFriendLikeUI:(WCFinderFeedContentVM *)arg1;
- (void)onRefreshToolbarUI:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarCancelUploading:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarRetryUploading:(WCFinderFeedContentVM *)arg1;
- (void)onClickViewAllCommentAction:(WCFinderFeedContentVM *)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
@end

