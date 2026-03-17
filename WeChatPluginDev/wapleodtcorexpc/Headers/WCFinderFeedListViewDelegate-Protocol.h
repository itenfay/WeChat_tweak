//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMScrollActionSheet, MMScrollActionSheetItem, MMUIViewController, NSArray, NSIndexPath, NSString, UIScrollView, UITableViewCell, WCFinderCommonBottomBannerView, WCFinderFeedContentVM, WCFinderFeedListView, WCFinderPlayerReport, WCFinderTableViewParamModel;
@protocol WCFinderFeedBaseViewControllerProtocol;

@protocol WCFinderFeedListViewDelegate <NSObject>
- (MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *)finderFeedListViewCurrentViewController:(WCFinderFeedListView *)arg1;
- (void)finderFeedListViewRetryFetch:(WCFinderFeedListView *)arg1;
- (void)finderFeedListViewFetchMoreData:(WCFinderFeedListView *)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(WCFinderFeedListView *)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(WCFinderFeedListView *)arg1;

@optional
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 focusedFeedContentUserFollowStateChanged:(WCFinderFeedContentVM *)arg2;
- (unsigned long long)currentInletSourceOnFeedCellClickMemberShipPaymentGuideViewConfirmButton:(WCFinderFeedContentVM *)arg1;
- (_Bool)finderFeedListViewFriendsLikeListShouldShowFirstLikeLabel:(WCFinderFeedListView *)arg1;
- (_Bool)finderFeedListView:(WCFinderFeedListView *)arg1 canAutoOpenJumpInfo:(WCFinderFeedContentVM *)arg2;
- (void)finderFeedListViewAutoPlayNextFeedSwitchUpdated:(_Bool)arg1;
- (void)finderFeedListViewClickCollectionBubble:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListViewEndExpose;
- (void)finderFeedListViewStartExpose;
- (void)curFeedHalfScreenMovePregress:(double)arg1 heightRatio:(double)arg2;
- (void)curFeedHalfScreenIsShow:(_Bool)arg1;
- (void)finderFeedListCloseBottomBannerView:(WCFinderCommonBottomBannerView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (_Bool)finderFeedListViewEnableSwipeGesturePushProfilePage:(WCFinderFeedListView *)arg1;
- (_Bool)finderFeedListViewCanInPicture:(WCFinderFeedListView *)arg1;
- (void)finderFeedListViewClickBigButtonAction:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListViewDoubleLikeAction:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListViewClickAvatar:(NSString *)arg1 avatarType:(unsigned long long)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)finderFeedListViewClickFollowLikeBtnWithContentVM:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListClickBottomBannerView:(WCFinderCommonBottomBannerView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 triggerByUser:(_Bool)arg3;
- (void)finderFeedListViewRecommendClickAction:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListViewRecommendSwitchChangeWithContentVM:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListShowGuideToFinderMoreRelatedView:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListStartMediaPlay;
- (void)finderFeedListVideoMediaIsPause:(_Bool)arg1;
- (void)finderFeedListMediaDidStopPlay:(unsigned long long)arg1 contentVM:(WCFinderFeedContentVM *)arg2 finderPlayerReport:(WCFinderPlayerReport *)arg3;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(WCFinderFeedContentVM *)arg2 finderPlayerReport:(WCFinderPlayerReport *)arg3;
- (void)finderFeedListMediaCellBrowsePhotoLongTime:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListClickAllCommentAction;
- (void)finderFeedListClickToolbarFavActionWithContentVM:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListClickToolbarLikeActionWithContentVM:(WCFinderFeedContentVM *)arg1 isPrivateLike:(_Bool)arg2;
- (void)finderFeedListClickBeginFollowBtnActionWithContentVM:(WCFinderFeedContentVM *)arg1;
- (void)finderFeedListClickHeaderMoreAction;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 dislikeContentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 deleteContentVM:(WCFinderFeedContentVM *)arg2;
- (_Bool)finderFeedListViewShowsMoreButton:(WCFinderFeedListView *)arg1;
- (WCFinderTableViewParamModel *)finderFeedListViewCustomTableViewParam:(WCFinderFeedListView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 changeCurrentFocusIndexPath:(NSIndexPath *)arg2 currentFocusTid:(NSString *)arg3;
- (_Bool)finderFeedListView:(WCFinderFeedListView *)arg1 processingHeaderClick:(NSString *)arg2 avatarType:(unsigned long long)arg3 contentVM:(WCFinderFeedContentVM *)arg4;
- (void)finderFeedListViewDidEndDragging:(WCFinderFeedListView *)arg1 willDecelerate:(_Bool)arg2;
- (void)finderFeedListViewBeginDecelerating:(WCFinderFeedListView *)arg1;
- (void)finderFeedListViewDidEndDecelerating:(WCFinderFeedListView *)arg1;
- (void)finderFeedListViewDidEndScrollingAnimation:(WCFinderFeedListView *)arg1;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 willBeginDraging:(UIScrollView *)arg2;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)finderFeedList:(WCFinderFeedListView *)arg1 scrollActionSheet:(MMScrollActionSheet *)arg2 delContentVM:(WCFinderFeedContentVM *)arg3;
- (_Bool)finderFeedList:(WCFinderFeedListView *)arg1 scrollActionSheet:(MMScrollActionSheet *)arg2 customResponseSelecteItem:(MMScrollActionSheetItem *)arg3;
- (NSArray *)finderFeedList:(WCFinderFeedListView *)arg1 actionConfigureWithContentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 didEndDisplayingCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(WCFinderFeedListView *)arg1;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 stopPreloadWithIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedListView:(WCFinderFeedListView *)arg1 preloadFeedItemsWithCurrentIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(WCFinderFeedListView *)arg1;
- (void)finderFeedListViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3 contentVM:(WCFinderFeedContentVM *)arg4;
- (void)finderFeedListViewOnPollFetchTopData:(WCFinderFeedListView *)arg1;
- (_Bool)finderFeedListViewCanPollFetchTopData:(WCFinderFeedListView *)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(WCFinderFeedListView *)arg1;
- (_Bool)finderFeedListViewHeaderCanFetchData:(WCFinderFeedListView *)arg1;
@end

