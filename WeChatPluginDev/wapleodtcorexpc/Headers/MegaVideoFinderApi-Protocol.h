//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterStandardTypedData, MegaVideoFeedInfo, NSArray, NSNumber, NSString;

@protocol MegaVideoFinderApi
- (void)report18054AvatarClickFeed:(MegaVideoFeedInfo *)arg1 commentScene:(long long)arg2 avatarType:(long long)arg3 isLandscape:(_Bool)arg4 error:(id *)arg5;
- (void)statReportFlushWithError:(id *)arg1;
- (void)statReportExposeEndFeed:(MegaVideoFeedInfo *)arg1 commentscene:(long long)arg2 reportContext:(FlutterStandardTypedData *)arg3 error:(id *)arg4;
- (void)statReportExposeStartFeed:(MegaVideoFeedInfo *)arg1 commentscene:(long long)arg2 error:(id *)arg3;
- (void)getFinderContactInfoUsername:(NSString *)arg1 completion:(void (^)(MegaVideoContact *, FlutterError *))arg2;
- (NSArray *)getGlobalPlayProgressesOfTidsTids:(NSArray *)arg1 error:(id *)arg2;
- (void)followFinderAccoutFeed:(MegaVideoFeedInfo *)arg1 isFollow:(_Bool)arg2 commentscene:(long long)arg3 error:(id *)arg4;
- (void)heartLikeFeedFeed:(MegaVideoFeedInfo *)arg1 isLike:(_Bool)arg2 commentscene:(long long)arg3 error:(id *)arg4;
- (void)thumbFavFeedFeed:(MegaVideoFeedInfo *)arg1 isFav:(_Bool)arg2 commentscene:(long long)arg3 error:(id *)arg4;
- (void)shareFeedFeed:(MegaVideoFeedInfo *)arg1 scene:(long long)arg2 commentScene:(long long)arg3 error:(id *)arg4;
- (void)shareFeedToUserFeed:(MegaVideoFeedInfo *)arg1 username:(NSString *)arg2 scene:(long long)arg3 commentScene:(long long)arg4 error:(id *)arg5;
- (NSArray *)getSharePanelItemsConfigFeed:(MegaVideoFeedInfo *)arg1 commentScene:(long long)arg2 options:(NSString *)arg3 error:(id *)arg4;
- (void)openFinderProfileUsername:(NSString *)arg1 commentScene:(long long)arg2 isInHalfPanel:(_Bool)arg3 feed:(MegaVideoFeedInfo *)arg4 error:(id *)arg5;
- (NSNumber *)enableAirPlayVideoWithError:(id *)arg1;
- (NSNumber *)showRingToneEntranceWithError:(id *)arg1;
- (NSNumber *)ringToneVideoDurationLimitWithError:(id *)arg1;
- (NSNumber *)showFavEntryOnActionSheetWithError:(id *)arg1;
- (NSNumber *)feedSetToSNSCoverSwitchWithError:(id *)arg1;
- (NSNumber *)videoCoverEnabledWithError:(id *)arg1;
- (NSNumber *)shouldShowTextStateWithError:(id *)arg1;
- (void)reportBulletCommentFeed:(MegaVideoFeedInfo *)arg1 commentScene:(long long)arg2 commentInfoId:(NSString *)arg3 error:(id *)arg4;
- (NSNumber *)bulletCommentShowDurationWithError:(id *)arg1;
- (NSNumber *)bulletCommentStrokeWidthWithError:(id *)arg1;
- (NSNumber *)bulletCommentStrokeColorAlphaWithError:(id *)arg1;
- (NSNumber *)bulletCommentFontSizeWithError:(id *)arg1;
- (NSNumber *)bulletCommentPortraitNumberOfLinesWithError:(id *)arg1;
- (NSNumber *)enableShowBulletCommentFeed:(MegaVideoFeedInfo *)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (void)showFansProfileUsername:(NSString *)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (void)onTapMoreButtonInFriendsLikeListFeed:(MegaVideoFeedInfo *)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (NSNumber *)isSelfUsernameUsername:(NSString *)arg1 error:(id *)arg2;
- (void)setFinderIdentityType:(long long)arg1 error:(id *)arg2;
- (NSNumber *)getFinderIdentityTypeWithError:(id *)arg1;
- (void)getSelfFinderContactWithCompletion:(void (^)(MegaVideoContact *, FlutterError *))arg1;
- (void)getSelfWeChatContactWithCompletion:(void (^)(MegaVideoContact *, FlutterError *))arg1;
@end

