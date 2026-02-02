//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveCardHighlightTag, FinderLiveCoverInfo, FinderLiveInfo, FinderPlayHistoryInfo, NSMutableArray, NSString, WCFinderComment, WCFinderDataItem, WCFinderFeedContentVM;

@protocol WCFinderFeedContentVMExt <NSObject>

@optional
- (void)onFeedJumpCarouselChanged:(WCFinderFeedContentVM *)arg1;
- (void)onFeedBottomScrollUpAndShowMutexFeatureView:(unsigned long long)arg1;
- (void)onFinderDataItemPlayHistoryInfoUpdateWithTid:(NSString *)arg1 playHistoryInfo:(FinderPlayHistoryInfo *)arg2;
- (void)onFeedContentCommentPromotionInfoChange:(WCFinderFeedContentVM *)arg1;
- (void)onFeedOriginalSoundInfoChanged:(WCFinderFeedContentVM *)arg1;
- (void)onFeedHotCommentChanged:(WCFinderFeedContentVM *)arg1;
- (void)onFeedWarningTipsChange:(WCFinderFeedContentVM *)arg1;
- (void)onForwardSharePreConfirmSend:(WCFinderFeedContentVM *)arg1 wxUsernameArray:(NSMutableArray *)arg2;
- (void)onFinishPublishingTextState:(WCFinderFeedContentVM *)arg1;
- (void)onForwardMessageCancelWithContentVM:(WCFinderFeedContentVM *)arg1 andUserArray:(NSMutableArray *)arg2;
- (void)onCancelForwardForForwardViewWithContentVM:(WCFinderFeedContentVM *)arg1;
- (void)onDoneForwardMessageWithContentVM:(WCFinderFeedContentVM *)arg1 andUserArray:(NSMutableArray *)arg2 isCertificateType:(_Bool)arg3;
- (void)onDoneForwardMessageWithContentVM:(WCFinderFeedContentVM *)arg1 andUserArray:(NSMutableArray *)arg2;
- (void)onFeedContentShowPromoteTips:(WCFinderFeedContentVM *)arg1;
- (void)onDoneForwardForForwardView:(WCFinderFeedContentVM *)arg1;
- (void)onDoneForwardForForwardViewWithContentVM:(WCFinderFeedContentVM *)arg1 isCertificateType:(_Bool)arg2;
- (void)onFeedContentSeparatorLineChange:(_Bool)arg1;
- (void)onFeedLastestLivingItemUpdate:(WCFinderDataItem *)arg1;
- (void)onFeedLiveAppointmentUpdate;
- (void)onFeedLiveAppointmentStatusChanged;
- (void)onFeedLastestLiveInfoUpdate:(FinderLiveInfo *)arg1;
- (void)onFeedLiveHighlightTagUpdate:(FinderLiveCardHighlightTag *)arg1;
- (void)onFeedLiveCoverInfoUpdate:(FinderLiveCoverInfo *)arg1;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(NSString *)arg2;
- (void)onFeedLiveStatusChanged:(NSString *)arg1 state:(unsigned long long)arg2;
- (void)onFinderContentVM:(WCFinderFeedContentVM *)arg1 asyncRecommendInfoUpdatedIncommentScene:(int)arg2;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 postCommentSuccessful:(WCFinderComment *)arg2;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 commentLikeStatusChangedWithCommentID:(unsigned long long)arg2 likeStatus:(_Bool)arg3;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 postTemplateCommentSuccessfulWithCommentId:(unsigned long long)arg2 targetFeedId:(NSString *)arg3 postFeedID:(NSString *)arg4;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 bulletCommentOpenStateChanged:(unsigned long long)arg2;
- (void)onFeedContentUpdateByURLExpired:(WCFinderFeedContentVM *)arg1;
- (void)onFeedBulletSwitchChangedNeedReflush:(WCFinderFeedContentVM *)arg1;
- (void)onFeedSubtitlePermissionChanged:(WCFinderFeedContentVM *)arg1;
- (void)onCNYBulletCommentNeedDisplay;
- (void)postCNYBulletComment:(NSString *)arg1 bulletCommentSource:(int)arg2 completion:(void (^)(_Bool))arg3;
- (void)onFeedContentJumpInfoContainerChanged:(WCFinderFeedContentVM *)arg1 isPureUIChanged:(_Bool)arg2 showPosition:(int)arg3 scene:(int)arg4 disableReport:(_Bool)arg5;
- (void)onFeedContentJumpInfoContainerChanged:(WCFinderFeedContentVM *)arg1 isPureUIChanged:(_Bool)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContentAdEntryItemChanged:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContentStickyTopStatueChanged:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContentFoldInfoChange:(NSString *)arg1 scene:(int)arg2;
- (void)onFeedContentUserFollowStateChanged:(NSString *)arg1;
- (void)onFeedContentUserNameChanged:(NSString *)arg1;
- (void)onFeedContentWarnWordingChanged:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContentWarnFlagChanged:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 privateStateChange:(_Bool)arg2;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 commentOpenStatueChanged:(NSString *)arg2;
- (void)onFeedContentFeedbackSatisfactionQuestFetchFail:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestUpdate:(WCFinderFeedContentVM *)arg1;
- (void)onFeedLiveContentDislikeAction:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContentBeDisliked:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContentFeedbackReasonFetchFail:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContentFeedbackReasonChanged:(WCFinderFeedContentVM *)arg1;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 likedDataUpdateByUserAction:(NSString *)arg2 likeFlag:(int)arg3;
- (void)onFinderDataItemBeDeletedWithTid:(NSString *)arg1;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 changeUploadStatus:(NSString *)arg2 progress:(double)arg3;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 changeUploadStatus:(NSString *)arg2;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 likedDataChanged:(NSString *)arg2;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 favDataChanged:(NSString *)arg2;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 commentDataChanged:(NSString *)arg2;
- (void)onFeedContent:(WCFinderFeedContentVM *)arg1 pauseChanged:(_Bool)arg2;
@end

