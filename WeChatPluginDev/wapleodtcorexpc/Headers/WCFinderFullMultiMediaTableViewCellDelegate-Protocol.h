//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo_Style, NSString, NSURL, UIButton, UILongPressGestureRecognizer, UIView, WCFinderBulletItem, WCFinderComment, WCFinderCommonBottomBannerView, WCFinderDataItem, WCFinderFeedContentVM, WCFinderFeedMediaWrap, WCFinderFeedStreamLiveCellRouterModel, WCFinderFullMultiMediaTableViewCell, WCFinderJumpInfo, WCFinderLongPressRatePlayStateModel, WCFinderPlayerReport;

@protocol WCFinderFullMultiMediaTableViewCellDelegate <NSObject>

@optional
- (_Bool)isLastDataItemAfterContentVM:(WCFinderFeedContentVM *)arg1;
- (_Bool)isNoMoreDataItemAfterContentVM:(WCFinderFeedContentVM *)arg1;
- (void)multiMediaCell:(WCFinderFullMultiMediaTableViewCell *)arg1 didChangePinchVideoState:(_Bool)arg2;
- (_Bool)multiMediaCellHandleAccessibilityScroll:(long long)arg1;
- (void)onFeedCellShouldCheckPopupViewFromContentVM:(WCFinderFeedContentVM *)arg1 enablePopUpShow:(_Bool)arg2;
- (void)onFeedCellClickMiaoJianMusic:(WCFinderFeedContentVM *)arg1 musicId:(NSString *)arg2 tingListenId:(NSString *)arg3;
- (void)onFeedCellClickGuideMakeEmotion:(WCFinderFeedContentVM *)arg1;
- (void)onFeedCellClickMemberShipPaymentGuideViewConfirmButtonWithContentVM:(WCFinderFeedContentVM *)arg1;
- (void)onFeedCellClickPostComment:(NSString *)arg1 scene:(int)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)onFeedCellClickCollectionDesc:(WCFinderFeedContentVM *)arg1;
- (void)onMoreBulletComment:(WCFinderBulletItem *)arg1 isInBlackList:(_Bool)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)onFeedCellClickHotComment:(WCFinderComment *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onCommentOpenStateChanged:(_Bool)arg1;
- (void)onBulletCommentOpenStateChanged:(NSString *)arg1;
- (void)onUnBlockBulletComment:(WCFinderBulletItem *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onBlockBulletComment:(WCFinderBulletItem *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onDeleteBulletComment:(WCFinderBulletItem *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onReportBulletComment:(WCFinderBulletItem *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onFeedCellClickBulletCommentButton;
- (void)onFeedCellClickSetRingToneGuideView:(WCFinderFeedContentVM *)arg1;
- (void)onFeedCellPreparedMediaContent:(WCFinderFeedContentVM *)arg1;
- (void)onFeedShowPostEntranceByContentVM:(WCFinderFeedContentVM *)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)onFeedClickJumpInfo:(WCFinderJumpInfo *)arg1 style:(FinderJumpInfo_Style *)arg2;
- (void)onFeedCellClickHotWord:(WCFinderFeedContentVM *)arg1;
- (void)onClickBigButton:(WCFinderFeedContentVM *)arg1;
- (void)onClickAdGuideFollowBtn:(WCFinderFeedContentVM *)arg1;
- (void)onClickEventEntry:(WCFinderFeedContentVM *)arg1;
- (void)finderFriendLikeTableViewCellClickLikeAction:(WCFinderFullMultiMediaTableViewCell *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 isNormalLiked:(_Bool)arg3;
- (void)clickRecommendUrl:(NSURL *)arg1;
- (void)onRefreshFriendUI:(WCFinderFeedContentVM *)arg1;
- (void)onClickFriendLikeListDetail:(WCFinderFeedContentVM *)arg1;
- (void)onClickFriendWeChatProfile:(NSString *)arg1;
- (void)onClickMoreRelatedTipsButton:(WCFinderFeedContentVM *)arg1;
- (void)onClickFeedPatMusicAction:(WCFinderFeedContentVM *)arg1 enableClick:(_Bool)arg2;
- (void)onClickContentUsernameAction:(WCFinderFeedContentVM *)arg1;
- (void)onRefreshContentCellUI:(WCFinderFeedContentVM *)arg1;
- (void)onClickContentMentionAction:(NSString *)arg1 nickname:(NSString *)arg2 dataItem:(WCFinderDataItem *)arg3;
- (void)onClickContentTopicAction:(NSString *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)clickContentPOIAction:(WCFinderDataItem *)arg1;
- (void)onClickContentExtReadingAction:(NSURL *)arg1;
- (void)onContentTableViewMediaTableViewCell:(WCFinderFullMultiMediaTableViewCell *)arg1 longPressContentAction:(WCFinderFeedContentVM *)arg2 rect:(struct CGRect)arg3;
- (void)onClickContentReadMoreAction:(WCFinderFeedContentVM *)arg1 isExpand:(_Bool)arg2;
- (void)onClickToolbarFeedAllViewedAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarFeedAllFavAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarFeedAllLikeAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarShareAction:(WCFinderFeedContentVM *)arg1 shareButton:(UIButton *)arg2;
- (void)onClickToolbarCollectionAction:(WCFinderFeedContentVM *)arg1 sourceType:(int)arg2;
- (void)onWillClickToolbarCollectionAction:(WCFinderFeedContentVM *)arg1;
- (void)clickRecommentUrl:(NSURL *)arg1;
- (void)onClickToolbarLikeAction:(WCFinderFeedContentVM *)arg1 isPrivateLike:(_Bool)arg2;
- (void)onWillClickToolbarLikeAction:(WCFinderFeedContentVM *)arg1 isPrivateLike:(_Bool)arg2;
- (void)onClickRealNameAction;
- (void)onRefreshToolbarUpdateFavDataFinished:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarCancelUploading:(WCFinderFeedContentVM *)arg1;
- (void)onClickToolbarRetryUploading:(WCFinderFeedContentVM *)arg1;
- (void)onClickViewAllCommentAction:(WCFinderFeedContentVM *)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (void)onCurMultiMediaCellNPSFlutterShowing:(_Bool)arg1 cell:(WCFinderFullMultiMediaTableViewCell *)arg2;
- (void)onFeedContentUserFollowStateChangedWithContentVM:(WCFinderFeedContentVM *)arg1;
- (void)onLongPressMediaInCell:(WCFinderFeedContentVM *)arg1;
- (void)onCellTriggerAntiAddictCheckLogic;
- (void)multiMediaCellClickTemplateCommentSuspendViewConfirmViewWithDataItem:(WCFinderDataItem *)arg1 commentId:(unsigned long long)arg2;
- (_Bool)multiMediaCellCanAutoOpenJumpInfo:(WCFinderFullMultiMediaTableViewCell *)arg1;
- (void)multiMediaCellForceToProtrait:(WCFinderFullMultiMediaTableViewCell *)arg1;
- (void)multiMediaCellInPicture:(WCFinderFullMultiMediaTableViewCell *)arg1;
- (void)multiMediaCell:(WCFinderFullMultiMediaTableViewCell *)arg1 handlePortoailLongPressGesture:(UILongPressGestureRecognizer *)arg2 stateModel:(WCFinderLongPressRatePlayStateModel *)arg3;
- (void)multiMediaCellPlayRateView:(WCFinderFullMultiMediaTableViewCell *)arg1 playSpeedViewAnimatedChangeComplete:(long long)arg2;
- (void)multiMediaCellPlayRateView:(WCFinderFullMultiMediaTableViewCell *)arg1 playSpeedViewWillStartAnimatedChange:(long long)arg2;
- (_Bool)multiMediaCell:(WCFinderFullMultiMediaTableViewCell *)arg1 isTouchPlayRateOperationV3View:(UILongPressGestureRecognizer *)arg2;
- (void)multiMediaCellShowPlayRate:(WCFinderFullMultiMediaTableViewCell *)arg1;
- (_Bool)multiMediaCell:(WCFinderFullMultiMediaTableViewCell *)arg1 shouldShowDislikeButton:(WCFinderFeedContentVM *)arg2;
- (void)onMultiMediaCell:(WCFinderFullMultiMediaTableViewCell *)arg1 beDisliked:(WCFinderFeedContentVM *)arg2;
- (void)onMultiMediaCell:(WCFinderFullMultiMediaTableViewCell *)arg1 videoTemplateClickAction:(WCFinderFeedContentVM *)arg2;
- (void)onMultiMediaCell:(WCFinderFullMultiMediaTableViewCell *)arg1 lastestLiveInfoClickAction:(WCFinderFeedContentVM *)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFeedContentWarnFlagChanged:(WCFinderFeedContentVM *)arg1;
- (_Bool)onMultiMediaCellIsInHotSpots:(WCFinderFeedContentVM *)arg1;
- (void)onLiveFeedStatusChanged:(WCFinderFeedContentVM *)arg1;
- (void)onLiveFeedDidTap:(WCFinderFeedContentVM *)arg1 routeModel:(WCFinderFeedStreamLiveCellRouterModel *)arg2;
- (void)onVideoPlayDecoderError:(NSString *)arg1;
- (void)onVideoPlayWithReport:(WCFinderPlayerReport *)arg1 mediaWrap:(WCFinderFeedMediaWrap *)arg2 currentIndex:(unsigned long long)arg3 forContentVM:(WCFinderFeedContentVM *)arg4;
- (_Bool)finderMulitMediaTableViewCellCanProgressGestureWithTid:(NSString *)arg1;
- (void)onFullFeedCell:(WCFinderFullMultiMediaTableViewCell *)arg1 didPausePhotoBGM:(NSString *)arg2;
- (void)onFullFeedCell:(WCFinderFullMultiMediaTableViewCell *)arg1 didPlayPhotoBGM:(NSString *)arg2;
- (void)onHeaderFollowBtnClickAction:(WCFinderFeedContentVM *)arg1 followButton:(UIButton *)arg2;
- (void)onHeaderMoreClickAction:(WCFinderFeedContentVM *)arg1 shareButton:(UIButton *)arg2;
- (void)onFeedVideoStopPlay:(WCFinderFullMultiMediaTableViewCell *)arg1 tid:(NSString *)arg2;
- (void)showSpamTipsWithString:(NSString *)arg1;
- (void)onFeedCellDidClickAvatar:(NSString *)arg1 avatarType:(unsigned long long)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)didFeedDoubleThumbLikeAction:(WCFinderFeedContentVM *)arg1;
- (void)didFeedDoubleLikeAction:(WCFinderFeedContentVM *)arg1;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)onCurrentBGMDidEndPlay:(WCFinderFeedContentVM *)arg1;
- (void)contentMediaDidStopPlay:(unsigned long long)arg1 contentVM:(WCFinderFeedContentVM *)arg2 finderPlayerReport:(WCFinderPlayerReport *)arg3;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(WCFinderFeedContentVM *)arg2 finderPlayerReport:(WCFinderPlayerReport *)arg3;
- (void)photoContentPageTurning:(WCFinderFeedContentVM *)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)onCloseBottomBannerView:(WCFinderCommonBottomBannerView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onClickBottomBannerView:(WCFinderCommonBottomBannerView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 triggerByUser:(_Bool)arg3;
- (void)multiMediaCell:(WCFinderFullMultiMediaTableViewCell *)arg1 shouldPauseVideoIfSupport:(_Bool)arg2;
- (void)multiMediaCellBrowsePhotoLongTime:(WCFinderFeedContentVM *)arg1;
- (UIView *)getCurrentTopBubbleView:(WCFinderFeedContentVM *)arg1;
- (void)scrollToNextFeedWithContentVM:(WCFinderFeedContentVM *)arg1;
@end

