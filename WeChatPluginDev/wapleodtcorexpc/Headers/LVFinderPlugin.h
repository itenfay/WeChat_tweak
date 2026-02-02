//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MegaVideoFinderCallback, NSNumber, NSString, UIViewController, WCFinderFeedContentVM;

@interface LVFinderPlugin : NSObject
{
    MegaVideoFinderCallback *_flutterCallback;
    UIViewController *_currentViewController;
    WCFinderFeedContentVM *_currentFeedContentVM;
    NSNumber *_scene;
}

+ (void)saveDataItemIfNeeded:(id)arg1;
+ (id)contentVMFromMegaFeed:(id)arg1 commentScene:(int)arg2;
+ (id)contentVMFromFinderObject:(id)arg1 commentScene:(int)arg2;
+ (id)contentVMFromFinderObjectBytes:(id)arg1 commentScene:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderFeedContentVM *currentFeedContentVM; // @synthesize currentFeedContentVM=_currentFeedContentVM;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) MegaVideoFinderCallback *flutterCallback; // @synthesize flutterCallback=_flutterCallback;
- (void)report18054AvatarClickFeed:(id)arg1 commentScene:(long long)arg2 avatarType:(long long)arg3 isLandscape:(_Bool)arg4 error:(id *)arg5;
- (void)statReportFlushWithError:(id *)arg1;
- (void)statReportExposeEndFeed:(id)arg1 commentscene:(long long)arg2 reportContext:(id)arg3 error:(id *)arg4;
- (void)statReportExposeStartFeed:(id)arg1 commentscene:(long long)arg2 error:(id *)arg3;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)dealloc;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onSeeLaterStateChanged:(_Bool)arg1 withDataItem:(id)arg2;
- (void)onFinderContactFollowListHasChange:(id)arg1;
- (void)onFinderDataItem:(id)arg1 updateFavStateByExtention:(_Bool)arg2;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)arg1;
- (void)getFinderContactInfoUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getGlobalPlayProgressesOfTidsTids:(id)arg1 error:(id *)arg2;
- (void)followFinderAccoutFeed:(id)arg1 isFollow:(_Bool)arg2 commentscene:(long long)arg3 error:(id *)arg4;
- (void)heartLikeFeedFeed:(id)arg1 isLike:(_Bool)arg2 commentscene:(long long)arg3 error:(id *)arg4;
- (void)thumbFavFeedFeed:(id)arg1 isFav:(_Bool)arg2 commentscene:(long long)arg3 error:(id *)arg4;
- (void)addToTingListenLater:(id)arg1;
- (void)shareFeedFeed:(id)arg1 scene:(long long)arg2 commentScene:(long long)arg3 error:(id *)arg4;
- (void)shareFeedToUserFeed:(id)arg1 username:(id)arg2 scene:(long long)arg3 commentScene:(long long)arg4 error:(id *)arg5;
- (id)getSharePanelItemsConfigFeed:(id)arg1 commentScene:(long long)arg2 options:(id)arg3 error:(id *)arg4;
- (void)openFinderProfileUsername:(id)arg1 commentScene:(long long)arg2 isInHalfPanel:(_Bool)arg3 feed:(id)arg4 error:(id *)arg5;
- (id)enableAirPlayVideoWithError:(id *)arg1;
- (id)showRingToneEntranceWithError:(id *)arg1;
- (id)ringToneVideoDurationLimitWithError:(id *)arg1;
- (id)showFavEntryOnActionSheetWithError:(id *)arg1;
- (id)feedSetToSNSCoverSwitchWithError:(id *)arg1;
- (id)videoCoverEnabledWithError:(id *)arg1;
- (id)shouldShowTextStateWithError:(id *)arg1;
- (id)bulletCommentShowDurationWithError:(id *)arg1;
- (void)reportBulletCommentFeed:(id)arg1 commentScene:(long long)arg2 commentInfoId:(id)arg3 error:(id *)arg4;
- (id)bulletCommentStrokeWidthWithError:(id *)arg1;
- (id)bulletCommentStrokeColorAlphaWithError:(id *)arg1;
- (id)bulletCommentFontSizeWithError:(id *)arg1;
- (id)bulletCommentPortraitNumberOfLinesWithError:(id *)arg1;
- (id)enableShowBulletCommentFeed:(id)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (void)showFansProfileUsername:(id)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (void)onTapMoreButtonInFriendsLikeListFeed:(id)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (id)isSelfUsernameUsername:(id)arg1 error:(id *)arg2;
- (void)setFinderIdentityType:(long long)arg1 error:(id *)arg2;
- (id)getFinderIdentityTypeWithError:(id *)arg1;
- (void)getSelfFinderContactWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSelfWeChatContactWithCompletion:(CDUnknownBlockType)arg1;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

