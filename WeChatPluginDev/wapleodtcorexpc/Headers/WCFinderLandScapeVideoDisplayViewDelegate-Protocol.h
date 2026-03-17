//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderComment, WCFinderDataItem, WCFinderFeedContentVM;

@protocol WCFinderLandScapeVideoDisplayViewDelegate <NSObject>

@optional
- (void)onFinderLandScapeVideoDisplayViewPlaySvrContinuePlayFeed;
- (void)onFinderLandScapeVideoDisplayViewPlayAnotherCollectionFeed:(WCFinderFeedContentVM *)arg1 manual:(_Bool)arg2;
- (void)onFinderLandScapeVideoDisplayViewCollectionShowStateChanged;
- (void)onFinderLandScapeVideoDisplayViewAntiAddictCheckLogic;
- (void)onFinderLandScapeVideoDisplayViewContentMediaDidEndPlay;
- (void)onFinderLandScapeVideoDisplayViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFinderLandScapeVideoDisplayViewDidClickPlayNextVideoWithDataItem:(WCFinderDataItem *)arg1;
- (WCFinderFeedContentVM *)finderLandScapeVideoDisplayViewGetNextContinuePlayableContentVM;
- (WCFinderFeedContentVM *)finderLandScapeVideoDisplayViewGetNextPlayableContentVM;
- (void)onFinderLandScapeVideoDisplayViewDidClickFriendLikeViewWithContentVM:(WCFinderFeedContentVM *)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidEndLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidStartLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeVideoDisplayViewEndPan;
- (void)onFinderLandScapeVideoDisplayViewStartPan;
- (void)onFinderLandScapeVideoDisplayViewDidClickHotCommentView:(WCFinderComment *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onFinderLandScapeVideoDisplayViewDidClickPlayRateBtnWithRate:(double)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickBulletBtn;
- (void)onFinderLandScapeVideoDisplayViewDidClickReturnBtn;
- (void)onFinderLandScapeVideoDisplayViewDidClickPauseBtn:(_Bool)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickRotateBtn;
@end

