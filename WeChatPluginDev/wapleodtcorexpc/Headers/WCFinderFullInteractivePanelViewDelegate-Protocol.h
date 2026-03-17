//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo_Style, FinderLiveNoticeInfo, NSString, NSURL, UIButton, UILongPressGestureRecognizer, UIView, WCFinderComment, WCFinderContact, WCFinderFeedContentTextView, WCFinderFeedContentVM, WCFinderFriendLikeToolbarView, WCFinderFullInteractivePanelView, WCFinderJumpInfo;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderFullInteractivePanelViewDelegate <NSObject>

@optional
- (void)interactivePanelClickEmotionAction:(NSString *)arg1 scene:(int)arg2;
- (void)interactivePanelClickRedPacketActionComment:(NSString *)arg1 scene:(int)arg2;
- (void)interactivePanelClickCommentActionComment:(NSString *)arg1 scene:(int)arg2;
- (void)interactivePanelClickCollectionDesc;
- (void)interactivePanelHotCommentCarousel;
- (_Bool)interactivePanelMediaPlaying;
- (void)interactivePanelTapHotComment:(WCFinderComment *)arg1;
- (void)interactivePanelTapSetRingToneGuideView;
- (struct CGRect)currentMediaViewFrame;
- (void)interactivePanelCollectionNextClicked:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
- (void)interactivePanelWithJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 changeToStyleWithIndex:(unsigned long long)arg2;
- (void)interactivePanelClickWithJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 clickArea:(unsigned long long)arg2 entranceType:(int)arg3;
- (void)interactivePanelExposeWithJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
- (void)interactivePanel:(WCFinderFullInteractivePanelView *)arg1 didLongPressWithGesture:(UILongPressGestureRecognizer *)arg2;
- (void)interactivePanelClickHotWord:(WCFinderFullInteractivePanelView *)arg1;
- (void)interactivePanelClickExtLink;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickEventTopicId:(unsigned long long)arg2;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickReadMore:(_Bool)arg2 isTouchExpand:(_Bool)arg3;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickContentUserName:(NSString *)arg2;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickMentionUsername:(NSString *)arg2 nickname:(NSString *)arg3;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickReplyUsername:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickSubCommentWeChat:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickSubComment:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickTopicText:(NSString *)arg2;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 longPressedText:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickText:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)interactivePanelTextView:(WCFinderFeedContentTextView *)arg1 clickReadMore:(_Bool)arg2;
- (void)interactivePanelLiveNoticeUpdateLiveNoticeInfo:(FinderLiveNoticeInfo *)arg1;
- (void)interactivePanelVideoTemplateClickAction:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelLastestLiveInfoClickAction:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelFriendLikeClickLikeAction:(WCFinderFriendLikeToolbarView *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 isNormalLiked:(_Bool)arg3;
- (void)interactivePanelFriendLikeRefreshFriendUI:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelFriendLikeClickLikeList:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelFriendOpenWeChatProfile:(NSString *)arg1;
- (void)interactivePanelToolbarCommentOpenStateChanged:(_Bool)arg1;
- (void)interactivePanelToolbarClickFeedAllViewedAction:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarClickFeedAllFavAction:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarClickFeedAllLikeAction:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarClickShareAction:(WCFinderFeedContentVM *)arg1 shareButton:(UIButton *)arg2;
- (void)interactivePanelToolbarClickCollectionAction:(WCFinderFeedContentVM *)arg1 sourceType:(int)arg2;
- (void)interactivePanelToolbarWillClickCollectionAction:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarClickRecommendUrl:(NSURL *)arg1;
- (void)interactivePanelToolbarWillClickLikeAction:(WCFinderFeedContentVM *)arg1 isPrivateLike:(_Bool)arg2;
- (void)interactivePanelToolbarClickLikeAction:(WCFinderFeedContentVM *)arg1 isPrivateLike:(_Bool)arg2;
- (void)interactivePanelToolbarClickRealNameAction;
- (void)interactivePanelToolbarFavDataFinished:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarStartLikeAnimation:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarRefreshFriendLikeUI:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarRefreshToolbarUI:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarClickCancelUploading:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarClickRetryUploading:(WCFinderFeedContentVM *)arg1;
- (void)interactivePanelToolbarClickViewAllComment:(WCFinderFeedContentVM *)arg1 isActiveInput:(_Bool)arg2 isFromCommentButton:(_Bool)arg3;
- (void)interactivePanelHeaderClickFollowBtn:(UIButton *)arg1;
- (void)interactivePanelHeaderClickMoreBtn:(UIButton *)arg1;
- (void)interactivePanelHeaderShowSpamTipsWithString:(NSString *)arg1;
- (void)interactivePanelHeaderClickNickname:(WCFinderContact *)arg1;
- (void)interactivePanelHeaderClickAvatar:(NSString *)arg1;
- (void)interactivePanelClickJumpCarouselShow;
- (void)interactivePanelBottomGradientHeightChanged;
- (void)interactivePanelVisibleHeightChanged;
- (void)interactivePanelClickAdGuideMoreDetailBtn;
- (void)interactivePanelClickAdGuideFollowBtn;
- (void)interactivePanelClickMoreAction:(UIButton *)arg1;
- (void)interactivePanelClickRedPacketLink;
- (void)interactivePanelClickPOILabel;
- (void)interactivePanelClickEventEntry;
- (void)interactivePanelClickButtonJumpCarouselView:(WCFinderJumpInfo *)arg1 style:(FinderJumpInfo_Style *)arg2;
- (void)interactivePanelClickBannerJumpCarouselView:(WCFinderJumpInfo *)arg1 style:(FinderJumpInfo_Style *)arg2;
@end

