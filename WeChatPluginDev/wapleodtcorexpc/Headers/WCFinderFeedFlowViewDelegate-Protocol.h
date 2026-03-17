//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UIScrollViewDelegate-Protocol.h"

@class MMUIViewController, NSIndexPath, NSString, UICollectionReusableView, UICollectionViewCell, WCFinderFeedContentVM, WCFinderFeedFlowView, WCFinderFeedFlowViewReportParams, WCFinderFeedFlowViewTipsConfig, WCFinderFlowViewAutoPlayParams, WCFinderStreamLayout;
@protocol WCFinderFeedBaseViewControllerProtocol;

@protocol WCFinderFeedFlowViewDelegate <UIScrollViewDelegate>
- (unsigned long long)finderFeedFlowViewState:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(WCFinderFeedFlowView *)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(WCFinderFeedFlowView *)arg1;
- (MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *)finderFeedFlowViewCurrentViewController:(WCFinderFeedFlowView *)arg1;

@optional
- (_Bool)finderFeedFlowViewForbidenOpenFeedAutoAnimation:(WCFinderFeedFlowView *)arg1;
- (void)onFinderFeedFlowViewAnchor:(WCFinderFeedContentVM *)arg1;
- (void)onFinderFeedFlowViewDelete:(WCFinderFeedContentVM *)arg1 indexPath:(NSIndexPath *)arg2;
- (void)onFinderFeedFlowViewEditTag:(WCFinderFeedContentVM *)arg1;
- (void)onFinderFeedFlowViewForward:(WCFinderFeedContentVM *)arg1;
- (void)onFinderFeedFlowViewMultiSelect;
- (void)onFinderFeedFlowViewChangeMultiSelect;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didClickFollowTagLabel:(WCFinderFeedContentVM *)arg2;
- (void)finderFeedFlowViewStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 layout:(WCFinderStreamLayout *)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (void)finderFeedFlowViewDidScrollToTop:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didEndDisplayingSupplementaryView:(UICollectionReusableView *)arg2 forElementOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 willDisplaySupplementaryView:(UICollectionReusableView *)arg2 forElementKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)finderFeedFlowViewReloadData:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowViewDidFooterViewStateChange:(WCFinderFeedFlowView *)arg1 state:(unsigned long long)arg2;
- (WCFinderFlowViewAutoPlayParams *)finderFeedFlowViewAutoPlayParams:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowViewDidEndDragging:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowViewWillEndDragging:(WCFinderFeedFlowView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)finderFeedFlowViewWillBeginDragging:(WCFinderFeedFlowView *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedFlowViewDidEndScrolling:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 reportExtStatsReportAtIndexPath:(NSIndexPath *)arg2;
- (WCFinderFeedFlowViewReportParams *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 reportParametersAtIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didClickLinkWithUrl:(NSString *)arg2;
- (WCFinderFeedFlowViewTipsConfig *)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)finderFeedFlowViewDidScroll:(WCFinderFeedFlowView *)arg1;
- (unsigned long long)finderFeedFlowViewPrefetchRemainCount:(WCFinderFeedFlowView *)arg1;
- (void)finderFeedFlowViewFooterClickNavToRec;
@end

