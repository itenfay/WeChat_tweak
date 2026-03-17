//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSDictionary, NSString, UIView, WCBaseTimelineViewController, WCContentItemBaseView, WCDataItem;

@protocol WCTimeLineCellViewDelegate <NSObject>

@optional
- (void)onAdFireworkCheerCommentAnimationStarted:(WCDataItem *)arg1;
- (void)onAdSocialLikeViewAnimationFinished:(WCDataItem *)arg1;
- (void)onAdSocialLikeViewAnimationStarted:(WCDataItem *)arg1;
- (void)onAdSocialLikeViewCommentClicked:(WCDataItem *)arg1;
- (void)onAdSocialLikeViewLikeClicked:(WCDataItem *)arg1;
- (void)onAdSocialLikeViewLikeTouched:(WCDataItem *)arg1;
- (void)onSearchTopicTagClicked:(WCDataItem *)arg1 query:(NSString *)arg2;
- (void)onAdFeedbackBtnClick:(WCDataItem *)arg1 point:(struct CGPoint)arg2 buttonWidth:(double)arg3;
- (void)cacheMediaCellView:(WCContentItemBaseView *)arg1 forData:(WCDataItem *)arg2;
- (WCContentItemBaseView *)getCachedMediaCellViewForData:(WCDataItem *)arg1;
- (void)onActionAtAd:(WCDataItem *)arg1;
- (WCBaseTimelineViewController *)getCurTimeLineViewController;
- (UIView *)getView;
- (void)onShowDetailChanged:(WCDataItem *)arg1 bShowDetailBeforeChange:(_Bool)arg2;
- (void)onActionAdPOI:(WCDataItem *)arg1;
- (void)onRestoreTimeLineCellView:(WCDataItem *)arg1;
- (void)onShowOriginalTextFromTranslate:(WCDataItem *)arg1;
- (void)onActionClearCellCacheAndRefreshCellView:(WCDataItem *)arg1;
- (void)onActionLocation:(WCDataItem *)arg1;
- (void)onTimeLineCellMoreMenu:(WCDataItem *)arg1 forScene:(unsigned int)arg2;
- (void)onTimeLineCellMoreMenu:(WCDataItem *)arg1;
- (void)onShowDetailViewForDataItem:(WCDataItem *)arg1;
- (void)onEditBlackList:(WCDataItem *)arg1;
- (void)onUpdateDataItem:(WCDataItem *)arg1 oldHeight:(double)arg2 newHeight:(double)arg3;
- (void)onReEditDataItem:(WCDataItem *)arg1;
- (void)onResendDataItem:(WCDataItem *)arg1;
- (void)onDeleteDataItem:(WCDataItem *)arg1;
- (void)onAdvertiseAction:(WCDataItem *)arg1 point:(struct CGPoint)arg2;
- (void)onAccessibilityShowDetailDataItem:(WCDataItem *)arg1;
- (void)onAccessibilityCommentDataItem:(WCDataItem *)arg1;
- (void)onCommentDataItem:(WCDataItem *)arg1 point:(struct CGPoint)arg2;
- (void)onLinkClickedItem:(WCDataItem *)arg1 url:(NSString *)arg2 backupUrl:(NSString *)arg3 withRect:(struct CGRect)arg4 clickSource:(long long)arg5 originView:(UIView *)arg6;
- (void)onLinkClickedItem:(WCDataItem *)arg1 url:(NSString *)arg2 backupUrl:(NSString *)arg3 withRect:(struct CGRect)arg4 extraInfo:(NSDictionary *)arg5;
- (void)onWCTimeLineCellViewChangeTranslateLanguage:(WCDataItem *)arg1;
- (void)onWCTimeLineCellViewUnstar:(WCDataItem *)arg1;
- (void)onWCTimeLineCellViewShowGroup:(WCDataItem *)arg1;
- (void)onWCTimeLineCellViewShowProfile:(CContact *)arg1;
- (void)onWCTimeLineCellViewDeletePhotoClick:(WCDataItem *)arg1;
- (void)onWCTimeLineCellViewActionJump:(WCDataItem *)arg1;
- (void)onWCTimeLineCellViewActionMusic:(WCDataItem *)arg1;
- (void)onWCTimeLineCellViewActionAdPOI:(WCDataItem *)arg1;
- (void)onWCTimeLineCellViewActionAdChainStrengthen:(WCDataItem *)arg1;
@end

